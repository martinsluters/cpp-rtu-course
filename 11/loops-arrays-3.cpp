/**
 * [LV]
 * Sakārtot divdimensija masīva vērtības dilstošā secībā pa kolonām
 * un aprēķināt katras kolonas summu un vidējo.
 */

#include <iostream>
using namespace std;

int main() {
	srand( time( NULL ) );
	int total_sum_col, arr_len = 4, array[ arr_len ][ arr_len ], i, j, N, pal;

    for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
		    array[i][j] = rand() % 5 + 1;
			cout << array[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "\n\n\n";

	for ( j = 0; j < arr_len; j++ ) {
		for( N = arr_len-1; N > 0; N-- ) {
			for ( i = 0; i < N; i++ ) {
				pal = array[i][j];
				if ( array[i][j] < array[i+1][j] ) {
					array[i][j] = array[i+1][j];
					array[i+1][j] = pal;
				}
			}
		}
	}

	cout << "MASĪVS SAKĀRTOTS DILSTOŠĀ SECĪBĀ PA KOLONĀM" << "\n\n";
	for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
			cout << array[i][j] << "\t";
		}
		cout << "\n";
	}

	cout << "\n\n\n";

	for ( j = 0; j < arr_len; j++ ) {
	    total_sum_col = 0;
		for ( i = 0; i < arr_len; i++ ) {
			total_sum_col += array[i][j];
		}
	    cout << j+1 << ". kolonnas summa: " << total_sum_col << "; ";
		cout << j+1 << ". kolonnas vidējā vērtība: " << total_sum_col / ( arr_len * 1.0 ) << ";";
		cout << "\n";
	}

	return 0;
}