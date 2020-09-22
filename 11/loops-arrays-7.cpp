/**
 * [LV]
 * Aprēķināt divdimesiju masīva katras rindas summu.
 */

#include <iostream>
using namespace std;

int main() {
	srand( time( NULL ) );
	int arr_len = 5, array[ arr_len ][ arr_len ], i, j, total_sum_row;

    for ( i = 0; i < arr_len; i++ ) {
    	total_sum_row = 0;
		for ( j = 0; j < arr_len; j++ ) {
		    array[i][j] = rand() % 19 - 9;
			total_sum_row += array[i][j];
			cout << array[i][j] << "  ";
		}
		cout << "Rindas summa: " << total_sum_row << "; ";
		cout << "\n";
	}

	return 0;
}