#include <iostream>
using namespace std;

int main(){
    int n, i, component;
    int PreviousComponent1 = 0, PreviousComponent2 = 1;

    cout << "Enter the number of component: "; cin >> n;
    if( n == 0 || n == 1){
        cout <<"The component is: " << n;
    }
    else if (n<0){
        cout <<"You should start from 0";
    }
    else {
        for (i = 1; i < n; i++) {
            component = PreviousComponent1 + PreviousComponent2;
            PreviousComponent1 = PreviousComponent2;
            PreviousComponent2 = component;
        }
        cout << "The component is: " << component;
    }
    return 0;
}