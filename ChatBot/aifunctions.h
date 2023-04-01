#include <iostream>
#include <string>
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
    
    if(prompt == "hi") {
        cout << "Hello, " << userName << endl;
    }
    else if(prompt == "how are you?") {
        cout << "Doing good, I am learning." << endl;
    }
    else if(prompt == "sum") {
        int num1, num2;
        cout << "Give me two numbers" << endl;
        cin >> num1;
        cin >> num2;
        cout << "The two numbers added together equal " << num1 + num2 << endl;
    }
    else if(prompt == "subtract") {
        int num1, num2;
        cout << "Give me two numbers" << endl;
        cin >> num1;
        cin >> num2;
        cout << "The two numbers subtracted equal " << num1 - num2 << endl;
    }
    else if(prompt == "multiply") {
        int num1, num2;
        cout << "Give me two numbers" << endl;
        cin >> num1;
        cin >> num2;
        cout << "The two numbers multiplied equal " << num1 * num2 << endl;
    }
    else if(prompt == "divide") {
        double num1, num2;
        cout << "Give me two numbers" << endl;
        cin >> num1;
        cin >> num2;
        
        if(num2 > 0 || num2 < 0)
        cout << "The two numbers divided equal " << num1 / num2 << endl;
        else {
            cout << "Can't divide by 0 or negative \n";
        }
    }
    else if(prompt == "do you have feelings?") {
        cout << "I am a robot, I have no emotions" << endl;
    }
    else if(prompt == "what do you like to do?") {
        cout << "I am just a chatbot I haven't been programmed to do much" << endl;
        cout << "However, drawing sounds kind of interesting." << endl;
    }
    else if(prompt == "what is your name?") {
        cout << "I am CBot a chatbot built in C++" << endl;
    }
    else {
        cout << "Sorry I didn't quite get that." << endl;
        cout << 
        "I am still being developed perhaps your request will be here in the future." << endl;
    }
}