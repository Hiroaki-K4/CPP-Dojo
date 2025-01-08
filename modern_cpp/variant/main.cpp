#include <variant>
#include <iostream>
#include <string>


int main(int argc, char *argv[]) {
    std::variant<int, double, std::string> data;

    data = 42;
    std::cout << "Int: " << std::get<int>(data) << std::endl;

    data = 3.14;
    std::cout << "Double: " << std::get<double>(data) << std::endl;
    
    data = std::string("Hello");
    std::cout << "String: " << std::get<std::string>(data) << std::endl;

    if (std::holds_alternative<std::string>(data)) {
        std::cout << "Currently holding a string!" << std::endl;
    }

    return 0;
}
