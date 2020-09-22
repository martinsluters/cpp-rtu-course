/**
 * [LV]
 *
 * Izmantojot struct nevis divus masīvus
 *
 * Aizpildīt masīvu ar kursantu vārdiem (datu tips String).
 * Izveidot otru masīvu ar vecumu (ģenerēti intervālā  no 19 līdz 55).
 * Izdrukāt kursantus pa 2 vienā rindā (vārds un gadi)
 *
 */

#include <iostream>
using namespace std;

struct student {
    int age;
    string name;
};

int main() {

	srand( time( NULL ) );
	int arr_len = 10, i;
	student students[arr_len];

	for ( i = 0; i < arr_len; i++ ) {
	    students[i].age =  rand() %  35 + 19;
	    cout << "Ievadiet " << i+1 << ". studenta vārdu: ";
	    cin >> students[i].name;
	}

	cout << "\n\n";

	for ( i = 0; i < arr_len; i++ ) {
		cout << students[i].name << ", " << students[i].age;
		if ( 0 == (i+1) % 2 )
		    cout << "\n";
		else
		    cout << "        ";

	}

	return 0;
}