#include <iostream>
using namespace  std;

int main() {
    double x,  currentComponent;
    double e = 0.00001, functE = 1, previousComponent = 1, diff = 1;
    int n = 1;

    cout << "x"; cin >> x;
    while (diff >= e) {
        currentComponent = previousComponent * (x/n);
        functE += currentComponent;
        diff = (abs(currentComponent - previousComponent));
        previousComponent = currentComponent;
        n++;
    }
    cout << functE;
    return 0;
}
