#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

void genArray(double [], int);
void outArray(double [], int);
double maxOfFirstArray(double [], int);
double minOfSecondArray(double [], int);
double valOfZ(double,double);
void updateArray(double [], double [], double , double , double, int);


int main(){
    srand(time(NULL));
    const int SIZE = 10;
    double max;
    double min;
    double z;
    double array1[SIZE];
    double array2[SIZE];

    genArray(array1,SIZE);
    genArray(array2,SIZE);
    cout << "First array: ";outArray(array1,SIZE);
    cout << "Second array:";outArray(array2,SIZE);
    max = maxOfFirstArray(array1,SIZE);
    min = minOfSecondArray(array2,SIZE);
    z = valOfZ(max,min);
    updateArray(array1,array2,max,min,z,SIZE);
    cout << "Updated array 1: ";outArray(array1,SIZE);
    cout << "Updated array 2: ";outArray(array2,SIZE);
    return 0;
}

void genArray(double array[], int length){
    for (int i=0; i < length;i++){
        array[i] = (rand()%201-100) / 10;
    }
}
void outArray(double array[],int length){
    for(int i = 0; i < length; i++){
        cout << setw(5) << array[i];
    }
    cout << endl;
}
double maxOfFirstArray(double array[],int length){
    double max1 = array[0];
    for(int i = 0; i < length; i++){
        if(array[i] > max1){
            max1 = array[i];
        }
    }
    cout << "Max of first array: " << max1 << endl;
    return max1;
}
double minOfSecondArray(double array[], int length){
    double min1 = array[0];
    for(int i = 0; i < length; i++){
        if(array[i] < min1){
            min1 = array[i];
        }
    }
    cout << "Min of second array: " << min1 << endl;
    return min1;
}
double valOfZ(double maximum, double minimum){
    double z1;
    z1 = (fabs(maximum+minimum))/2;
    cout << "Value of z: " << z1 << endl;
    return z1;
}
void updateArray(double arr1[], double arr2[], double maximum, double minimum, double z1, int length){
    for(int i = 0; i < length; i++){
        if (arr1[i] == maximum){
            arr1[i] = z1;
        }
    }
    for (int j = 0; j < length; j++){
        if (arr2[j] == minimum){
            arr2[j] = z1;
        }
    }

}

