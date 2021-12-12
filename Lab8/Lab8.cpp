#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;
double** createMatrix(int);
void fillMatrix(double *[], int);
void outMatrix(double *[],int);
void delMatrix(double *[], int);
double findNorm(double *[], int);
double findAverage(double, double);

int main(){
    srand(time(NULL));
    int size;
    double norm1;
    double norm2;
    double average;
    double **matrix1;
    double **matrix2;

    cout << "Enter size of matrix (rows = columns): "; cin >> size;
    if (size < 2){
        cout << "You need to start from 2.";
        return 0;
    }
    else {
        matrix1 = createMatrix(size);
        matrix2 = createMatrix(size);
        fillMatrix(matrix1, size);
        fillMatrix(matrix2, size);
        cout << "First matrix: " << endl;
        outMatrix(matrix1, size);
        cout << "Second matrix: " << endl;
        outMatrix(matrix2, size);
        norm1 = findNorm(matrix1, size);
        norm2 = findNorm(matrix2, size);
        cout << "M1 is: " << norm1 << endl;
        cout << "M2 is: " << norm2 << endl;
        average = findAverage(norm1, norm2);
        cout << "Average of M is: " << average;
        delMatrix(matrix1, size);
        delMatrix(matrix2, size);
    }
    return 0;
}

double** createMatrix(int s){
    auto **matrix = new double* [s];
    for (int i = 0; i < s; i++) {
        matrix[i] = new double[s];
    }
    return matrix;
}
void fillMatrix(double* matrix[], int s) {
    double random;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            random = rand()%201-100;
            matrix[i][j] = random / 10;
        }
    }
}

void outMatrix(double *matrix[], int s ){
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            cout << setw(5) << matrix[i][j] ;
        }
        cout << endl;
    }
    cout << endl;
}
void delMatrix(double *matrix[], int s){
    for (int i = 0; i < s; i++) {
        delete []matrix[i];
    }
    delete []matrix;
}
double findNorm(double *matrix[], int s){
    // знаходимо суму елементів кожного рядка матриці
    // найбільша з сум є м-нормою
    double sum;
    double max_sum = 0;
    for (int i = 0; i < s; i++) {
        sum = 0;
        for (int j = 0; j < s; j++) {
            sum += fabs(matrix[i][j]);
        }
        if (sum > max_sum){
            max_sum = sum;
        }
    }
    return max_sum;
}
double findAverage(double x, double y){
    double avg;
    avg = (x+y)/2;
    return avg;
}

