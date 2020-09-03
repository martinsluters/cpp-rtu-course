#include <iostream>

using namespace std;

int main() {
	int i, d, s = 400, atl;
	cout << "Ievadiet distances garumu (metros): ";
	cin >> d;
	atl = d % s;

	for ( i=0; ; i+=400 ) {

	    if( i < d && i+atl < d ) {
	        cout << i << "\n";
	    } else if ( i < d && i+atl == d ) {
	        cout << i << "\n";
	        cout << i+atl << "\n";
	        break;
	    } else if ( i < d ) {
	        cout << i+atl << "\n";
	        break;
	    } else if ( i == d ) {
	        cout << i << "\n";
	        break;
	    }

	}
	return 1;
}