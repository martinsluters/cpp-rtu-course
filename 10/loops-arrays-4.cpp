/**
 * 1 Masīvu aizpildīt ar atzīmēm un aprēķināt vidējo vērtību
*/


#include <iostream>
using namespace std;

int main()
{
	int arr_len = 8, uzdevums = 0, masivs[arr_len], masivanumurs, masivasumma = 0;
	string string_no[arr_len] = { "pirmo", "otro", "trešo", "ceturto", "piekto", "sesto", "septīto", "astoto" };
	double videjaatzime;

	for( int i = 0; i < arr_len; i++ ) {
		cout << "Ievadi " <<  i+1 << ". (" << string_no[i] << ") atzīmi: "; cin >> masivs[i];
	}

	for ( masivanumurs = 0; masivanumurs < arr_len; masivanumurs++ ) {
		masivasumma = masivasumma + masivs[masivanumurs];
	}
	videjaatzime = masivasumma / 8.00;
	cout << "Vidējā atzīme ir " << videjaatzime;
	return 0;
}
