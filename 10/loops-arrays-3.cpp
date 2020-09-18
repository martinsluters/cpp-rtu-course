/**
 * [LV]
 *
 * Masīvu aizpildīt ar atzīmēm un saskaitīt cik kādas atzīmes ir
 */

#include <iostream>
using namespace std;

int main() {

	srand( time( NULL ) );

	int arr_len = 10, array[ arr_len ], grade_count_array[11] = {0,0,0,0,0,0,0,0,0,0,0}; // 11 jo atzīme var būt arī 0

	for ( int i = 0; i < arr_len; i++ ) {
	    array[i] = rand() %  11;
	    grade_count_array[ array[i] ]++;
	    cout << array[i] << "\t";
	}

	cout << "\n\n";

	for ( int i = 0; i < 11; i++ ) {
		if ( grade_count_array[i] ) {
			string ending = grade_count_array[i] == 1 ? " reizi" : " reizes";
			cout << "Atzīme " << i << " ir atrodama " << grade_count_array[i] << ending << ".\n";
		}
	}

	return 0;
}