#include <iostream>
using namespace std;
int main() {


    for( int i = 1; i <= 10; i++ ){
        if ( 1 != i ) {
            cout << "\n";
        }
       for( int j = 1; j <= 10; j++ ) {
           int multiplied = j*i;
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