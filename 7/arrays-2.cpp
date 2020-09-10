/**
 * Aprēķiniet viendimensija masīva summu un reizinājumu, elementu vērtības intervālā no -3 līdz 12
 *
 * [LV]
 * Programma ļauj ievadīt integer tipa masīva izmēru no konsoles.
 * Katra masīva elementa vērtība ir gadījuma int tipa skaitlis no -3 līdz 12.
 * Masīva elementu vērtības tiek saskaitītas un izvadītas termināla logā.
 * Masīva elementu vērtības tiek sareizinātas un izvadītas termināla logā.
 *
 * Tā kā masīva elementu skaits var tikt ievadīts subjektīvi liels skaitlis, tad,
 * lai nodemonstrētu izpratni par atmiņas kapacitāti, kādu piešķir integer tipa skaitlim,
 * tiek pārbaudīts vai elementu summa un reizinājums tekošajā iterācijā būtu starp integer
 * datu tipa minimuma un maximuma vērtībām. Attiecīgi tiek izvadīts paziņojums, ja skaitlis ir
 * ārpus šīm vērtībām.
 * Minimuma un maximuma vērtības var būt atkarīgas no operētējsistēmas.
 * Speciāli netika izvēlēts long long int tips.
 *
 */

#include <iostream>
#include <limits> // in order to check data type range limits
using namespace std;

string maybe_exceeded_limit_text( bool is_exceeded ) {
    return is_exceeded ? " Unfortunately we could not process all numbers due to the memory limit that data type <int> can store." : "";
}

int main() {
	srand( time( NULL ) );
	bool is_multiplication_size_exceeded = false, is_sum_size_exceeded = false, array_contains_zero = false;
	int array_length, rand_number;
	int sum = 0, multiplication = 1;

	do {
		cout << "Ievadiet skaitļu masīva izmēru: ";
		cin >> array_length;
	} while ( 0 > array_length );

	int array[array_length];

	for ( int i = 0; i < array_length; i++ ) {

		rand_number = rand() % 16 - 3; // range -3 to 12
		array[i] = rand_number;

		if ( rand_number == 0 ) {
		    array_contains_zero = true; // Flag that there is a 0 in array
		}

		if (
		    ! is_sum_size_exceeded && // Lets not do further checks if exceeded already
		    numeric_limits<int>::max() >= sum + array[i] &&
		    numeric_limits<int>::min() <= sum + array[i]
		) {
		    sum += array[i];
		} else {
		    is_sum_size_exceeded = true; // Flag that sum number has exceeded limits
		}

		if (
		    ! is_multiplication_size_exceeded && // Lets not do further checks if exceeded already
		    numeric_limits<int>::max() >= multiplication * array[i] &&
		    numeric_limits<int>::min() <= multiplication * array[i]
		) {
		    multiplication *= array[i];
		} else {
		    is_multiplication_size_exceeded = true; // Flag that multiplication number has exceeded limits
		}

		cout << "array[" << i << "] = " << array[i] << "\n";
	}

    // Even if the size might be exceed for multiplication, if there is a zero (0) value
    // in the array lets not show the memory limt message and lets reset the value to 0 as the
    // the array element with value 0 could be after the point where number exceeded limits
    if ( array_contains_zero ) {
        is_multiplication_size_exceeded = false;
        multiplication = 0;
    }

	cout << "sum = " << sum << maybe_exceeded_limit_text( is_sum_size_exceeded ) <<"\n";
	cout << "multiplication = " << multiplication << maybe_exceeded_limit_text( is_multiplication_size_exceeded );
	return 0;
}