#include <iostream>
using namespace std;

int main() {
	int month_no = 0;
	string months[12] = {"Janvāris", "Februāris", "Marts", "Aprīlis", "Maijs", "Jūnijs", "Jūlijs", "Augusts", "Septembris", "Oktobris", "Novembris", "Decembris"};
	do {
		cout << "Please enter month number (1-12): ";
		cin >> month_no;
	} while ( month_no < 1 || month_no > 12 );

	cout << "Izvēlētais mēnesis ir " <<  months[month_no-1];

	return 0;
}