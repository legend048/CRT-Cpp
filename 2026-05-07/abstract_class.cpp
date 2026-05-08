#include <iostream>

using namespace std;

class shape{
    public:
        virtual void area() = 0;
        virtual void perimeter() = 0; 
};

class rectangle : public shape{
    private:
        double length;
        double width;
    public:
        rectangle(double l, double w) : length(l), width(w) {}
        void area() override {
            cout << "Area of rectangle: " << length * width << endl;
        }
        void perimeter() override {
            cout << "Perimeter of rectangle: " << 2 * (length + width) << endl;
        }
};

class circle : public shape{
    private:
        double radius;
    public:
        circle(double r) : radius(r) {}
        void area() override {
            cout << "Area of circle: " << 3.14 * radius * radius << endl;
        }
        void perimeter() override {
            cout << "Perimeter of circle: " << 2 * 3.14 * radius << endl;
        }
};

class triangle : public shape{
    private:
        double base;
        double height;
        double side1;
        double side2;
    public:
        triangle(double b, double h, double s1, double s2) : base(b), height(h), side1(s1), side2(s2) {}
        void area() override {
            cout << "Area of triangle: " << 0.5 * base * height << endl;
        }
        void perimeter() override {
            cout << "Perimeter of triangle: " << base + side1 + side2 << endl;
        }
};

class square : public shape{
    private:
        double side;
    public:
        square(double s) : side(s) {}
        void area() override {
            cout << "Area of square: " << side * side << endl;
        }
        void perimeter() override {
            cout << "Perimeter of square: " << 4 * side << endl;
        }
};

int main() {
    rectangle rect(5.0, 3.0);
    rect.area();
    rect.perimeter();
    circle circ(4.0);
    circ.area();
    circ.perimeter();
    triangle tri(4.0, 5.0, 3.0, 4.0);
    tri.area();
    tri.perimeter();
    square sq(4.0);
    sq.area();
    sq.perimeter();
    return 0;
}