/**
 * [LV]
 * Ābolu lasīšana un šķirošana. Izmantojot gadījuma skaitļus ģenrēt ābolu svaru
 * no 70 g līdz 150 g. Ābolus liek 3 kastēs pēc svara.
 * Mazie 70  līdz <95 g, Vidējie 95 līdz <120 g, Lielie 120 līdz 150 g.
 * Sākumā pieņemam, ka vienā kastē var ielikt 15 ābolus.
 * Jāsalasa vismaz tik ābolu, lai būtu vismaz pa 1 kastei no katra.
 *
 * [EN]
 * Collecting and sorting apples by weight.
 * Using random generated numbers from 70g to 150g give an apple a weight
 * You can sort apples in three boxes by weight.
 * Small ones (70  to <95 g), middle ones (95 to <120 g) and large ones (120 to 150 g).
 * Lets assume you can put 15 apples in each box.
 * You have to collect at least that many apples to have at least one full box of each weight class.
 */

#include <iostream>
using namespace std;

struct Apple {
	int weight, weight_class = 0;
	void init() {
		weight = rand() % 81 + 70; // 70 - 150 g
		if ( this->weight > 70 && this->weight < 95 ) {
			this->weight_class = 1;
		} else if ( this->weight >= 95 && this->weight < 120 ) {
			this->weight_class = 2;
		} else {
			this->weight_class = 3;
		}
	}
};

struct Box {
	int max_apples_possible = 15;
	int weight_class = 0;
	int number_apples_in_box_curently = 0;
	int next_apple_index = 0;

	Apple apples_container[15];

	bool is_box_full() {
		return this->number_apples_in_box_curently == this->max_apples_possible;
	}

	bool add_apple( Apple apple ) {
		if ( ! this->is_box_full() ) {
			this->maybe_set_weight_class( apple.weight_class );
			this->apples_container[next_apple_index] = apple;
			this->next_apple_index++;
			this->number_apples_in_box_curently++;
			return true;
		}
		return false;
	}

	void set_weight_class( int weight_class ) {
		this->weight_class = weight_class;
	}

	void maybe_set_weight_class( int weight_class ) {
		if ( 0 == this->weight_class ) {
			this->set_weight_class( weight_class );
		}
	}

	void reset_box() {
		this->weight_class = 0;
		this->number_apples_in_box_curently = 0;
		this->next_apple_index = 0;
	}
};

struct Garage {
	int boxes_available = 99;
	int next_box_index = 0;
	int boxes_in_garage = 0;

	bool has_weight_class_1_box = false;
	bool has_weight_class_2_box = false;
	bool has_weight_class_3_box = false;

	//Box boxes[ boxes_available ];
	Box boxes[ 99 ];

	// Vai ir pa katrai svara kategorijai pilna kaste
	bool has_each_weight_class_box() {
		if ( this->has_weight_class_1_box && this->has_weight_class_2_box && this->has_weight_class_3_box ) {
		    return true;
		}
		return false;
	}

	bool has_empty_boxes_available() {
		return this->boxes_in_garage < this->boxes_available;
	}

	bool store_box( Box box_instance ) {
		if ( this->has_empty_boxes_available() ) {
			this->boxes[ this->next_box_index ] = box_instance;
			this->next_box_index++;
			this->boxes_in_garage++;
			switch ( box_instance.weight_class ) {
				case 1:
					this->has_weight_class_1_box = true;
					break;
				case 2:
					this->has_weight_class_2_box = true;
					break;
				case 3:
					this->has_weight_class_3_box = true;
					break;
				default:
					break;
			}
			return true;
		}
		return false;
	}
};

struct Human {
	Apple pick_an_apple() {
		Apple apple;
		apple.init();
		return apple;
	}

	bool store_apple_in_box( Box& box, Apple& apple ) { // @todo does reference to apple is pllyable here
		return box.add_apple( apple );
	}

	bool store_box_in_garage( Garage& garage, Box& box ) {
		return garage.store_box( box );
	}

	bool check_is_box_full( Box& box ) {
		return box.is_box_full();
	}

	bool check_garage_has_each_weight_class_box( Garage& garage ) {
		return garage.has_each_weight_class_box();
	}

	bool check_garage_has_empty_boxes_available( Garage& garage ) {
		return garage.has_empty_boxes_available();
	}

	void empty_temporary_box( Box& box ) {
		box.reset_box();
	}

	int get_apple_weight_class( Apple& apple ) {
		return apple.weight_class;
	}
};

