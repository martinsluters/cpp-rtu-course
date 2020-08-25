/**
 * Simple example of ctime lib usage
 */
#include <iostream>
#include <ctime>

using namespace std;

int get_current_year() {
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    return (tPtr->tm_year) + 1900;
}

bool is_eighteen_plus( int dob ) {
    if ( 18 <= get_current_year() - dob ) {
        return true;
    }

    return false;
}

string get_is_eighteen_label( int dob ) {
    if ( is_eighteen_plus( dob ) ) {
        return "pilngadīgs";
    }

    return "nepilngadīgs";
}

void process_questions() {
    string name;
    int dob;
    cout << "Ievadiet vārdu: ";
    cin >> name;
    cout << "Ievadiet dzimsanas gadu: ";
    cin >> dob;
    cout << "Tavs vārds ir " << name << " un Tu esi " << get_is_eighteen_label( dob ) << "!" << endl;
}

int main() {
    string continue_process = "ja";
    bool first_attempt = true;
    while (
        "ja" == continue_process
    ) {
        if ( first_attempt ) {
            process_questions();
            first_attempt = false;
        } else {
            cout << "Turpināt programmu (ja/ne)?" << endl;
            cin >> continue_process;
            if ( "ja" == continue_process ) {
                process_questions();
            }
        }
    }

    return 1;
}