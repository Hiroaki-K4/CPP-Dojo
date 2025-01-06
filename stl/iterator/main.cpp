#include <iostream>
#include <vector>


int main(int argc, char *argv[]) {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int>::iterator it;
    std::cout << "Elements in the vector: ";
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
        *it *= 2;
    }
    std::cout << std::endl;

    std::cout << "Modified elements in the vector: ";
    for (it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " "; // Reading data
        *it = 2;
    }

    return 0;
}
