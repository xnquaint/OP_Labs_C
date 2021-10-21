#include <iostream>
using namespace  std;

int main() {
    double x,  CurrentComponent, addition;
    double e = 0.00001, functE = 1.0, PreviousComponent = 1.0, diff = 1.0; // е - точність, functE - значення функції е
    int n = 1;

    cout << "Enter x: "; cin >> x;
    while (diff >= e) {
        addition = x / n;
        CurrentComponent = PreviousComponent * addition;
        functE += СurrentComponent;
        diff = (abs(CurrentComponent - PreviousComponent));
        PreviousComponent = CurrentComponent;
        n++;
    }
    cout << "The value of function is: " << functE;
    return 0;
}
