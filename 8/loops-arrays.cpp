#include <iostream>
using namespace std;

int main() {
	int sum = 0, r, c, array[3][5];
	srand( time ( NULL ) );
	for ( r = 0; r < 3; r++ ) {
		for ( c = 0; c < 5; c++ ) {
			array[r][c] = rand() % 10 + 5;
			cout << array[r][c] << "\t";
			sum += array[r][c];
		}
		cout << "\n";
	}

	cout << "\nArray sum is " << sum;

	return 0;
}