/*
    Problem 23: Calculate the area of the circle around an arbitrary triangle
*/

#include <iostream>

using namespace std;

float ReadTriangleData(string Message) {

    float Side;

    cout << "\n" << Message;
    cin >> Side;

    return Side;

}


float CalculateCircleArea(float FirstSide, float SecondSide, float ThirdSide) {

    const float PI = 3.14159265;
    float P = (FirstSide + SecondSide + ThirdSide) / 2;
    float Area = PI * ((FirstSide * SecondSide * ThirdSide) / (4 * sqrt(P * (P - FirstSide) * (P - SecondSide) * (P - ThirdSide))));
    return Area;

}

void PrintCircleArea(float Area) {

    cout << "\nArea of this circle is: " << Area << endl;
}

void FindCircleAreaOnArbitraryTriangle() {

    float FirstSide = ReadTriangleData("Please enter the first side: ");
    float SecondSide = ReadTriangleData("Please enter the second side: ");
    float ThirdSide = ReadTriangleData("Please enter the third base: ");
    float Area = CalculateCircleArea(FirstSide, SecondSide, ThirdSide);

    PrintCircleArea(Area);
}

int main()
{

    FindCircleAreaOnArbitraryTriangle();
}