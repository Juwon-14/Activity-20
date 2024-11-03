//
//  main.cpp
//  Activity-20
//
//  Created by Juwon Hong on 10/14/24.
//

#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    char choice;

    do {
        int size = 0;
        double* arr = inputNumbers(size);

        printSortedArray(arr, size);

        double sum = calculateSum(arr, size);
        cout << "The sum of the numbers is: " << sum << endl;

        delete[] arr;

        choice = askToContinue();
        if (choice == 'n' || choice == 'N') {
            cout << "Goodbye!" << endl;
        }

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
