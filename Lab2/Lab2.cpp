#include <iostream>
using namespace std;
/*
 Визначити, чи дорівнює одному із заданих чисел r або s залишок,
 отриманий при діленні невідємного цілого числа a на додатне ціле число b.
 */
int main() {
    int r, s, a, b, ost;
    bool result;
    cout << "Enter variable r, s : " << endl; cin >> r >> s;
    cout << "Enter variable a, b : " << endl; cin >> a >> b;
    if (a >= 0 && b > 0)
    {
        ost = a % b;
     if (ost == r || ost == s)
     {
         result = true;
     }
     else
         result = false;
    }
    else
         result = false;
    result ? cout << "True" : cout << "False";
    return 0;
}
