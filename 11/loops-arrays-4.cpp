/**
 * [LV]
 * Sakārtot visu divdimensiju masīvu augošā secībā pa rindām un kolonām
 */

#include <iostream>
using namespace std;

int main() {
	srand( time( NULL ) );
	int total_sum_col, arr_len = 4, array[ arr_len ][ arr_len ], i, j, N, pal;

	cout << "ORIĢINĀLAIS MASĪVS" << "\n\n";
    for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
		    array[i][j] = rand() % 5 + 1;
			cout << array[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "\n\n";

	for ( i = 0; i < arr_len; i++ ) {
		for( N = arr_len-1; N > 0; N-- ) {
			for ( j = 0; j < N; j++ ) {
				pal = array[i][j];
				if ( array[i][j] > array[i][j+1] ) {
					array[i][j] = array[i][j+1];
					array[i][j+1] = pal;
				}
			}
		}
	}

	cout << "MASĪVS SAKĀRTOTS AUGOŠĀ SECĪBĀ PA RINDĀM" << "\n\n";
	for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
			cout << array[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "\n\n";

	for ( j = 0; j < arr_len; j++ ) {
		for( N = arr_len-1; N > 0; N-- ) {
			for ( i = 0; i < N; i++ ) {
				pal = array[i][j];
				if ( array[i][j] > array[i+1][j] ) {
					array[i][j] = array[i+1][j];
					array[i+1][j] = pal;
				}
			}
		}
	}

	cout << "MASĪVS SAKĀRTOTS AUGOŠĀ SECĪBĀ PA KOLONĀM PĒC SAKĀRTOŠANAS AUGOŠĀ SECĪBĀ PA RINDĀM" << "\n\n";
	for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
			cout << array[i][j] << "\t";
		}
		cout << "\n";
	}

	return 0;
}