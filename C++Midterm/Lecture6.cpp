// ������ ���� 

//#include <iostream>
//using namespace std;
//
//class Rectangle {
//public:
//	int width;
//	int height; 
//	int getArea();
//};
//int Rectangle::getArea() { return width * height;  }
//
//
//
//
//int main(void) {
//
//	Rectangle rect; 
//	rect.width = 9;
//	rect.height = 11; 
//
//	int result = rect.getArea();
//	cout << "result =  " << result << endl; 
//
//}


// ������ ���� �� �ʱ�ȭ ���� 

//#include <iostream>
//using namespace std;
//
//class Rectangle {
//
//public:
//	int a, b;
//	Rectangle();
//	Rectangle(int x);
//	Rectangle(int x , int y) ;
//	bool isSquare(); 
//};
//
//Rectangle::Rectangle() { a = b = 1; }
//Rectangle::Rectangle(int x) { a = b = x; }
//Rectangle::Rectangle(int x, int y) { a = x; b = y; }
//bool Rectangle::isSquare() {
//	if ( a == b) 
//		return 1;
//	else { return 0; }
//}
//
//int main(void) {
//
//	Rectangle rect1;
//	Rectangle rect2(5);
//	Rectangle rect3(4, 5);
//
//	if (rect1.isSquare() == 1) cout << "rect1�� ���簢���̴�" << endl;
//	if (rect2.isSquare() == 1) cout << "rect2�� ���簢���̴�" << endl;
//	if (rect3.isSquare() == 1) cout << "rect3�� ���簢���̴�" << endl;
//
//}


// �Ҹ��� ����

//#include <iostream>
//using namespace std;
//
//class Circle {
//public:
//	int radius;
//
//	Circle();
//	Circle(int r);
//	~Circle(); //�Ҹ��� 
//	double getArea(); 
//};
//
//Circle::Circle() { radius = 1; cout << "������ " << radius << " �� �� ����" << endl; }
//Circle::Circle(int r) { radius = r; cout << "������" << radius << " �� �� ���� " << endl; }
//Circle::~Circle() { cout << "������" << radius << "�� �� ����" << endl;  }
//double Circle::getArea() { return 3.14 * radius * radius;  }
//
//
//int main(void) {
//
//	Circle dount; 
//	Circle pizza(30);
//	
//	return 0; 
//
//}