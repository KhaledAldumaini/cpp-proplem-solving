/*
    Problem 15: Calculate the area of the circle by diameter
*/

#include <iostream>

using namespace std;

float ReadDiameter(string Message) {

    float Diameter;

    cout << "\n" << Message;
    cin >> Diameter;

    return Diameter;

}


float CalculateCircleAreaByDiameter(float Diameter) {

    const float PI = 3.14159265;
    return (PI * pow(Diameter, 2)) / 4;

}

void PrintCircleArea(float Area) {

    cout << "\nArea of this circle is: " << Area << endl;
}

void FindCircleAreaByDiameter() {

    float Diameter = ReadDiameter("Please enter the diameter: ");


    float Area = CalculateCircleAreaByDiameter(Diameter);

    PrintCircleArea(Area);
}

int main()
{

    FindCircleAreaByDiameter();
}