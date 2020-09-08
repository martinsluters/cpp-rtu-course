#include <iostream>
using namespace std;
int main() {
  float pirmais_skaitlis, otrais_skaitlis, tresais_skaitlis, lielakais_skaitlis;

  cout << "Ievadīt pirmo skaitli: ";
  cin >> pirmais_skaitlis;
  cout << "Ievadīt otro skaitli: ";
  cin >> otrais_skaitlis;
  cout << "Ievadīt trešo skaitli: ";
  cin >> tresais_skaitlis;

  lielakais_skaitlis = pirmais_skaitlis;

  if ( lielakais_skaitlis < otrais_skaitlis ) {
    lielakais_skaitlis = otrais_skaitlis;
  }

  if ( lielakais_skaitlis < tresais_skaitlis ) {
    lielakais_skaitlis = tresais_skaitlis;
  }

  cout << "Lielākais skaitlis ir " << lielakais_skaitlis;

  return 0;
}