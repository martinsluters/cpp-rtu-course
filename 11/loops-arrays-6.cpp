/**
 * [LV]
 * Aizpildīt divdimensija masīvu ar gadījuma skaitļiem no -9 līdz 9 un noteikt
 * vai kādi no skaitļiem ir vairāk – pozitīvo (iesk. 0) vai negatīvo (0-pozitīvs)
 */

#include <iostream>
using namespace std;

int main() {
	srand( time( NULL ) );
	int arr_len = 5, array[ arr_len ][ arr_len ], i, j, no_positive = 0, no_negative = 0;

    for ( i = 0; i < arr_len; i++ ) {
		for ( j = 0; j < arr_len; j++ ) {
		    array[i][j] = rand() % 19 - 9;
		  	if ( array[i][j] >= 0)
		  		no_positive++;
		  	else
		  		no_negative++;
			cout << array[i][j] << "  ";
		}
		cout << "\n";
	}

	cout << "\n\n";
	cout << "Pozitīvo skaitļu (ieskaitot 0) skaits masīvā: " << no_positive << "\n";
	cout << "Negatīvo skaitļu skaits masīvā: " << no_negative;

	return 0;
}