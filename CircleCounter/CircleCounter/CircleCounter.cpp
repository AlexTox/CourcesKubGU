#include <iostream>
#include "Circle.cpp"

int main()
{
    double radius;
    double arcAngle;

    Circle newCircle;
    std::cout << "Enter Radius: ";
    std::cin >> radius;

    std::cout << "Enter Angle: ";
    std::cin >> arcAngle;


    newCircle = Circle(radius);


    std::cout << "Square = " << newCircle.GetSquare(arcAngle) << std::endl;
    std::cout << "Arc Length = " << newCircle.GetSquare(arcAngle) << std::endl;

    return 0;
}