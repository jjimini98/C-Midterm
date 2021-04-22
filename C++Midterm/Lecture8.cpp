#include <iostream>
using namespace std;

class Circle {

private:
	int radius; //private변수 생성 
public:
	Circle(); //생성자 1 
	Circle(int r); //생성자 2 ( 매개변수가 있는 생성자) 
	~Circle(); //소멸자 -> 소멸자는 하나만 만들 수 있음 
	double getArea() { return 3.14 * radius * radius; } //클래스 안 함수 생성 1 return double
	int getRadius() { return radius; } //클래스 안 함수 생성2  return int 
	void setRadius(int radius) { this->radius = radius; } //클래스 안 함수 생성 2 return 없음 

};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;} //생성자 정의???? 

Circle::Circle(int radius) {
	this->radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}



void increase(Circle c) { //*(포인터)로 객체(Circle)를 호출하는 것이 아님 
	int r = c.getRadius();
	c.setRadius(r + 1);
}


int main(void) {

	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;

}