#include <iostream>


int main(int argc, char *argv[]) {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i << ": " << *(ptr + i) << std::endl;
    }

    *(ptr + 2) = 100;
    std::cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
