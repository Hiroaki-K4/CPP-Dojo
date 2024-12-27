#include <iostream>


void stack_memory() {
    int x = 42;
    int arr[5] = {1, 2, 3, 4, 5};

    std::cout << "Stack memory: " << std::endl;
    std::cout << "Value of x: " << x << " (adress: " << &x << ")" << std::endl;
    std::cout << "Array adress: " << &arr << std::endl;
}


void heap_memory() {
    int* y = new int(99);
    int* dynamic_arr = new int[5]{10, 20, 30, 40, 50};

    std::cout << "Heap memory: " << std::endl;
    std::cout << "Value of y: " << *y << " (adress: " << y << ")" << std::endl;
    std::cout << "Dynamic array adress: " << dynamic_arr << std::endl;

    delete y;
    delete[] dynamic_arr;
}


int main(int argc, char *argv[]) {
    stack_memory();
    heap_memory();

    return 0;
}
