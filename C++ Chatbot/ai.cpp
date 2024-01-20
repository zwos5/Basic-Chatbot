#include <iostream>
#include <string>
#include "aifunctions.h"

using namespace std;

int main()
{
    char cont;
    cout << "===================[CHAT WITH CBOT]===================\n";
    Greeting();
    do {
        GetRequest();
        cout << "Want to continue? " << endl;
        cin >> cont;
    }while(cont != 'n');
}