string _get_human_readable_weight_class_range( int weight_class ) {
	switch ( weight_class ) {
		case 1:
			return "70 to 94 g";
			break;
		case 2:
			return "95 to 119 g";
			break;
		case 3:
			return "120 to 150 g";
			break;
		default:
			return "Unknown weight range";
			break;
	}
}

void _print_garage_content( Garage& garage ) {
	int boxes_len = sizeof( garage.boxes ) / sizeof( garage.boxes[0] );
	cout << "\n";
	for ( int box_i = 0; box_i < boxes_len; box_i++ ) {
		if ( 0 != garage.boxes[box_i].weight_class ) { // lets not print available and empty boxes in garage
			cout << box_i+1 << ". box:" << "\n";
			cout << "   Weight class: " << garage.boxes[box_i].weight_class << " (" << _get_human_readable_weight_class_range( garage.boxes[box_i].weight_class ) << ")" <<  "\n";
			cout << "   Apples inside box: " << garage.boxes[box_i].number_apples_in_box_curently << "\n";
			int apples_len = sizeof( garage.boxes[box_i].apples_container ) / sizeof( garage.boxes[box_i].apples_container[0] );
			for ( int apple_i = 0; apple_i < apples_len; apple_i++ ) {
				if ( 0 != garage.boxes[box_i].apples_container[apple_i].weight_class ) { // lets not print apples that do not exist in box
					cout << "      " << apple_i+1 << ". apple weight: " << garage.boxes[box_i].apples_container[apple_i].weight << " g\n";
				}
			}
			cout << "\n\n\n";
		}
	}
}


void _maybe_print_garage_contents( Garage& garage ) {
	char answer;
	cout << "\nType 'Y' if you want to garage contents (boxes and apples): ";
	cin >> answer;
	if ( 'y' == tolower( answer ) ) {
		_print_garage_content( garage );
	}
}

void _maybe_print_debuging_information( bool& do_print_debug_info, Apple& apple, Box temporary_boxes[], Garage& garage ) {
	if ( do_print_debug_info ) {
        cout << "Apple weight: " << apple.weight << " g\n";
        cout << "Small temporary box contains apples: " << temporary_boxes[0].number_apples_in_box_curently << "\n";
        cout << "Middle temporary box contains apples: " << temporary_boxes[1].number_apples_in_box_curently << "\n";
        cout << "Large temporary box contains apples: " << temporary_boxes[2].number_apples_in_box_curently << "\n";
        cout << "Total boxes in garage: " << garage.boxes_in_garage << "\n";
		cout << "Garage contains weight class 1 box: " << garage.has_weight_class_1_box << "\n";
		cout << "Garage contains weight class 2 box: " << garage.has_weight_class_2_box << "\n";
		cout << "Garage contains weight class 3 box: " << garage.has_weight_class_3_box << "\n\n";
	}
}

bool _allow_print_debuging_information() {
	char answer;
	cout << "Type 'Y' if you want to print debugging information: ";
	cin >> answer;
	cout << "\n";
	return ( 'y' == tolower( answer ) );
}



int main() {
	srand( time( NULL ) );

	bool _print_debug_info = _allow_print_debuging_information();

	Garage dads_garage;
	Human dad;
	Box temporary_boxes[3];

	int _current_weight_class, _current_tmp_boxes_index;

	while ( ! dad.check_garage_has_each_weight_class_box( dads_garage ) && dad.check_garage_has_empty_boxes_available( dads_garage ) ) {

		Apple apple = dad.pick_an_apple();

		_current_weight_class = dad.get_apple_weight_class( apple );
		_current_tmp_boxes_index = _current_weight_class-1;

		dad.store_apple_in_box( temporary_boxes[ _current_tmp_boxes_index ], apple );
		if ( dad.check_is_box_full( temporary_boxes[ _current_tmp_boxes_index ] ) ) {
			dad.store_box_in_garage( dads_garage, temporary_boxes[ _current_tmp_boxes_index ] );
			dad.empty_temporary_box( temporary_boxes[ _current_tmp_boxes_index ] );
		}

		_maybe_print_debuging_information( _print_debug_info, apple, temporary_boxes, dads_garage );

	}

	if ( ! dad.check_garage_has_empty_boxes_available( dads_garage ) ) {
		cout << "Garage is full! It can't store more boxes." << "\n";
	}

	if ( dad.check_garage_has_each_weight_class_box( dads_garage ) ) {
		cout << "There are boxes for each weight class in garage now!" << "\n";
	}

	_maybe_print_garage_contents( dads_garage );

	return 0;
}