#include <iostream>

using namespace std;
int main() {
	const int array_length = 3;
	int sum = 0;
	int array[array_length];
	srand( time( NULL ) );

	for ( int i = 0; i < array_length; i++ ) {
		array[i] = rand() % 100 + i;
		sum += array[i];
		cout << "array[" << i << "] = " << array[i] << "\n";
	}
	cout << "sum = " << sum;
	return 0;
}