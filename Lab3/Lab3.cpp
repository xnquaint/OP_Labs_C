#include <iostream>
#include <iomanip>
using namespace  std;

int main() {
    double x,  CurrentComponent, addition;
    double eps = 0.00001, functExp = 1.0, PreviousComponent = 1.0; // еps - точність, functExp - значення функції е
    int n = 1;

    cout << "Enter x: "; cin >> x;
    while (PreviousComponent >= eps) {
        addition = x / n;
        CurrentComponent = PreviousComponent * addition;
        functExp += CurrentComponent;
        PreviousComponent = CurrentComponent;
        n++;
    }
    cout << "The value of function is: " << fixed << setprecision(5) << functExp << endl;
    return 0;
}
