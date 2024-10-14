//
//  functions.h
//  Activity-20
//
//  Created by Juwon Hong on 10/14/24.
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// Function to input numbers into an array dynamically
double* inputNumbers(int &size);

// Function to calculate the sum of numbers in the array
double calculateSum(const double* arr, int size);

// Function to print the sorted numbers
void printSortedArray(const double* arr, int size);

// Function to ask the user if they want to continue
char askToContinue();

#endif
