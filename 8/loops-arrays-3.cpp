#include <iostream>
using namespace std;

int main() {
	int sum = 0, r, c, array[3][5], sum_r[3] = {0,0,0}, sum_c[5] =  {0,0,0,0,0};
	srand( time ( NULL ) );
	for ( r = 0; r < 3; r++ ) {
		for ( c = 0; c < 5; c++ ) {
			array[r][c] = rand() % 10 + 5;
			cout << array[r][c] << "\t";
			sum_r[r] = sum_r[r] + array[r][c];
			sum_c[c] = sum_c[c] + array[r][c];
			sum += array[r][c];
		}
		cout << "\tColumn sum: " << sum_r[r];
		cout << "\n";
	}

	cout << "\nArray sum is " << sum << "\n";

	for( c = 0; c < 5; c++ ) cout << sum_c[c] << "\t";

	for( r = 0; r < 5; r++ ) cout << "\n" << sum_r[r] << "\t";

	return 0;
}