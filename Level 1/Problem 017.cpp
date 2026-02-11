/*
    Problem 17: Calculate the area of the triagnle
*/

#include <iostream>

using namespace std;

float ReadNumber(string Message) {

    float num;

    cout << "\n" << Message;
    cin >> num;

    return num;

}


float CalculateTriangleArea(float Base, float Height) {

    return (Base / 2) * Height;

}

void PrintRectangeArea(float Area) {

    cout << "\nArea of this traiangle is: " << Area << endl;
}

void FindTriagnleArea() {

    float Base = ReadNumber("Please enter the base: ");
    float Height = ReadNumber("Please enter the height: ");

    float Area = CalculateTriangleArea(Base, Height);

    PrintRectangeArea(Area);
}

int main()
{

    FindTriagnleArea();
}