/**
 * Simple example of cmath lib usage
 */
#include <iostream>
#include <cmath>


using namespace std;

// Lietotājs ievada desas cenu (ar PVN)
// un daudzumu un burkānu cenu (ar PVN)
// un daudzumu, aprēkināt cik ir jāsamaksā
// pie kases un cik ir PVN (preces +21% tiek maksāts veikalā)

float round_price( float price ) {
	return round( price * 100 ) / 100;
}

float get_price_wo_vat( float price ) {
	return  round( ( price / 1.21) * 100 ) / 100;
}

float get_price_vat( float price ) {
	return  price - get_price_wo_vat( price );
}

void process_questions() {
	int no_products = 2;
	string name_of_product_arr[no_products];
	int count_of_product_arr[no_products];
	float price_of_product[no_products];
	float total_price_with_pvn = 0;
	int i = 0;

	while ( i < no_products ) {

		cout << "Ievadiet " << i+1 << ". produkta nosaukumu: ";
		cin >> name_of_product_arr[i];

		cout << "Ievadiet " << i+1 << ". produkta cenu par vienu vienību: ";
		cin >> price_of_product[i];

		cout << "Ievadiet " << i+1 << ". produkta skaitu: ";
		cin >> count_of_product_arr[i];

		i++;
	}

	for ( int n = 0; n < no_products; n++  ){
		total_price_with_pvn += round_price( price_of_product[n] * count_of_product_arr[n]);
	}

	cout << "\n\n\n" << "Pirkuma kopējā cena ar PVN: €" << total_price_with_pvn << "\n";
	cout << "Pirkuma kopējā cena bez PVN: €" << get_price_wo_vat( total_price_with_pvn ) << "\n";
	cout << "Pirkuma kopējais PVN: €" << get_price_vat( total_price_with_pvn ) << "\n\n";

	cout << "PIRKUMĀ IETILPST ŠĀDAS POZĪCIJAS: " << "\n";

	for ( int n = 0; n < no_products; n++  ){
		cout << name_of_product_arr[n] << "\n";
		cout << "Cena par vienu vienību: €" << price_of_product[n]<< "\n";
		cout << "Vienību skaits pirkumā: " << count_of_product_arr[n]<< "\n";
		cout << "Cena par visu pozīciju: €" << round_price( price_of_product[n] * count_of_product_arr[n] ) << "\n\n";
	}
}

int main() {
    process_questions();
    return 1;
}