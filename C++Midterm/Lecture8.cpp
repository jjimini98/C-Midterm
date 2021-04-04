//#include <iostream>
//using namespace std;
//
//class Circle {
//
//private:
//	int radius; //private변수 생성 
//public:
//	Circle(); //생성자 1 
//	Circle(int r); //생성자 2 ( 매개변수가 있는 생성자) 
//	~Circle(); //소멸자 -> 소멸자는 하나만 만들 수 있음 
//	double getArea() { return 3.14 * radius * radius; } //클래스 안 함수 생성 1 return double
//	int getRadius() { return radius; } //클래스 안 함수 생성2  return int 
//	void setRadius(int radius) { this->radius = radius; } //클래스 안 함수 생성 2 return 없음 
//
//};
//
//Circle::Circle() {
//	radius = 1;
//	cout << "생성자 실행 radius = " << radius << endl;} //생성자 정의???? 
//
//Circle::Circle(int radius) {
//	this->radius = radius;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//
//Circle::~Circle() {
//	cout << "소멸자 실행 radius = " << radius << endl;
//}
//
//
//
//void increase(Circle c) { //*(포인터)로 객체(Circle)를 호출하는 것이 아님 
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//}
//
//
//int main(void) {
//
//	Circle waffle(30);
//	increase(waffle);
//	cout << waffle.getRadius() << endl;
//
//}



// p.22 
#include <iostream>
//using namespace std;
//
//class Circle {
//private:
//	int radius;
//public:
//	Circle();
//	Circle(int r);
//	~Circle();
//
//	double getArea() { return 3.14 * radius * radius; }
//	int getRadius() { return radius; }
//	void setRadius(int radius) { this->radius = radius; }
//
//};
//
//Circle::Circle() {
//	radius = 1;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//
//Circle::Circle(int radius) {
//	this -> radius = radius;
//	cout << "생성자 실행 radius = " << radius << endl;
//}
//
//Circle:: ~Circle() {
//	this->radius = radius;
//	cout << "소멸자 실행 radius = " << radius << endl; 
//}
//
//void increase(Circle& c) {
//	int r = c.getRadius();
//	c.setRadius(r + 1);
//}
//
//int main(void) {
//	Circle waffle(30);
//	increase(waffle);
//	cout << waffle.getRadius() << endl;
//}


//p.25
//#include <iostream>
//using namespace std;
//char c = 'a';
//char get() {
//
//	return c;
//}
//
//
//
//int main(void) {
//
//	char a = get();
//	cout << a; 
//}

//p.34
#define _CRT_SECURE_NO_WRANINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {

	char* name;
	int id;

public :
	Person(int id, const char* name);
	~Person();
	
	void changeName(const char* name); //const : 상수 메모리로 올라가면 값을 바꿀 수 없음 
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name); //이름의 길이를 len 에 저장 
	this->name = new char[len + 1]; //맨뒤에 \n 때문에 +1 해줘야함 
	strcpy(this->name, name); // name 문자열을 복사 
}
Person::~Person() {
	if (name)
		delete[] name; //name 배열을 없애 버리기 
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name); 
}


int main(void) {

	Person father(1, "Kitae");
	Person daughter(father); 

	cout << "daughter  객체 생성 직후 ------------------" << endl;
	father.show();
	daughter.show();


	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 " << endl;
	father.show();
	daughter.show();



	return 0; 


}