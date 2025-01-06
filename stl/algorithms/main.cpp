#include <iostream>
#include <vector>
#include <algorithm>


int main(int argc, char *argv[]) {
    std::vector<int> vec = {20, 10, 40, 30, 50};

    // 1. Sort vector
    std::sort(vec.begin(), vec.end());
    std::cout << "Sorted vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 2. Binary search
    int key = 30;
    if (std::binary_search(vec.begin(), vec.end(), key)) {
        std::cout << key << " is present in the vector." << std::endl;
    } else {
        std::cout << key << " is not present in the vector." << std::endl;
    }

    // 3. Lower Bound
    auto lower = std::lower_bound(vec.begin(), vec.end(), key);
    if (lower != vec.end()) {
        std::cout << "Lower bound of " << key << ": " << *lower << std::endl;
    } else {
        std::cout << "Lower bound of " << key << " not found." << std::endl;
    }

    // 4. Upper bound
    auto upper = std::upper_bound(vec.begin(), vec.end(), key);
    if (upper != vec.end()) {
        std::cout << "Upper bound of " << key << ": " << *upper << std::endl;
    } else {
        std::cout << "Upper bound of " << key << " not found." << std::endl;
    }

    // 5. Find
    auto it = std::find(vec.begin(), vec.end(), key);
    if (it != vec.end()) {
        std::cout << key << " found at index " << (it - vec.begin()) << std::endl;
    } else {
        std::cout << key << " not found in the vector" << std::endl;
    }

    return 0;
}
