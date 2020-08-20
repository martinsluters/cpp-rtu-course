#include <iostream>

using namespace std;

bool runCodeCheck() {
    string answer = "default";
    while (
        "ja" != answer &&
        "ne" != answer &&
        "" != answer
    ) {
        cout<<"Zīmēt (ja/ne)? \n\r";
        cin>>answer;
    }
    if ( "ja" == answer ) {
        return true;
    } else if (  "ne" == answer ) {
        return false;
    }
}

int main()
{
    if ( runCodeCheck() ) {
        cout<<"  ___\n";
        cout<<" //    --¯¯--   --¯¯--\n";
        cout<<"((     --__--   --__--\n";
        cout<<" \\\\__                 \n";
        cout<<"\n";
        cout<<"____  ______ __ __    __ __ __ __ ____   __   __\n";
        cout<<"|| \\\\ | || | || ||    || // || || || \\\\ (( \\ (( \\\\ \n";
        cout<<"||_//   ||   || ||    ||<<  || || ||_//  \\\\   \\\\ \n";
        cout<<"|| \\\\   ||   \\\\_//    || \\\\ \\\\_// || \\\\ \\_)) \\_))\n";

    }

    return 0;
}

