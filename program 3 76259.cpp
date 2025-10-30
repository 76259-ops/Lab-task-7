#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    switch (marks / 10) {
        case 10:  // for 100
        case 9:
            cout << "Grade: A";
            break;

        case 8:
            cout << "Grade: B";
            break;

        case 7:
            cout << "Grade: C";
            break;

        case 6:
            cout << "Grade: D";
            break;

        default:
            cout << "Grade: F";
    }

    cout << endl;
    return 0;
}

