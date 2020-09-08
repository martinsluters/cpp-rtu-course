#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float cena_velosipedam, diena_nopelnits, uzkr_nauda = 0;
    int dienas_stradaja = 0;

    cout << "Ievadiet velosipeda cenu: ";
    cin >> cena_velosipedam;

    if ( 0 >= cena_velosipedam ) {
      cout << "Tev paveicās. Riteni uzdāvināja veikalnieks!";
      return 0;
    }

    do {
      cout << "Dodamies strādāt. Cik nopelnījāt šodien?: ";
      cin >> diena_nopelnits;
      uzkr_nauda += diena_nopelnits;
      dienas_stradaja++;
    } while ( uzkr_nauda < cena_velosipedam );


    cout << "Var nopirkt riteni! Uzkrātā naudas summa ir €" << uzkr_nauda << "\n";

    string day_string_v1 = dienas_stradaja > 1 ? "dienas!" : "dienu!";
    cout << "Strādāja " << dienas_stradaja << " " << day_string_v1 << "\n";

    if ( dienas_stradaja > 1 ) {
      cout << "Vidēji darba dienā nopelnīja: €" << round( ( uzkr_nauda / dienas_stradaja ) * 100 ) / 100;
    } else {
      cout << "Darba dienā nopelnīji: €" << uzkr_nauda;
    }

    if ( cena_velosipedam < uzkr_nauda ) {
      cout << "\nPāri palika: €" << uzkr_nauda - cena_velosipedam;
    }

    return 0;
}