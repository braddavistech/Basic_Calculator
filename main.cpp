//
//  main.cpp
//  Calculator
//
//  Created by Brad Davis on 2/5/19.
//  Copyright © 2019 Brad Davis. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
using namespace std;

float a, b, c, x, y, newNumber;
string d, wording;
char mathFunc;

float add( float a, float b) {
    return a + b;
};

float sub( float a, float b) {
    return a - b;
};

float div( float a, float b) {
    return a/b;
}

float mult( float a, float b) {
    return a * b;
};

void printLine(float& a, float& b, float& c, string& d) {
    cout << "\nWhen you " << d << " " << a << " and " << b << ", the result is " << c << ".\n\n";
};


int main() {

    for (;;)
    {
        
        bool validFirst = false;
        while (validFirst == false) {
            cout << "\nEnter your first number: \n";
            cin >> x;
            if (cin.fail()) {
                cout << "\n*Please enter a valid number.* \n\n";
                cin.clear();
                cin.ignore(10, '\n');
                continue;
            }
            else {
                validFirst = true;
            }
        }
    
        bool validSecond = false;
        while (validSecond == false) {
            cout << "\nEnter your second number: \n";
            cin >> y;
            if (cin.fail()) {
                cout << "\n*Please enter a valid number.* \n\n";
                cin.clear();
                cin.ignore(10, '\n');
                continue;
            }
            else {
                validSecond = true;
            }
        }
    
        bool operationSym = false;
        while (operationSym == false) {
        cout << "Enter the operation to perform (ie +, -, /, *): \n";
        cin >> mathFunc;
    
            switch(mathFunc) {
                case '+'  :
                    newNumber = add(x,y);
                    wording = "add";
                    printLine(x, y, newNumber, wording);
                    operationSym = true;
                    break;
                case '-'  :
                    newNumber = sub(x,y);
                    wording = "subtract";
                    printLine(x, y, newNumber, wording);
                    operationSym = true;
                    break;
                case '/'  :
                    newNumber = div(x,y);
                    wording = "divide";
                    printLine(x, y, newNumber, wording);
                    operationSym = true;
                    break;
                case '*'  :
                    newNumber = mult(x,y);
                    wording = "multiply";
                    printLine(x, y, newNumber, wording);
                    operationSym = true;
                    break;
                default:
                    cout << "There was an error with your entries. Please try again.\n\n";
            }
        }
    
        cout << "\nRepeat? [y/n]\n";
        char answer;
        cin >> answer;
        if (answer == 'n') {
            cout << "Thanks for using this calculator app. Have a great day!\n";
            break;
        }
    }
    return 0;
}
