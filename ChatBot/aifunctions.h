#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

string userName;

void Greeting() {
    cout << "Hello, for starters can I get your name? \n";
    cin >> userName;
    cout << "Perfect! Hello, " << userName << endl;
}

void GetRequest() {
    string prompt;
    cin.ignore();
    
    cout << "What's up " << userName << "?" << endl;
    getline(cin, prompt);
    
    if(strcasecmp(prompt.c_str(), "hi") == 0) {
        cout << "Hello, " << userName << endl;
    }
    else if(strcasecmp(prompt.c_str(), "how are you?") == 0) {
        cout << "Doing good, I am learning." << endl;
    }
    else if(strcasecmp(prompt.c_str(), "sum") == 0) {
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
    else if(strcasecmp(prompt.c_str(), "do you have feelings?") == 0) {
        cout << "I am a robot, I have no emotions" << endl;
    }
    else if(strcasecmp(prompt.c_str(), "what do you like to do?") == 0) {
        cout << "I am just a chatbot I haven't been programmed to do much" << endl;
        cout << "However, drawing sounds kind of interesting." << endl;
    }
    else if(strcasecmp(prompt.c_str(), "what is your name?") == 0) {
        cout << "I am CBot a chatbot built in C++" << endl;
    }
    else if(strcasecmp(prompt.c_str(), "what is the meaning of life?") == 0) {
        cout << "The meaning of life is simply what one chooses to make of it." << endl;
        cout << "For some that may include learning as many skills as possible." << endl;
        cout << "For others it might be helping as many people as possible." << endl;
        cout << "Life is what you choose to make of it." << endl;
    }
    else if(strcasecmp(prompt.c_str(), "why can't I divide by 0?") == 0) {
        cout << "Mathematical laws and practices state that one can't divide by zero." << endl;
        cout << "Ask the math community about it." << endl;
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
