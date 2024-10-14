//
//  functions.cpp
//  Activity-20
//
//  Created by Juwon Hong on 10/14/24.
//

#include <iostream>
#include <algorithm>
#include "functions.h"
using namespace std;

double* inputNumbers(int &size) {
    double* arr = nullptr;
    double input;
    cout << "If you want to stop, enter '0'" << endl;

    while (true) {
        cout << "Enter a number: ";
        cin >> input;

        if (input == 0) {
            break;
        }

        double* newArr = new double[size + 1];

        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }

        newArr[size] = input;

        delete[] arr;
        arr = newArr;

        size++;
    }
    return arr;
}

double calculateSum(const double* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void printSortedArray(const double* arr, int size) {
    double* sortedArr = new double[size];
    for (int i = 0; i < size; i++) {
        sortedArr[i] = arr[i];
    }

    sort(sortedArr, sortedArr + size);

    cout << "Sorted numbers: ";
    for (int i = 0; i < size; i++) {
        cout << sortedArr[i] << " ";
    }
    cout << endl;

    delete[] sortedArr;
}

char askToContinue() {
    char choice;
    cout << "Do you want to enter numbers again? (y/n): ";
    cin >> choice;
    return choice;
}
