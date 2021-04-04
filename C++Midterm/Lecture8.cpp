//#include <iostream>
//using namespace std;
//
//class Circle {
//
//private:
//	int radius; //private���� ���� 
//public:
//	Circle(); //������ 1 
//	Circle(int r); //������ 2 ( �Ű������� �ִ� ������) 
//	~Circle(); //�Ҹ��� -> �Ҹ��ڴ� �ϳ��� ���� �� ���� 
//	double getArea() { return 3.14 * radius * radius; } //Ŭ���� �� �Լ� ���� 1 return double
//	int getRadius() { return radius; } //Ŭ���� �� �Լ� ����2  return int 
//	void setRadius(int radius) { this->radius = radius; } //Ŭ���� �� �Լ� ���� 2 return ���� 
//
//};
//
//Circle::Circle() {
//	radius = 1;
//	cout << "������ ���� radius = " << radius << endl;} //������ ����???? 
//
//Circle::Circle(int radius) {
//	this->radius = radius;
//	cout << "������ ���� radius = " << radius << endl;
//}
//
//Circle::~Circle() {
//	cout << "�Ҹ��� ���� radius = " << radius << endl;
//}
//
//
//
//void increase(Circle c) { //*(������)�� ��ü(Circle)�� ȣ���ϴ� ���� �ƴ� 
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
//	cout << "������ ���� radius = " << radius << endl;
//}
//
//Circle::Circle(int radius) {
//	this -> radius = radius;
//	cout << "������ ���� radius = " << radius << endl;
//}
//
//Circle:: ~Circle() {
//	this->radius = radius;
//	cout << "�Ҹ��� ���� radius = " << radius << endl; 
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
	
	void changeName(const char* name); //const : ��� �޸𸮷� �ö󰡸� ���� �ٲ� �� ���� 
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name); //�̸��� ���̸� len �� ���� 
	this->name = new char[len + 1]; //�ǵڿ� \n ������ +1 ������� 
	strcpy(this->name, name); // name ���ڿ��� ���� 
}
Person::~Person() {
	if (name)
		delete[] name; //name �迭�� ���� ������ 
}

void Person::changeName(const char* name) {
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name); 
}


int main(void) {

	Person father(1, "Kitae");
	Person daughter(father); 

	cout << "daughter  ��ü ���� ���� ------------------" << endl;
	father.show();
	daughter.show();


	daughter.changeName("Grace");
	cout << "daughter �̸��� Grace�� ������ �� " << endl;
	father.show();
	daughter.show();



	return 0; 


}