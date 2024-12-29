#include <iostream>


class Animal {
    public:
        virtual void make_sound() const {
            std::cout << "Animal makes a generic sound." << std::endl;
        }

        virtual ~Animal() {
            std::cout << "Animal destroyed." << std::endl;
        }
};


class Dog : public Animal {
    public:
        void make_sound() const override {
            std::cout << "Dog says: Woof!" << std::endl;
        }

        ~Dog() override {
            std::cout << "Dog destroyed." << std::endl;
        }
};


int main(int argc, char *argv[]) {
    Animal* animal = new Dog();

    animal->make_sound();
    delete animal;

    return 0;
}
