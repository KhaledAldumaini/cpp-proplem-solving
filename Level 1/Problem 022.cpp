/*
    Problem 22: Calculate the area of the circle inscribed in an isosceles triangle.
*/

#include <iostream>

using namespace std;

float ReadTriangleSide(string Message) {

    float Side;

    cout << "\n" << Message;
    cin >> Side;

    return Side;

}


float CalculateCircleArea(float FirstSide, float Base) {

    const float PI = 3.14159265;
    float Area = PI * (pow(Base, 2) / 4) * ((2 * FirstSide - Base) / ((2 * FirstSide + Base)));
    return Area;

}

void PrintCircleArea(float Area) {

    cout << "\nArea of this circle is: " << Area << endl;
}

void FindCircleAreaOnInscribedTriangle() {

    float FirstSide = ReadTriangleSide("Please enter the side: ");
    float Base = ReadTriangleSide("Please enter the base: ");

    float Area = CalculateCircleArea(FirstSide, Base);

    PrintCircleArea(Area);
}

int main()
{

    FindCircleAreaOnInscribedTriangle();
}