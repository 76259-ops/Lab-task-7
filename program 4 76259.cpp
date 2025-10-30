#include <iostream>
using namespace std;
  int main() 
    {
    int choice;
    double num1, num2;

    cout << "Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Exit" << endl;

    cout << "Enter your choice (1-3): ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Program is ended(75021)!" << endl;
            break;

        default:
            cout << "Not Correct" << endl;
    }

    return 0;
}

