#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[] = {21,1212,-33,23,453,-100,2};
	int arr_size = sizeof( arr ) / sizeof( arr[0] ); // Var arī vinekārši ierakstīt cik daudz elementi ir masīvā
	cout << "Min element: " << *min_element( arr, arr+arr_size ) << "\n";
	cout << "Max element: " << *max_element( arr, arr+arr_size ) << "\n";
	return 0;
}
