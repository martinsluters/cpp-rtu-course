/*
* Bubble sort 2D array's each row, even rows are sorted ascending, odd rows are descending
*/

#include <iostream>
using namespace std;

int main() {

	srand( time( NULL ) );

	int arr_len_r = 6, arr_len_c = 5, array[ arr_len_r ][ arr_len_c ], i, j;

	for ( i = 0; i < arr_len_r; i++ ) {
		for ( j = 0; j < arr_len_c; j++ ) {
			array[i][j] = rand() % 100 + 1;
			cout << array[i][j] << "\t";
		}
		cout << "\n";
	}

	for ( int i = 0; i < arr_len_r; i++ ) {
		for ( int N = arr_len_c-1; N > 0; N-- ) {
			for ( j = 0; j < N; j++ ) {

				int pal = array[i][j];

				if ( i % 2) { // if even row number lets sort ASC ascending
					if ( array[i][j] > array[i][j + 1] ) {
						array[i][j] = array[i][j + 1 ];
						array[i][j + 1] = pal;
					}
				} else { // if odd row number lets sort DESC descending
					if ( array[i][j] < array[i][j + 1] ) {
						array[i][j] = array[i][j + 1 ];
						array[i][j + 1] = pal;
					}
				}
			}
		}
	}

	cout << "\n\n";

	for ( i = 0; i < arr_len_r; i++ ) {
		for ( j = 0; j < arr_len_c; j++ ) {
			cout << array[i][j] << "\t";
		}

		if ( i % 2 ) {
			cout << "Ascending order";
		} else {
			cout << "Descending order";
		}
		cout << "\n";
	}

	return 0;
}