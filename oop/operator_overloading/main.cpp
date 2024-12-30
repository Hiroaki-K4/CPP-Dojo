#include <iostream>


class Complex {
    private:
        double real;
        double imag;

    public:
        Complex(double r = 0, double i = 0) : real(r), imag(i) {}

        Complex operator+(const Complex& other) const {
            return Complex(real + other.real, imag + other.imag);
        }

        void display() const {
            std::cout << real << " + " << imag << "i" << std::endl;
        }
};

int main(int argc, char *argv[]) {
    Complex c1(3.0, 4.0);
    Complex c2(1.5, 2.5);

    Complex c3 = c1 + c2;

    std::cout << "c1: ";
    c1.display();
    std::cout << "c2: ";
    c2.display();
    std::cout << "c3: ";
    c3.display();

    return 0;
}
