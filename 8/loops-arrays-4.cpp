/*
Bubble sort example
2, 1, 5, 4, 3
1, 2, 5, 4, 3   N 4 i 0
1, 2, 5, 4, 3   N 4 i 1
1, 2, 4, 5, 3   N 4 i 2
1, 2, 4, 3, 5   N 4 i 3

1, 2, 4, 3, 5   N 3 i 0
1, 2, 4, 3, 5   N 3 i 1
1, 2, 3, 4, 5   N 3 i 2

1, 2, 3, 4, 5   N 2 i 0
1, 2, 3, 4, 5   N 2 i 0

1, 2, 3, 4, 5   N 1 i 0

-----------------------------

5, 4, 3, 2, 1
4, 5, 3, 2, 1   N 4 i 0
4, 3, 5, 2, 1   N 4 i 1
4, 3, 2, 5, 1   N 4 i 2
4, 3, 2, 1, 5   N 4 i 3

3, 4, 2, 1, 5   N 3 i 0
3, 2, 4, 1, 5   N 3 i 1
3, 2, 1, 4, 5   N 3 i 2

2, 3, 1, 4, 5   N 2 i 0
2, 1, 3, 4, 5   N 2 i 1

1, 2, 3, 4, 5   N 2 i 1
*/

#include <iostream>
using namespace std;

int main() {

	srand( time( NULL ) );

	int arr_len = 5, array[ arr_len ], i;
	for ( i = 0; i < arr_len; i++ ) {
		array[i] = rand() % 100 + 1;
		cout << array[i] << "\t";
	}

	for ( int N = arr_len-1; N > 0; N-- ) {
		for ( int i = 0; i < N; i++ ) {
			int pal = array[i];
			if ( array[i] > array[i + 1] ) {
				array[i] = array[i + 1 ];
				array[i + 1] = pal;
			}
		}
	}

	cout << "\n\n";

	for ( i = 0; i < arr_len; i++ ) {
		cout << array[i] << "\t";
	}

	return 0;
}