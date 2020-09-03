#include <iostream>

using namespace std;

float get_percent_single_lap_completed( float single_lap_distance, float single_lap_distnace_completed  ) {
	return ( single_lap_distnace_completed / single_lap_distance ) * 100;
}

float get_percent_total_distance_completed( float total_distance, float distance_completed  ) {
	return ( distance_completed / total_distance ) * 100;
}

int main() {
	int i, d, s = 400, atl;
	cout << "Ievadiet distances garumu (metros): ";
	cin >> d;
	atl = d % s;

	for ( i=0; ; i+=s ) {

	    if ( ! i ) {
	        cout << "STARTS\n";
	        continue;
	    }

	    if( i < d && i+atl < d ) { // ja i = 1200 un d = 1800 un atl = 200
	        cout << i << " Aplis noskriets procentuāli: " << get_percent_single_lap_completed( s, s ) << "% Pilna distance noskrieta procentuāli: " << get_percent_total_distance_completed( d, i ) << "%\n";
	    } else if ( i < d && i+atl == d ) { // ja i = 1600 un d = 1800 un atl = 200
	        cout << i << " Aplis noskriets procentuāli: " << get_percent_single_lap_completed( s, s ) << "% Pilna distance noskrieta procentuāli: " << get_percent_total_distance_completed( d, i ) << "%\n";
	        cout << i+atl << " Aplis noskriets procentuāli: " << get_percent_single_lap_completed( s, atl ) << "% Pilna distance noskrieta procentuāli: " << get_percent_total_distance_completed( d, i+atl ) << "%\n";
	        break;
	    } else if ( i == d ) { // ja i = 2000 un d = 2000 un atl = 0
	        cout << i << " Aplis noskriets procentuāli: " << get_percent_single_lap_completed( s, s ) << "% Pilna distance noskrieta procentuāli: " << get_percent_total_distance_completed( d, i+atl ) << "%\n";
	        break;
	    }

	}
	return 1;
}
