#include <iostream>
#include "Circle.cpp"

void GetObjectProgrammingAlghorytm()
{

    std::cout << "OBJECT Programming" << std::endl;

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

    return;
};

void GetProceduralProgrammingAlghorytm()
{
    std::cout << "Procedural Programming" << std::endl;

    double radius, arcAngle;

    std::cout << "Enter Radius: ";
    std::cin >> radius;

    std::cout << "Enter Angle: ";
    std::cin >> arcAngle;

    std::cout << "Square = " << (((M_PI * radius) / 180) * arcAngle) << std::endl;
    std::cout << "Arc Length = " << (M_PI * pow(radius, 2) * arcAngle) / 360 << std::endl;

    return;
};

int main()
{
    GetObjectProgrammingAlghorytm();
}
