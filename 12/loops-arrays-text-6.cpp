/**
 * [LV]
 * Masīva vērtības sakārtot pēc kārtas augošā secībā pa rindām
 *
 *  7 7 2
 *  4 1 6
 *  5 3 1
 *
 *
 *  1 1 2
 *  3 4 5
 *  6 7 7
 *
 */

#include <iostream>
using namespace std;

int main() {
	srand( time( NULL ) );
	int arr_len = 7, array[ arr_len ][ arr_len ], i, j, current_i, current_j, next_j, next_i, pal;

	// Fill array
	for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
			array[i][j] = rand() % 101;
			cout << array[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "\n\n";

	// Main bubble sort
    for ( int N = arr_len*arr_len-1; N > 0; N-- ) {
		for ( i = 0; i < N; i++ ) {
	        current_i = i/arr_len;
	        current_j = i%arr_len;

			if ( current_j + 1 < arr_len ) {
				next_j = current_j+1;
				next_i = current_i;
			} else {
				next_j = 0;
				next_i = current_i+1;
			}

			if ( array[current_i][current_j] > array[next_i][next_j] ) {
				pal = array[current_i][current_j];
				array[current_i][current_j] = array[next_i][next_j];
				array[next_i][next_j] = pal;
			}
		}
	}


	// Output
	for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
			cout << array[i][j] << "\t";
		}
		cout << "\n";
	}
	return 0;
}