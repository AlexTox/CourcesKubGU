#include <iostream>
#include <sstream>
#include "Circle.cpp"
using namespace std;

/// <summary>
/// Convert Input String To Double, or if he don't can convert, return 0;
/// </summary>
/// <param name="inputString">String For Convert</param>
/// <returns></returns>
double InputToDouble(string inputString)
{
    try {
        inputString = inputString.replace(inputString.find(","), 1, ".");

        stringstream converter(inputString);

        double convertedValue;
        converter >> convertedValue;

        return convertedValue;
    }
    catch (exception ex) 
    { 
        try 
        { 
            return stod(inputString); 
        } 
        catch (exception ex)
        { 
            return 0; 
        }
    }
}


void GetObjectProgrammingAlghorytm()
{
    string inputString;

    cout << "OBJECT Programming" << std::endl;

    double radius;
    double arcAngle;

    Circle newCircle;

    cout << "Enter Radius: ";
    cin >> inputString;
    radius = InputToDouble(inputString);

    cout << "Enter Angle: ";
    cin >> inputString;
    arcAngle = InputToDouble(inputString);

    newCircle = Circle(radius);

    cout << "Square = " << newCircle.GetSquare(arcAngle) << endl;
    cout << "Arc Length = " << newCircle.GetSquare(arcAngle) << endl;

    return;
};

void GetProceduralProgrammingAlghorytm()
{
    string inputString;

    cout << "Procedural Programming" << std::endl;
    double radius, arcAngle;

    cout << "Enter Radius: ";
    cin >> inputString;
    radius = InputToDouble(inputString);

    cout << "Enter Angle: ";
    cin >> inputString;
    arcAngle = InputToDouble(inputString);

    cout << "Square = " << (((M_PI * radius) / 180) * arcAngle) << endl;
    cout << "Arc Length = " << (M_PI * pow(radius, 2) * arcAngle) / 360 << endl;

    return;
};


int main()
{
    GetObjectProgrammingAlghorytm();
    return 0;
}
