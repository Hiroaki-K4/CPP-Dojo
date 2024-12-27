#include <iostream>
#include <memory>


int main(int argc, char *argv[]) {
    std::unique_ptr<int> unique_ptr = std::make_unique<int>(10);
    std::cout << "unique_ptr value: " << *unique_ptr << std::endl;

    // unique_ptr cannot be copied
    // std::unique_ptr<int> anotherUniquePtr = unique_ptr; // This will cause a compile error

    // Transfer ownership
    std::unique_ptr<int> transfer_ptr = std::move(unique_ptr);
    std::cout << "Transferred unique_ptr value: " << *transfer_ptr << std::endl;

    return 0;
}
