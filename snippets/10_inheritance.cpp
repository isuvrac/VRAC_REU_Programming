#include <iostream>
using namespace std;

/*
----------------------------------------
    inheritance is a way to create a
    subclass class that inherits all of 
    the public attributes and methods from
    another class.
----------------------------------------
*/

// Create a shape class and a rectangle class that inherits from shape
class Shape {
    public:
        Shape(int numSides) {
            this->numSides = numSides;
        }
    
        int getNumSides() {
            return numSides;
        }

    protected:
        int numSides;
};

class Square : public Shape {
    public:
        int sideLength;

        Square(int sideLength) : Shape(4) {
            this->sideLength = sideLength;
        }

        int getArea() {
            return sideLength * sideLength;
        }
};

class Hexagon : public Shape {
    public:
        int sideLength;

        Hexagon(int sideLength) : Shape(6) {
            this->sideLength = sideLength;
        }

        int getArea() {
            return (3 * sqrt(3) * pow(sideLength, 2)) / 2;
        }
};

int main() {
    // make a sqare and get the area
    Square mySquare = Square(5);
    int squareArea = mySquare.getArea();

    // get the number of sides from the base class
    int squareNumSides = mySquare.getNumSides();

    // make a hexagon and get the area
    Hexagon myHexagon = Hexagon(5);
    int hexagonArea = myHexagon.getArea();

    // get the number of sides from the base class
    int hexagonNumSides = myHexagon.getNumSides();

    cout << "Square area: " << squareArea << endl;
    cout << "Square num sides: " << squareNumSides << endl;
    cout << "Hexagon area: " << hexagonArea << endl;
    cout << "Hexagon num sides: " << hexagonNumSides << endl;

    return 0;
}
