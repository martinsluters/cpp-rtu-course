/**
 * [LV]
 * Sakārtot divdimensija masīva vērtības augošā
 * secībā pa rindām un aprēķināt katras rindas summu un vidējo.
 */

#include <iostream>
using namespace std;

int main() {
	srand( time( NULL ) );
	int total_sum_row, arr_len = 5, array[ arr_len ][ arr_len ], i, j, N, pal;

    for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
		    array[i][j] = rand() % 11 - 5;
			cout << array[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "\n\n\n";

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

	for ( i = 0; i < arr_len; i++ ) {
	    total_sum_row = 0;
		for ( j = 0; j < arr_len; j++ ) {
			cout << array[i][j] << "\t";
			total_sum_row += array[i][j];
		}
		cout << "Rindas summa: " << total_sum_row << "; ";
		cout << "Rindas vidējā vērtība: " << total_sum_row / ( arr_len * 1.0 ) << ";";
		cout << "\n";
	}

	return 0;
}