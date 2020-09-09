/**
 * Multiplication table in high wind speeds
 */

#include <iostream>
using namespace std;

string print_spaces( int no_spaces ) {
  string spaces = "";
  for ( no_spaces; no_spaces > 0; no_spaces-- ) {
    spaces += " ";
  }
  return spaces;
}

int main() {
    int multiplied;
    for( int i = 1; i <= 10; i++ ){
        if ( 1 < i ) {
            cout << "\n" << print_spaces( i-1 );
        }
       for( int j = 1; j <= 10; j++ ) {
           multiplied = j*i;
           cout << multiplied;
           if ( multiplied >= 10 ) {
               cout << "  ";
           } else {
               cout << "   ";
           }

       }
    }
    return 0;
}