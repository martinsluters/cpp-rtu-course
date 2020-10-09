/*
*
* 2. Lietotājs ievada skaitli no 1 līdz 10 un tiek izdrukāts
* katrs ceturtais skaitlis, sākot no ievadītā skaitļa līdz 100
*/

#include <iostream>
using namespace std;

bool is_number_in_range( int number ) {
    return ( number >= 1 && number <= 10 );
}

int main() {
    int number = 0, counter = 0;
    cout << "Ievadiet veselu skaitli robežās no 1 līdz 10: \n";
    while ( ! is_number_in_range( number ) ) {
        cin >> number;
    }

    for ( int i = number; i < 101; i++ ) {



        if ( counter == 4 ) {
            cout << i << " ";
            counter = 1;
        } else {
            counter++;
        }

    }
    return 0;
}