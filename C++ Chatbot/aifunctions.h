#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#define MAX_INPUTS 7

using namespace std;

string userName;

void Greeting() {
    cout << "Hello, for starters can I get your name? \n";
    cin >> userName;
    cout << "Perfect! Hello, " << userName << endl;
}

void GetRequest() {
    
    ifstream file;
    string promptArray[MAX_INPUTS];
    file.open("prompts.txt");
    
    if(file.fail()) {
        cout << "File failed to open check the name and try again." << endl;
    }
    
    int x = 0; //Counting variable
    while(!file.eof()) {
        getline(file, promptArray[x]);
        x++;
        
        /*if(x == MAX_INPUTS) {
            cout << "Max storage reached." << endl;
        }*/ //Testing input
    }
    
    file.close();
    
    //cout << promptArray[5] << endl; Testing array storage
    
    ifstream file2;
    string responsesArray[MAX_INPUTS];
    file2.open("responses.txt");
    
    if(file2.fail()) {
        cout << "File failed to open check the name and try again." << endl;
    }
    
    int y = 0; //Counting variable
    while(!file2.eof()) {
        getline(file2, responsesArray[y]);
        y++;
        
        /*if(y == MAX_INPUTS) {
            cout << "Max storage reached." << endl;
        }*/ //Testing input
    }
    
    file2.close();
    
    //cout << responsesArray[5] << endl; Testing array storage
    
    string prompt;
    cin.ignore();
    
    cout << "What's up " << userName << "?" << endl;
    getline(cin, prompt);
    
    for(int i = 0; i < MAX_INPUTS; i++) {
        if(strcasecmp(prompt.c_str(), promptArray[i].c_str()) == 0) {
            cout << responsesArray[i] << endl;
            return;
        }
    }
    if(strcasecmp(prompt.c_str(), "sum") == 0) {
        int num1, num2;
        cout << "Give me two numbers" << endl;
        cin >> num1;
        cin >> num2;
        cout << "The two numbers added together equal " << num1 + num2 << endl;
    }
    else if(strcasecmp(prompt.c_str(), "subtract") == 0) {
        int num1, num2;
        cout << "Give me two numbers" << endl;
        cin >> num1;
        cin >> num2;
        cout << "The two numbers subtracted equal " << num1 - num2 << endl;
    }
    else if(strcasecmp(prompt.c_str(), "multiply") == 0) {
        int num1, num2;
        cout << "Give me two numbers" << endl;
        cin >> num1;
        cin >> num2;
        cout << "The two numbers multiplied equal " << num1 * num2 << endl;
    }
    else if(strcasecmp(prompt.c_str(), "divide") == 0) {
        double num1, num2;
        cout << "Give me two numbers" << endl;
        cin >> num1;
        cin >> num2;
        
        if(num2 > 0 || num2 < 0)
        cout << "The two numbers divided equal " << num1 / num2 << endl;
        else {
            cout << "Can't divide by 0 \n";
        }
    }
    else if(strcasecmp(prompt.c_str(), "change my name.") == 0) {
        cout << "Okay what would you like to change your name to? " << endl;
        cin >> userName;
    }
    else {
        cout << "Sorry I didn't quite get that." << endl;
        cout << 
        "I am still being developed perhaps your request will be here in the future." << endl;
    }
}