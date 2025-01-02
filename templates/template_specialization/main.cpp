#include <iostream>


template <typename T>
class MyClass {
    public:
        void display() {
            std::cout << "General template" << std::endl;
        }
};


template <>
class MyClass<int> {
    public:
        void display() {
            std::cout << "Specialized template for int" << std::endl;
        }
};


int main(int argc, char *argv[]) {
    MyClass<double> obj1;
    obj1.display();  // Output: General template

    MyClass<int> obj2;
    obj2.display();  // Output: Specialized template for int

    return 0;
}
