/*
    Problem 15: Calculate the area of the circle by diameter
*/

#include <iostream>

using namespace std;

float ReadSquareSide(string Message) {

    float Diameter;

    cout << "\n" << Message;
    cin >> Diameter;

    return Diameter;

}


float CalculateCircleAreaBySquareSide(float SquareSide) {

    const float PI = 3.14159265;
    float Area = (PI * pow(SquareSide, 2)) / 4;
    return Area;

}

void PrintCircleArea(float Area) {

    cout << "\nArea of this circle is: " << Area << endl;
}

void FindCircleAreaBySquareSide() {

    float SquareSide = ReadSquareSide("Please enter the square side: ");


    float Area = CalculateCircleAreaBySquareSide(SquareSide);

    PrintCircleArea(Area);
}

int main()
{

    FindCircleAreaBySquareSide();
}