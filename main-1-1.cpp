#include <iostream>

double arrayMin(double* array, int size);

int main() {

    double array[] = {1.2, 2.3, 3.5, 4.3, 5.9};

    int size = sizeof(array)/sizeof(array[0]);

    std::cout << "The minimum value is " << arrayMin(array, size) << std::endl;

    return 0;
}