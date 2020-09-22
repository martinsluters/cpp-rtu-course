/**
 * [LV]
 * Aizpildīt masīvu ar kursantu vārdiem (datu tips String).
 * Izveidot otru masīvu ar vecumu (ģenerēti intervālā  no 19 līdz 55).
 * Izdrukāt kursantus pa 2 vienā rindā (vārds un gadi)
 */

#include <iostream>
using namespace std;

int main() {

	srand( time( NULL ) );

	int arr_len = 10, students_age[arr_len], i;
	string students_name[ arr_len ];

	for ( i = 0; i < arr_len; i++ ) {
	    students_age[i] =  rand() %  35 + 19;
	    cout << "Ievadiet " << i+1 << ". studenta vārdu: ";
	    cin >> students_name[i];
	}

	cout << "\n\n";

	for ( i = 0; i < arr_len; i++ ) {
		cout << students_name[i] << ", " << students_age[i];
		if ( 0 == (i+1) % 2 )
		    cout << "\n";
		else
		    cout << "        ";

	}

	return 0;
}