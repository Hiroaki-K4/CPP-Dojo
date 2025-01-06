#include <iostream>
#include <utility>
#include <tuple>
#include <vector>


int main(int argc, char *argv[]) {
    // std::pair
    std::pair<int, std::string> p1(1, "Hello");
    std::cout << "First: " << p1.first << ", Second: " << p1.second << std::endl;

    // std::make_pair
    auto p2 = std::make_pair(10, 20.5);
    std::cout << "Pair: (" << p2.first << ", " << p2.second << ")" << std::endl;

    // std::tuple
    std::tuple<int, double, std::string> t(1, 3.14, "Tuple");
    std::cout << "Tuple: (" << std::get<0>(t) << ", " << std::get<1>(t) << ", " << std::get<2>(t) << ")" << std::endl;

    // std::tie
    int a, b;
    std::tie(a, b) = std::make_pair(10, 20);
    std::cout << "a: " << a << ", b: " << b << std::endl;
    // Ignoring elements
    std::tie(a, std::ignore) = std::make_pair(30, 40);
    std::cout << "a: " << a << std::endl;

    // std::move
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = std::move(vec1);
    std::cout << "vec2: ";
    for (int x : vec2) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    /// vec1 is now empty
    std::cout << "vec1 size after move: " << vec1.size() << std::endl;

    return 0;
}
