#include <iostream>


class Animal {
    public:
        void eat() const {
            std::cout << "This animal is eating." << std::endl;
        }
};


class Dog : public Animal {
    public:
        void bark() const {
            std::cout << "The dog is barking." << std::endl;
        }
};


int main(int argc, char *argv[]) {
    Dog my_dog;

    my_dog.eat();
    my_dog.bark();

    return 0;
}
