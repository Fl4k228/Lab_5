/****************************
 *  Автор:      Вялов Г.В.  *
 *  Дата:       15.10.2024  *
 *  Название:   Лаба №5     *
 ***************************/
#include <iostream>
#include <cmath>  
#include <random> 
using namespace std;

int getCountOfNegatives(int* array, int size) {
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result += abs(array[i]);
    }
    return result;
}

int* fillArray(int size) {
    int* array = new int[size];
    mt19937 gen{ random_device()() };
    uniform_int_distribution <> dist(-5, 5);
    for (int i = 0; i < size; i++) {
        array[i] = dist(gen);
    }
    return array;
}

int main() {
    const int k = 5;
    const int n = 4;
    const int m = 3;

    int* X = fillArray(k);
    int* Y = fillArray(n);
    int* Z = fillArray(m);

    int sumX = getCountOfNegatives(X, k);
    int sumY = getCountOfNegatives(Y, n);
    int sumZ = getCountOfNegatives(Z, m);

    cout << "X:" << sumX << " Y:" << sumY << " Z:" << sumZ;
}