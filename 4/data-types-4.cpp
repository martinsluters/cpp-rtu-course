/**
 * Simple example of cmath lib usage
 */
#include <iostream>
#include <cmath>

using namespace std;

void process_questions() {
    float a;
    string answer;
    cout << "Pārbaudīsim vai ievadītais skaitlis ir vesels skaitlis. Ievadiet jebkuru skaitli: " << endl;
    cout << "a: ";
    cin >> a;
    answer = floor( a ) == ceil( a ) ? "Šis ir vesels skaitlis" : "Šis nav vesels skaitlis" );
    cout << answer;
}

int main() {
    process_questions();
    return 1;
}