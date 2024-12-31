#include <iostream>


template <typename T>
class Box {
    private:
        T content;
    public:
        Box(T c) : content(c) {}
        void set_content(T c) {
            content = c;
        }
        T get_content() const {
            return content;
        }
};


int main(int argc, char *argv[]) {
    Box<int> int_box(10);
    Box<double> double_box(5.5);
    Box<std::string> string_box("Hello");

    std::cout << "Content of int_box: " << int_box.get_content() << std::endl;
    std::cout << "Content of double_box: " << double_box.get_content() << std::endl;
    std::cout << "Content of string_box: " << string_box.get_content() << std::endl;

    int_box.set_content(20);
    std::cout << "Updated content of int_box: " << int_box.get_content() << std::endl;

    return 0;
}
