#include <iostream>


template <typename T>
T find_max(T a, T b) {
    return (a > b) ? a : b;
}


int main(int argc, char *argv[]) {
    std::cout << "Max of 10 and 20: " << find_max(10, 20) << std::endl;
    std::cout << "Max of 10.5 and 5.5: " << find_max(10.5, 5.5) << std::endl;
    std::cout << "Max of 'A' and 'B': " << find_max('A', 'B') << std::endl;
    return 0;
}
