#include <iostream>
using namespace std;


int main(){
    int n, i, component;
    int previous_component1 = 0, previous_component2 = 1;

    cout << "Enter the number of component: " ; cin >> n;

    if (n<0){
        cout <<"You should start from 0" << endl;
    }
    if(n == 0 || n == 1){
        cout <<"The component is: " << n << endl;
    }
    else {
        for (i = 1; i < n; i++) {
            component = previous_component1 + previous_component2;
            previous_component1 = previous_component2;
            previous_component2 = component;
        }
        cout << "The component is: " << component;
    }
    return 0;
}
