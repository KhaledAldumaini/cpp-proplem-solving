/*
    Problem 16: Calculate the area of the rectangle through diaganal and side area
*/

#include <iostream>

using namespace std;

float ReadNumber(string Message) {

    float num;

    cout << "\n" << Message;
    cin >> num;

    return num;

}


float CalculateRectangleAreaBySideAndDiaganal(float Side, float Diaganal) {

    return Side * sqrt(pow(Diaganal, 2) - pow(Side, 2));

}

void PrintRectangeArea(float Area) {

    cout << "\nArea of this rectangle is: " << Area << endl;
}

void FindRectangleArea() {

    float Side = ReadNumber("Please enter the side: ");
    float Width = ReadNumber("Please enter the diaganal: ");

    float Area = CalculateRectangleAreaBySideAndDiaganal(Side, Width);

    PrintRectangeArea(Area);
}

int main()
{
    FindRectangleArea();
}