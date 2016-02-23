#include<iostream>
#include"Shapes.h"
using namespace std;

int main()
{
	Circle cookie1;
	Circle cookie2(1, "GREEN");

	cout << cookie1.getDiameter() << endl;
	cout << cookie2.getArea() << endl;
}