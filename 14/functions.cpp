/*
Bubble sort example
*/

#include <iostream>
using namespace std;

void print_array( int array[], int arr_len ) {
	cout << "\n\n";
	for ( int i = 0; i < arr_len; i++ ) cout << array[i] << "\t";
}

void sort_array( int array[], int arr_len ) {
	for ( int N = arr_len-1; N > 0; N-- ) {
		for ( int i = 0; i < N; i++ ) {
			int pal = array[i];
			if ( array[i] > array[i + 1] ) {
				array[i] = array[i + 1 ];
				array[i + 1] = pal;
			}
		}
	}
}

int main() {

	srand( time( NULL ) );

	int arr_len = 5, array[ arr_len ], i;
	for ( i = 0; i < arr_len; i++ ) array[i] = rand() % 100 + 1;
	print_array( array, arr_len );
	sort_array( array, arr_len );
	print_array( array, arr_len );

	return 0;
}