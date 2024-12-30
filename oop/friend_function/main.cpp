#include <iostream>


class Rectangle {
    private:
        double width;
        double height;

    public:
        Rectangle(double w, double h) : width(w), height(h) {}
        friend double calculate_area(const Rectangle& rect);        
};


double calculate_area(const Rectangle& rect) {
    return rect.width * rect.height;
}


int main(int argc, char *argv[]) {
    Rectangle rect(4, 3);
    std::cout << "Rectangle area is " << calculate_area(rect) << std::endl;

    return 0;
}
