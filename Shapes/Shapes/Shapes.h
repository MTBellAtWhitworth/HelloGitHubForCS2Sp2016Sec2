#ifndef _SHAPE_H_
#define _SHAPE_H_
#include<string>
using std::string;

class Circle {
private:
	double radius;
	string fill_color;
public:
	Circle() { radius = 42; fill_color = "FIFTEEN"; }
	Circle(double r) { radius = r; fill_color = "FIFTEEN"; }
	Circle(double r, string color) { radius = r; fill_color = color; }

	double getDiameter() {
		return radius * 2;
	}

	double getArea() {
		return radius * radius * 3.14159;
	}
};

class Cookie : public Circle {

};

#endif