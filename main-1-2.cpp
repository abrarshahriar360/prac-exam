#include <iostream>

void modifyArray(double* array, int size, double value);

int main() {

    double array[] = {1.2, 2.6, 3.4, 4.9, 5.2};
    int size = sizeof(array)/sizeof(array[0]);

    double value = 1.9;

    modifyArray(array, size, value);

    std::cout << "The modified array is ";

    for (int i = 0; i < size; i++) {

        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}