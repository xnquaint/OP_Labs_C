#include <iostream>
using namespace  std;

int main() {
    double x,  currentComponent, addition;
    double e = 0.00001, functE = 1, previousComponent = 1, diff = 1; // е - точність, functE - значення функції е
    int n = 1;

    cout << "Enter x: "; cin >> x;
    while (diff >= e) {
        addition = x / n;
        currentComponent = previousComponent * addition;
        functE += currentComponent;
        diff = (abs(currentComponent - previousComponent));
        previousComponent = currentComponent;
        n++;
    }
    cout << functE;
    return 0;
}
