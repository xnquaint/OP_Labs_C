#include <iostream>
#include <iomanip>
using namespace  std;

int main() {
    double x,  current_component, addition;
    double eps = 0.00001, funct_exp = 1.0, previous_component = 1.0; // еps - точність, funct_exp - значення функції е
    int n = 1;

    cout << "Enter x: "; cin >> x;
    while ((abs(previous_component)) >= eps) {
        addition = x / n;
        current_component = previous_component * addition;
        funct_exp += current_component;
        previous_component = current_component;
        n++;
    }
    cout << "The value of function is: " << fixed << setprecision(5) << funct_exp << endl;
    return 0;
}
