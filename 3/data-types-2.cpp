/**
 * Simple example of ctime lib usage
 */
#include <iostream>
#include <ctime>

using namespace std;

struct tm* get_localtime() {
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    return tPtr;
}

int get_current_day() {
    return get_localtime()->tm_mday;
}

int get_current_month() {
    return (get_localtime()->tm_mon) + 1;
}

int get_current_year() {
    return (get_localtime()->tm_year) + 1900;
}

bool is_eighteen_plus( int yob, int mob, int dob ) {
    if ( 18 < get_current_year() - yob ) {
        return true;
    } else if ( 18 == get_current_year() - yob  ) {
        if ( get_current_month() > mob ) {
            return true;
        } else if ( get_current_month() == mob ) {
            if ( get_current_day() > dob || get_current_day() == dob ) {
                return true;
            }
        }
    }

    return false;
}

string get_is_eighteen_label( int yob, int mob, int dob ) {
    if ( is_eighteen_plus( yob, mob, dob ) ) {
        return "pilngadīgs";
    }

    return "nepilngadīgs";
}

void process_questions() {
    string name;
    int yob, mob, dob;
    cout << "Ievadiet vārdu: ";
    cin >> name;
    cout << "Ievadiet dzimšanas gadu: ";
    cin >> yob;
    cout << "Ievadiet dzimšanas mēnesi (1-12): ";
    cin >> mob;
    cout << "Ievadiet dzimšanas mēneša dienu (1-31): ";
    cin >> dob;
    cout << "Tavs vārds ir " << name << " un Tu esi " << get_is_eighteen_label( yob, mob, dob ) << "!" << endl << endl;
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