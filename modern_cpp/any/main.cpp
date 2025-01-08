#include <any>
#include <iostream>
#include <string>


int main(int argc, char *argv[]) {
    std::any data;

    data = 42;
    std::cout << "Int: " << std::any_cast<int>(data) << std::endl;

    data = 3.14;
    std::cout << "Double: " << std::any_cast<double>(data) << std::endl;
    
    data = std::string("Hello");
    std::cout << "String: " << std::any_cast<std::string>(data) << std::endl;

    if (data.type() == typeid(std::string)) {
        std::cout << "Currently holding a string!" << std::endl;
    }

    return 0;
}
