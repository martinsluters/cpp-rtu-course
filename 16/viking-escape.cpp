/**
 * "Help the viking to find his ship!"
 * A simple C++ ASCII game.
 *
 * @version 0.1
 * @author Martins Luters
 * Contact: luters.martins@gmail.com
 *
 * The software utilises external "ncurses" library which needs
 * to be linked to this file while compilating.
 *
 * ncurses (new curses) is a programming library providing
 * an application programming interface (API) that allows
 * the programmer to write text-based user interfaces
 * in a terminal-independent manner.
 *
 * 1. To install ncurses on MAC (requires Homebrew package manager):
 * brew install ncurses
 *
 * 2. Compiling the file from terminal MAC with g++ compiler:
 * g++ -L/usr/local/opt/ncurses/lib viking-escape.cpp -o viking-escape -lncurses
 **/

#include <iostream>
#include <unistd.h>
#include <ncurses.h>
using namespace std;

const int map_height = 13, map_width = 19, ship_height = 5, ship_width = 9;
const char viking_char = '#';
int viking_coordinates[] = { 0, 10 }; // [0] = y axes, [1] = x axes
int coordinates_ship[] = { 12, 1 }; // [0] = y axes, [1] = x axes
bool viking_found_ship = false; // Global main state flag
int i, j, n;

// Ship ASCII graphic
const string ship[ship_height][ship_width] =	{
	{ " ", " ", " ", " ", "_", " ", " ", " ", " " },
	{ " ", " ", " ", "/", "|", "\\", " ", " ", " " },
	{ " ", " ", "/", "_", "|", "_", "\\", " ", " " },
	{ "_", "_", "_", "_", "|", "_", "_", "_", "_" },
	{ "\\", "_", "o", "_", "o", "_", "o", "_", "/" }
};

