#include <iostream>
using namespace std;

double maxVal(double, double);
void initVal(double&,double&,double&);
double theValOfT(double, double, double);
void outputOfT(double);

int main(){
    double a, b, c, t;
    initVal(a,b,c);
    t = theValOfT(a,b,c);
    outputOfT(t);
    return 0;
}

double maxVal(double x, double y){
    return x > y ? x : y;
}
void initVal(double& a1, double& b1, double& c1){
    cout << "Enter a, b, c:  " << endl;
    cin >> a1; cin >> b1; cin >> c1;
}
double theValOfT(double a, double b, double c){
    double result = (maxVal(a, a + b) + maxVal(a, b + c)) / (1 + maxVal(a + b * c, 1.15));
    return result;
}
void outputOfT(double rez){
    cout << "The value of T is: " << rez;
}
