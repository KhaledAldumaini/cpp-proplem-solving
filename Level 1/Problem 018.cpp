/*
    Problem 15: Calculate the area of the circle
*/

#include <iostream>

using namespace std;

float ReadRaduis(string Message) {

    float num;

    cout << "\n" << Message;
    cin >> num;

    return num;

}


float CalculateCircleArea(float Raduis) {

    const float PI = 3.14159265;
    return PI * pow(Raduis, 2);

}

void PrintCircleArea(float Area) {

    cout << "\nArea of this circle is: " << Area << endl;
}

void FindCircleleArea() {

    float Raduis = ReadRaduis("Please enter the raduis: ");


    float Area = CalculateCircleArea(Raduis);

    PrintCircleArea(Area);
}

int main()
{

    FindCircleleArea();
}