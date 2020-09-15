/**
 * [LV]
 * masīvā ir 10 skaitļi, kurus norāda programmētājs,
 * sakārtot masīvu dilstošā secībā un noteikt cik ir minimālās vērtības.
 */

#include <iostream>
using namespace std;

int main() {

	srand( time( NULL ) );

	int arr_len = 10, array[ arr_len ] = {12, 122, -121, 121, 146, 9, 0, 24, -121, 762}, i, N, curr_min_val, count_min_values = 1;

	for ( N = arr_len-1; N > 0; N-- ) {
		for ( i = 0; i < N; i++ ) {
			int pal = array[i];
			if ( array[i] < array[i + 1] ) {
				array[i] = array[i + 1 ];
				array[i + 1] = pal;
			}
		}
	}

	curr_min_val = array[arr_len-1];

	for ( i = 0; i < arr_len; i++ ) {
	    cout << array[i] << "\t";
		if ( curr_min_val == array[i] && i != arr_len-1 ) {
			count_min_values++;
		}
	}

	cout << "\n\n";

	cout << "Minimālo vērtību skaits: " << count_min_values;

	return 0;