#include <iostream>

double* duplicateArray(double* array, int size);

int main() {

    double array[] = {1.3, 2.4, 3.6, 4.8, 5.9};

    int size = sizeof(array)/sizeof(array[0]);

    double* new_array = new double[size];

    new_array = duplicateArray(array, size);

    std::cout << "The new array is ";

    for (int i = 0; i < size; i++) {

        std::cout << new_array[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}