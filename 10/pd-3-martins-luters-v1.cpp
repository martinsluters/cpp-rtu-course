/**
 * [LV]
 * Aizpildīt masīvu Maas_1 ar gadījuma skaitļiem no -7 līdz 7.
 * Izveidot jaunu masīvu Mas_2, kuru vērtības ir iepriekšējā masīva elementu summa līdz noteiktam elementam.
 * Piem., Mas_1[0]=1 à Mas_2[0]=1, Mas_1[1]=4à Mas_2[1]=1+4=5 utt.
 */

#include <iostream>
using namespace std;

int main() {

	srand( time( NULL ) );

	int arr_len = 10, Maas_1[ arr_len ], Mas_2[arr_len], current_total_sum = 0, i;

	for ( i = 0; i < arr_len; i++ ) {
	    Maas_1[i] =  rand() %  15 - 7;
	    current_total_sum += Maas_1[i];
		Mas_2[i] = currenta_total_sum;
		cout << Maas_1[i] << "\t";
	}

	cout << "\n\n";

	for ( i = 0; i < arr_len; i++ ) {
	   cout << Mas_2[i] << "\t";
	}

	return 0;
}