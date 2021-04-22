#include <iostream>
using namespace std;

class Circle {

private:
	int radius; //private���� ���� 
public:
	Circle(); //������ 1 
	Circle(int r); //������ 2 ( �Ű������� �ִ� ������) 
	~Circle(); //�Ҹ��� -> �Ҹ��ڴ� �ϳ��� ���� �� ���� 
	double getArea() { return 3.14 * radius * radius; } //Ŭ���� �� �Լ� ���� 1 return double
	int getRadius() { return radius; } //Ŭ���� �� �Լ� ����2  return int 
	void setRadius(int radius) { this->radius = radius; } //Ŭ���� �� �Լ� ���� 2 return ���� 

};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;} //������ ����???? 

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}



void increase(Circle c) { //*(������)�� ��ü(Circle)�� ȣ���ϴ� ���� �ƴ� 
	int r = c.getRadius();
	c.setRadius(r + 1);
}


int main(void) {

	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;

}