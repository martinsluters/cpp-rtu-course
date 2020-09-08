#include <iostream>
#include <algorithm> // sort
using namespace std;
int main() {
	int skaitlu_daudzums, i;
	float lielakais_skaitlis, mediana;

	do {
		cout << "Ievadīt skaitlu daudzumu: ";
		cin >> skaitlu_daudzums;
	} while ( skaitlu_daudzums <= 0 );

	float skaitlu_masivs[ skaitlu_daudzums ];

	for ( i = 0; i < skaitlu_daudzums; i++ ) {
		cout << "Ievadīt " << i + 1 << " skaitli: ";
		cin >> skaitlu_masivs[ i ];

		if ( ! i ) { // i == 0
			lielakais_skaitlis = skaitlu_masivs[ i ];
		} else if ( lielakais_skaitlis < skaitlu_masivs[ i ] ) { // i > 0
			lielakais_skaitlis = skaitlu_masivs[ i ];
		}
	}

	// Atrast mediānu
	sort( skaitlu_masivs, skaitlu_masivs + skaitlu_daudzums ); //sakārto masīvu augošā secībā. Parametri: masīva sākuma adrese, masīva pēdējā elementa beigu adrese
	bool ir_para_skailtis = ( 0 == skaitlu_daudzums % 2 ) ? true : false;

	if ( ir_para_skailtis ) { // pāra skaitlis
		int masiva_vidus_para_index_1 = skaitlu_daudzums / 2 - 1;
		int masiva_vidus_para_index_2 = skaitlu_daudzums / 2;

		float first_middle_element_value = skaitlu_masivs[ masiva_vidus_para_index_1 ];
		float second_middle_element_value = skaitlu_masivs[ masiva_vidus_para_index_2 ];

		mediana = ( first_middle_element_value + second_middle_element_value ) / 2;
	} else { // nepāra skaitlis
		mediana = skaitlu_masivs[ ( ( skaitlu_daudzums + 1 ) / 2 ) - 1 ];
	}

	cout << "Lielākais skaitlis ir " << lielakais_skaitlis << "\n";
	cout << "Mediana ir " << mediana;

	return 0;
}