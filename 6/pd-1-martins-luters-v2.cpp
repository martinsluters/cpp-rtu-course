#include <iostream>
using namespace std;
int main() {
  int skaitlu_daudzums, i;
  float lielakais_skaitlis;

  do {
    cout << "Ievadīt skaitlu daudzumu: ";
    cin >> skaitlu_daudzums;
  } while ( skaitlu_daudzums <= 0 );

  float skaitlu_masivs[skaitlu_daudzums];

  for( i=0; i<skaitlu_daudzums; i++ ){
    cout << "Ievadīt " << i+1 << " skaitli: ";
    cin >> skaitlu_masivs[i];
  }

  lielakais_skaitlis = skaitlu_masivs[0];
    for( i=1; i<skaitlu_daudzums; i++ ) {
    if ( lielakais_skaitlis < skaitlu_masivs[i] ) {
      lielakais_skaitlis = skaitlu_masivs[i];
    }
  }

  cout << "Lielākais skaitlis ir " << lielakais_skaitlis;

  return 0;
}