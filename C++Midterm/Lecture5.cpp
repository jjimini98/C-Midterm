// p.6 포인터 예제 
//#include <iostream>
//using namespace std;
//
//int main(void){
//	char data[4] = "abc";
//	char* p1 = data; //포인터 변수 선언  
//	char* p2; //포인터 변수 선언 
//
//	p2 = &data[0];
//	cout << "p1은 " << p1 << ", p2는 " << p2 <<endl;
//	cout << "*p1은 "<<*p1 << ", *p2는" << *p2 << endl; 
//
//}


//p.7 포인터 연습
//#include <iostream>
//using namespace std;
//
//int main(void) {
//	int a = 1, *p = &a;
//
//	cout << "p = " << p << ", p+1 = " << p + 1 << endl;
//	
//	system("pause"); 
//}


//p.8 포인터 연습
//#include <iostream>
//using namespace std;
//
//int main(void) {
//	int a, * b, ** c;
//	a = 7;
//	b = &a;
//	c = &b;
//
//	cout << "a= " << a << ", *b= " << *b << ", **c = " << **c << endl;
//	cout << "b = " << b << ", *c = " << *c << ", &b = " << &b << ", c= " << c << endl;
//	cout << "*(&a) = " << *(&a) << ", *(b) = " << *(b) << ", *(&b) = " << *(&b) << endl;
//	cout << "*(c) = " << *(c) << ", *(&c) = " << *(&c) << endl;
//
//}


// p.9 포인터 연습 
//#include <iostream>
//using namespace std;
//
//int main(void) {
//	int num = 24;
//	int* point;
//	point = &num;
//
//	cout << "num = " << num << ", &num = " << &num << endl;
//	cout << "point = " << point << ", *point" << *point << ", size = " << sizeof(point) << endl;
//
//
//}


//p.11 포인터배열/ 배열 포인터 연습 
//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int i, j;
//
//	int a = 1, b = 2, c = 3;
//	//포인터 배열 선언 
//	int* PA[3] = { &a, &b, &c }; //포인터 배열 PA에 a의 주소값 , b의 주소값, c의 주소값 
//
//	//포인터 배열 활용
//	for (i = 0; i < 3; i++)
//		cout << *(PA[i]) << " ";
//	cout << endl;
//
//
//	//배열 포인터 선언
//	int M[2][3] = { {4,5,6} , {7,8,9} };
//	int(*AP)[3] = M;
//
//	//배열 포인터 활용
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++)
//			cout << AP[i][j] << " ";
//		cout << endl;
//	}
//
//	system("pause");
//}


//p.11 포인터 배열/ 배열 포인터 연습
//#include <iostream>
//using namespace std;
//
//int main(void) {
//	//배열 포인터 선언 
//	int M[2][3] = { {4,5,6},{7,8,9} };
//	int(*AP)[3] = M;  //M[0][0]의 주소와 같다. 
//
//	cout << "AP = " << hex << AP << endl;
//	cout << "Size of AP = " << dec << sizeof(AP) << endl;
//	//cout << "AP = " << hex(AP) << endl; 이렇게 하면 에러남 
//	cout << "AP +1 = " << AP + 1 << endl;
//	cout << "Size of AP = " << dec << sizeof(AP) << endl;
//
//	system("Pause");
//
//}






//p.17 포인터 연산 
//#include <iostream>
//using namespace std;
//
//int main(void) {
//	int i, sum = 0; 
//	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i < 10; i++)
//		sum += *(num + i);
//
//		cout << *num;
//	cout << "sum= " << sum << endl;
//	system("pause");
//
//}