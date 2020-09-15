/**
 * [LV]
 * Atrast masīvā minimālo un makimālo vērtību
 * un noteikt cik ir minimālās un maksimālās vērtības
 */

#include <iostream>
using namespace std;

int main() {

	int arr_len = 10, array[ arr_len ] = {12, 762, -121, 121, 146, 9, 0, 24, -121, 762}, i, min_val, max_val, count_max_values = 0, count_min_values = 0;

	min_val = max_val = array[0];

	for ( i = 0; i < arr_len; i++ ) {
		cout << array[i] << "\t";
		if ( min_val > array[i] ) min_val = array[i];
		if ( max_val < array[i] ) max_val = array[i];
	}

	for ( i = 0; i < arr_len; i++ ) {
		if ( min_val == array[i] ) {
			count_min_values++;
		}
		if ( max_val == array[i] ) {
			count_max_values++;
		}
	}

	cout << "\n\n";
	cout << "Min value: " << min_val << "\n";
	cout << "Max value: " << max_val;

	cout << "\n\n";
	cout << "Min value count: " << count_min_values << "\n";
	cout << "Max value count: " << count_max_values;

	return 0;
}