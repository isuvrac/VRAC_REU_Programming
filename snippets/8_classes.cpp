#include <iostream>

using namespace std;

/*
----------------------------------------
    classes are a way to group data and
    functions together into our own
    custom data type!
----------------------------------------
*/

// Create a class called Person
class Person {
    // public means that these variables
    // and functions can be accessed
    // outside of the class
    public:
        // constructor
        Person(string name, int age) {
            this->_name = name;
            this->_age = age;
        }

        // methods
        string getName() {
            cout << _name << endl;
        }

        int getAge() {
            cout << _age << endl;
        }

        void ageUp() {
            _age++;
        }

    private:
        // attributes
        string _name;
        int _age;
};

// Create a class called Car with a constructor
class Car {
    public:
        string make;
        string model;
        int year;

        // constructor
        Car(string make, string model, int year) {
            this->make = make;
            this->model = model;
            this->year = year;
        }

        // method
        void printCarInfo() {
            cout << "Make: " << make << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
        }
};

// Create a class called Rectangle with a constructor, private variables, and public methods
class Rectangle {
    public:
        // constructor
        Rectangle(int length, int width) {
            this->length = length;
            this->width = width;
        }

        // methods
        int getArea() {
            return length * width;
        }

        int getPerimeter() {
            return 2 * (length + width);
        }

    private:
        // attributes
        int length;
        int width;
};

int main() {
    // Create a rectangle object
    Rectangle nicksRectangle = Rectangle(10, 5);

    // Call the getArea and getPerimeter methods
    int area = nicksRectangle.getArea();
    int perimeter = nicksRectangle.getPerimeter();
}
