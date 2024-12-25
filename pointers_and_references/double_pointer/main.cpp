#include <iostream>


void allocate_memory(int** ptr) {
    *ptr = new int(42);
}

int main(int argc, char *argv[]) {
    int* p = nullptr;

    allocate_memory(&p);
    std::cout << "Value: " << *p << std::endl;

    delete p;
    return 0;
}
