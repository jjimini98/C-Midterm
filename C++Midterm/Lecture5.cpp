// p.6 ������ ���� 
//#include <iostream>
//using namespace std;
//
//int main(void){
//	char data[4] = "abc";
//	char* p1 = data; //������ ���� ����  
//	char* p2; //������ ���� ���� 
//
//	p2 = &data[0];
//	cout << "p1�� " << p1 << ", p2�� " << p2 <<endl;
//	cout << "*p1�� "<<*p1 << ", *p2��" << *p2 << endl; 
//
//}


//p.7 ������ ����
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


//p.8 ������ ����
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


// p.9 ������ ���� 
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


//p.11 �����͹迭/ �迭 ������ ���� 
//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int i, j;
//
//	int a = 1, b = 2, c = 3;
//	//������ �迭 ���� 
//	int* PA[3] = { &a, &b, &c }; //������ �迭 PA�� a�� �ּҰ� , b�� �ּҰ�, c�� �ּҰ� 
//
//	//������ �迭 Ȱ��
//	for (i = 0; i < 3; i++)
//		cout << *(PA[i]) << " ";
//	cout << endl;
//
//
//	//�迭 ������ ����
//	int M[2][3] = { {4,5,6} , {7,8,9} };
//	int(*AP)[3] = M;
//
//	//�迭 ������ Ȱ��
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 3; j++)
//			cout << AP[i][j] << " ";
//		cout << endl;
//	}
//
//	system("pause");
//}


//p.11 ������ �迭/ �迭 ������ ����
//#include <iostream>
//using namespace std;
//
//int main(void) {
//	//�迭 ������ ���� 
//	int M[2][3] = { {4,5,6},{7,8,9} };
//	int(*AP)[3] = M;  //M[0][0]�� �ּҿ� ����. 
//
//	cout << "AP = " << hex << AP << endl;
//	cout << "Size of AP = " << dec << sizeof(AP) << endl;
//	//cout << "AP = " << hex(AP) << endl; �̷��� �ϸ� ������ 
//	cout << "AP +1 = " << AP + 1 << endl;
//	cout << "Size of AP = " << dec << sizeof(AP) << endl;
//
//	system("Pause");
//
//}






//p.17 ������ ���� 
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