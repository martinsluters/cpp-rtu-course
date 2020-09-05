#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float cena_velosipedam, davana, diena_nopelnits, uzkr_nauda, visas_darba_dienas_nopelnits = 0;
    int dienas_stradaja = 0;

    cout << "Ievadiet velosipeda cenu: ";
    cin >> cena_velosipedam;

    cout << "Ievadiet davinātās naudas summu: ";
    cin >> davana;

    uzkr_nauda = davana;

    while ( uzkr_nauda < cena_velosipedam ) {
      cout << "Dodamies strādāt. Cik nopelnījāt šodien?: ";
      cin >> diena_nopelnits;
      uzkr_nauda += diena_nopelnits;
      visas_darba_dienas_nopelnits += diena_nopelnits;
      dienas_stradaja++;
    }

    cout << "Var nopirkt riteni! Uzkrātā naudas summa ir €" << uzkr_nauda << "\n";

    cout << "Strādāja " << dienas_stradaja << " dienas\n";

    if ( dienas_stradaja ) {
      cout << "Vidēji darba dienā nopelnīja: €" << round( (visas_darba_dienas_nopelnits / dienas_stradaja) * 100 ) / 100;
    }


    return 0;
}