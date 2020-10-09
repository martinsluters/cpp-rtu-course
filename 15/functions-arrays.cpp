/**
 * Ievadīt no tastatūras divus vārdu un no tiem salikt trešo vārdu, kas
 * veidots viens burts no pirmā vārda, otrs no otra vārda.
 * Ja kāds vārds beidzas, tad ņem burtus no sākuma.
 * Jāizmanto cikls. Piem., Ina, Ingaà rezultāts- IInnagIa.
 */

#include <iostream>
#include <string>
using namespace std;

string first_word, second_word, combi_word;
int first_word_size, second_word_size, i = 0, f_i = 0, s_i = 0, loop_len;


void capture_names() {
	cout << "Lūdzu ievadiet pirmo vārdu: ";
	cin >> first_word;
	cout << "\nLūdzu ievadiet otro vārdu: ";
	cin >> second_word;
}

void setup_sizes() {
	first_word_size = first_word.size();
	second_word_size = second_word.size();
}

void combinate_words() {
	if ( 0 == first_word_size || 0 == second_word_size ) return;

	loop_len = first_word_size > second_word_size ? first_word_size : second_word_size;

	for ( ; i < loop_len; i++ ) {
		combi_word += string( 1, first_word[f_i] ) + second_word[s_i];
		f_i = f_i+1 == first_word_size ? 0 : f_i+1;
		s_i = s_i+1 == second_word_size ? 0 : s_i+1;
	}
}

void print_results() {
	cout << "\n";
	cout << combi_word;
}

int main() {

	capture_names();
	setup_sizes();
	combinate_words();
	print_results();

	return 0;
}