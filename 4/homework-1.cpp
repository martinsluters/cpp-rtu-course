/**
 * Simple example of cmath lib usage
 */
#include <iostream>
#include <cmath>
#include <string>
#include <sstream>


using namespace std;

// Wrap negative number with brackets for text output
string wrap_brackets_negative_number( float number ) {
	stringstream ss;
	ss << number;
	return 0 > number ? "(" + ss.str() + ")" : ss.str();
}

//y = 3 * sqrt( a-b ) / pow( 5-c+b, 2 )
int main() {
	float a,b,c,y;

	cout << "\nVienādojums:\n\n\n";
	cout << "         √(a-b)\n" << "y = 3 * ————————\n" << "        (5-c+b)²\n\n\n";

	cout << "Ievadiet jebkurus trīs skaitļus b, a un c, kur:\n";
	cout << "   1) b nedrīkst būt lielāks par a\n";
	cout << "   2) b-c nedrīkst būt vienāds ar -5 (negatīvu pieci)\n\n";

	cout << "b: ";
	cin >> b;

	do {
		cout << "a (ne mazāks kā " << b << "): ";
		cin >> a;
	} while ( a < b );

	do {
		cout << "c (skaitlis nedrīkst būt vienāds ar " << b+5 << "): ";
		cin >> c;
	} while ( c == b+5 );

	y = 3 * sqrt( a-b ) / pow( 5-c+b, 2 );

	cout << "\n\n     √(a-b)          √(" << a << "-"<< wrap_brackets_negative_number( b ) <<")\n" << "3 * ————————  =  3 * ————————    =  " << y << "\n" << "    (5-c+b)²         (5-"<< wrap_brackets_negative_number( c ) << "+"<< wrap_brackets_negative_number( b ) <<")²\n\n\n";
	return 1;
}