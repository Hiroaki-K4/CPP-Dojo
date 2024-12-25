#include <iostream>

void func(int* ptr) {
    if (ptr == nullptr) {
        std::cout << "Null pointer passed." << std::endl;
    } else {
        std::cout << "Pointer is valid." << std::endl;
    }
}

int main(int argc, char *argv[]) {
    int* p1 = nullptr; // Preferred modern way
    int* p2 = NULL;    // Older way

    func(p1);  // Works safely
    func(p2);  // Works but is less clear and can cause ambiguity

    return 0;
}
