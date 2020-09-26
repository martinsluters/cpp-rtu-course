/**
 * [LV]
 * Traffic lights
 *
 * WARNING: Infinite loop with sleep
 */

#include <iostream>
#include <unistd.h>
using namespace std;

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define YELLOW  "\033[33m"
#define GREEN   "\033[32m"
#define CLEAR_SCREEN "\x1B[2J"
#define COURSOR_LEFT "\x1B[H"

int main() {
    int j, i;
    int positions = 4;
    int colour_count = 3;
    int positions_settings[positions][colour_count] = { {1, 0, 0}, {1, 1, 0}, {0, 0, 1}, {0, 1, 0} };
    string text[colour_count] = { "Sarkans", "Dzeltens", "Zaļš" };
    string colours[colour_count] = { RED, YELLOW, GREEN };
    int sleep_time[positions] = { 4, 1, 4, 1 };

    for( i = 0; i < positions; i++ ) {
        cout << CLEAR_SCREEN << COURSOR_LEFT;
        for( j = 0; j < colour_count; j++ ) {
            if ( 0 != positions_settings[i][j] ) {
                cout << colours[j] << text[j] << "\n" ;
            }
        }

        cout.flush(); // Flush buffer
        sleep(sleep_time[i]);

        if ( i+1 == positions ) i = -1;
    }
}