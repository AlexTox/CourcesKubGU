#include <iostream>
#include <sstream>
#include "Circle.cpp"
using namespace std;

double InputToDouble(string inputString)
{
    try {
        inputString = inputString.replace(inputString.find(","), 1, ".");

        stringstream converter(inputString);

        double convertedValue;
        converter >> convertedValue;


        return convertedValue;
    }
    catch (exception ex) { return stod(inputString); }
}

void GetObjectProgrammingAlghorytm()
{
    string inputString;

    std::cout << "OBJECT Programming" << std::endl;

    double radius;
    double arcAngle;

    Circle newCircle;

    std::cout << "Enter Radius: ";
    std::cin >> inputString;
    radius = InputToDouble(inputString);

    std::cout << "Enter Angle: ";
    std::cin >> inputString;
    arcAngle = InputToDouble(inputString);

    newCircle = Circle(radius);

    std::cout << "Square = " << newCircle.GetSquare(arcAngle) << std::endl;
    std::cout << "Arc Length = " << newCircle.GetSquare(arcAngle) << std::endl;

    return;
};

void GetProceduralProgrammingAlghorytm()
{
    string inputString;

    std::cout << "Procedural Programming" << std::endl;
    double radius, arcAngle;

    std::cout << "Enter Radius: ";
    std::cin >> inputString;
    radius = InputToDouble(inputString);

    std::cout << "Enter Angle: ";
    std::cin >> inputString;
    arcAngle = InputToDouble(inputString);

    std::cout << "Square = " << (((M_PI * radius) / 180) * arcAngle) << std::endl;
    std::cout << "Arc Length = " << (M_PI * pow(radius, 2) * arcAngle) / 360 << std::endl;

    return;
};


int main()
{
    GetObjectProgrammingAlghorytm();
    return 0;
}
