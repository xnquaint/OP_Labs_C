#include <iostream>
using namespace std;

int main() {
    int number, a, b, c, composition;
    long long int factorial = 1;
    bool definition = false;
    a = b = c = 0;

    cout << "Enter the number: "; cin >> number;
    if (number < 0) {
        cout << "You should start from 0" << endl;
        return 0;
    }
    else {
        for (int i = number; i > 0; i--) {
            factorial *= i;
        }
        for (int n = 1; n <= factorial; n++) {
            c = b;
            b = a;
            a = n;
            composition = a * b * c;
            if (composition == factorial) {
                definition = true;
                break;
            }
        }
        cout << "The factorial is: " << factorial << endl;
        definition ? cout << "It can be divided into: " << c << "*" << b << "*" << a : cout << "It can't be divided";
    }
    return 0;
}