// Map ASCII graphic
const string map[map_height][map_width] = {
	{ ".", "-", "-", ".", "-", "-", ".", "-", "-", ".", " ", ".", "-", "-", "-", ".", "-", "-", "." },
	{ "|", " ", " ", " ", " ", " ", "|", " ", " ", " ", " ", " ", " ", " ", " ", "|", " ", " ", "|" },
	{ ":", " ", " ", ":", "-", "-", ":", " ", " ", ":", " ", " ", ":", " ", " ", ":", " ", " ", ":" },
	{ "|", " ", " ", "|", " ", " ", " ", " ", " ", "|", " ", " ", "|", " ", " ", " ", " ", " ", "|" },
	{ ":", " ", " ", ":", " ", " ", ":", " ", " ", ":", "-", "-", ":", "-", "-", ":", "-", "-", ":" },
	{ "|", " ", " ", "|", " ", " ", "|", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", "|" },
	{ ":", " ", " ", ":", " ", " ", ":", "-", "-", ":", "-", "-", ":", "-", "-", ":", " ", " ", ":" },
	{ "|", " ", " ", "|", " ", " ", " ", " ", " ", " ", " ", " ", "|", " ", " ", "|", " ", " ", "|" },
	{ ":", " ", " ", ":", "-", "-", ":", "-", "-", ":", " ", " ", ":", " ", " ", ":", " ", " ", ":" },
	{ "|", " ", " ", " ", " ", " ", "|", " ", " ", " ", " ", " ", "|", " ", " ", "|", " ", " ", "|" },
	{ ":", "-", "-", ":", " ", " ", ":", " ", " ", ":", "-", "-", ":", " ", " ", ":", " ", " ", ":" },
	{ "|", " ", " ", " ", " ", " ", " ", " ", " ", "|", " ", " ", " ", " ", " ", " ", " ", " ", "|" },
	{ ":", " ", ":", "-", "-", "-", ":", "-", "-", ":", "-", "-", ":", "-", "-", ":", "-", "-", ":" }
};

/**
 * Checks if current viking coordinates matches the ship coordinates
 * @return bool true if they match, false if they don't
 * @since 0.1
 */
bool has_found_ship() {
	return ( viking_coordinates[0] == coordinates_ship[0] && viking_coordinates[1] == coordinates_ship[1] );
}

/**
 * Loops through the map defining strings
 * and at a certain position on screen prints
 * the first char from string.
 * @return void
 * @since 0.1
 */
void draw_maze() {
	mvprintw(0, 0, "Help the viking to find his ship!" ); // @TODO move outside this function
	for ( i = 0; i < map_height; i++ ){
		for ( j = 0; j < map_width; j++ ) {
			if ( viking_coordinates[0] == i && viking_coordinates[1] == j ) {
 				mvprintw(i+2, j, &viking_char );
			} else {
				mvprintw(i+2, j, &map[i][j][0] );
			}
		}
	}
	return;
}

/**
 * Checks if the passed move action coordinates are valid,
 * they can't be a wall or out of map bounds
 *
 * @param  next_viking_coord_x int constant passed by reference which is responsible for x axes
 * @param  next_viking_coord_y int constant passed by reference which is responsible for y axes
 * @return bool true if move is valid, false if not valid
 * @since 0.1
 */
bool validate_move( const int& next_viking_coord_x, const int& next_viking_coord_y ) {
	if (
		next_viking_coord_x >= map_width ||
		next_viking_coord_x < 0 ||
		next_viking_coord_y >= map_height ||
		next_viking_coord_y < 0
	) {
		return false;
	}

	return " " == map[ next_viking_coord_y ][ next_viking_coord_x ];
}

/**
 * Depending on if a valid move, change the viking coordinates.
 * @param  move int constant passed by reference containing pressed key numeric value
 * @return bool true if global viking coordinates ver changed (moved), false if not
 * @since 0.1
 */
bool move_viking ( const int& move ) {
	int _next_viking_coord_y = viking_coordinates[0], _next_viking_coord_x = viking_coordinates[1];

	switch ( move ) {
		case KEY_DOWN:
			_next_viking_coord_y++;
			break;
		case KEY_UP:
			_next_viking_coord_y--;
			break;
		case KEY_LEFT:
			_next_viking_coord_x--;
			break;
		case KEY_RIGHT:
			_next_viking_coord_x++;
			break;
		default:
			break;
	}

	if ( validate_move( _next_viking_coord_x, _next_viking_coord_y ) ) {
		viking_coordinates[0] = _next_viking_coord_y;
		viking_coordinates[1] = _next_viking_coord_x;
		return true;
	}
	return false;
}

/**
 * Main function to navigate viking
 * @return void
 * @since 0.1
 */
void navigate_viking() {
	int move;
	while ( ! has_found_ship() ) {
		move = getch();
		if ( move_viking( move ) ) {
			draw_maze();
			refresh();
		}
	}
	return;
}

/**
 * Draw a ship
 * @param x_position_increment int responsible for movements across time
 * @return void
 * @since 0.1
 */
void draw_ship( int x_position_increment ) {
	mvprintw(0, 0, "Thank you, the viking can sail back to Scandinavia now!" ); // @TODO move outside this function
	int y_position_increment = x_position_increment % 2 == 0 ? 2 : 0;
	for ( i = 0; i < ship_height; i++ ){
		for ( j = 0; j < ship_width; j++ ) {
			mvprintw( i + 2 + y_position_increment, j + x_position_increment, &ship[i][j][0] );
		}
	}
	return;
}

/**
 * Animate the ship by moving up and down forward (right side screen) across time
 * Movement every 0.5 seconds
 * @return void
 * @since 0.1
 */
void draw_ship_animation() {
	for ( n = 0; n < 15; n++ ) {
		draw_ship( n );
		refresh();
		usleep( 500000 ); // 0.5s
		erase();
	}
	return;
}

int main() {
	initscr();
	noecho();
	keypad( stdscr, true ); // enables keypad; stdscr is the main window pointer

	draw_maze(); // Initial draw of the maze map including the initial viking coordinates
	navigate_viking();

	erase();
	draw_ship_animation();

	endwin();
	return 0;
}