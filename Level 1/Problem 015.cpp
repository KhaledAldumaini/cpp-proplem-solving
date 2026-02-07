/*
    Problem 15: Calculate the area of the rectangle
*/

#include <iostream>

using namespace std;

float ReadNumber(string Message) {

    float num;

    cout << "\n" << Message;
    cin >> num;

    return num;

}


float CalculateRectangleArea(float Hieght, float Width) {

    return Hieght * Width;

}

void PrintRectangeArea(float Area) {

    cout << "\nArea of this rectangle is: " << Area << endl;
}

void FindRectangleArea() {

    float Hieght = ReadNumber("Please enter the height: ");
    float Width = ReadNumber("Please enter the width: ");

    float Area = CalculateRectangleArea(Hieght, Width);

    PrintRectangeArea(Area);
}

int main()
{
    FindRectangleArea();
}