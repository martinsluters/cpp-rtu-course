#include <iostream>

using namespace std;

void process_questions() {
    string hobijs, vards, uzvards;
    cout<<"Sveiki, ievadiet hobiju\n";
    cin>>hobijs;
    cout<<"Ievadiet vārdu\n";
    cin>>vards;
    cout<<"Ievadiet uzvārdu\n";
    cin>>uzvards;
    cout<<"Sveiks(a), "<<vards<<" "<<uzvards<<". Jūsu hobijs ir "<<hobijs<<".\n\n";
}

int main()
{
    string process_questions_str = "ja";
    bool first_attempt = true;
    while (
        "ja" == process_questions_str
    ) {
        if ( first_attempt ) {
            process_questions();
            first_attempt = false;
        } else {
            cout<<"Ievadīt vēlreiz (ja/ne)?\n";
            cin>>process_questions_str;
            if ( "ja" == process_questions_str ) {
                process_questions();
            }
        }
    }

    return 1;
}

