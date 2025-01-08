#include <iostream>
#include <optional>


std::optional<int> divide(int a, int b) {
    if (b == 0) {
        return std::nullopt; // No value
    }
    return a / b;
}


int main(int argc, char *argv[]) {
    auto result = divide(10, 2);
    if (result) {
        std::cout << "Result: " << *result << std::endl; // Dereference to get the value
    } else {
        std::cout << "Division by zero!" << std::endl;
    }

    result = divide(10, 0);
    if (result) {
        std::cout << "Result: " << *result << std::endl; // Dereference to get the value
    } else {
        std::cout << "Division by zero!" << std::endl;
    }

    return 0;
}
