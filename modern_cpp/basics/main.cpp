#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>


int add(int a, int b) {
    return a + b;
}


int main(int argc, char *argv[]) {
    // 1. auto: Type deduction
    auto x = 10;
    auto y = 3.14;
    auto str = "Hello!";
    std::cout << "auto examples" << std::endl;
    std::cout << "x = " << x << ", type: " << typeid(x).name() << std::endl;
    std::cout << "y = " << y << ", type: " << typeid(y).name() << std::endl;
    std::cout << "str = " << str << ", type: " << typeid(str).name() << std::endl;

    // 2. decltype: Declaring variables with the type of an expression
    decltype(add(1, 2)) z = add(5, 10);
    std::cout << "\ndecltype example:" << std::endl;
    std::cout << "z = " << z << ", type: " << typeid(z).name() << std::endl;

    // 3. nullptr: Null pointer type
    int* ptr = nullptr;
    if (ptr == nullptr) {
        std::cout << "\nnullptr example:" << std::endl;
        std::cout << "ptr is null" << std::endl;
    }

    // 4. Range-based for loop
    std::vector<std::string> words = {"C++", "is", "awesome"};
    std::cout << "\nRange-based for loop example:" << std::endl;
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
