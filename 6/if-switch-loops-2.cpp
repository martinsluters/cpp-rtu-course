#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float cena_velosipedam, davana, diena_nopelnits, uzkr_nauda, visas_darba_dienas_nopelnits = 0;
    int dienas_stradaja = 0;

    cout << "Ievadiet velosipeda cenu: ";
    cin >> cena_velosipedam;

    if ( ! cena_velosipedam ) {
      cout << "Tev paveicās. Riteni uzdāvināja veikalnieks!";
      return 0;
    }

    cout << "Ievadiet davinātās naudas summu: ";
    cin >> davana;

    uzkr_nauda = davana;

    if ( uzkr_nauda >= cena_velosipedam ) {
      cout << "Tev paveicās. Riteni uzdāvināja vecmāmiņa!";
      return 0;
    }

    while ( uzkr_nauda < cena_velosipedam ) {
      cout << "Dodamies strādāt. Cik nopelnījāt šodien?: ";
      cin >> diena_nopelnits;
      uzkr_nauda += diena_nopelnits;
      visas_darba_dienas_nopelnits += diena_nopelnits;
      dienas_stradaja++;
    }

    cout << "Var nopirkt riteni! Uzkrātā naudas summa ir €" << uzkr_nauda << "\n";

    if ( dienas_stradaja ) {

      string day_string_v1 = dienas_stradaja > 1 ? "dienas!" : "dienu!";
      cout << "Strādāja " << dienas_stradaja << " " << day_string_v1 << "\n";

      if ( dienas_stradaja > 1 ) {
        cout << "Vidēji darba dienā nopelnīja: €" << round( (visas_darba_dienas_nopelnits / dienas_stradaja) * 100 ) / 100;
      } else {
        cout << "Darba dienā nopelnīji: €" << visas_darba_dienas_nopelnits;
      }

    }


    return 0;
}