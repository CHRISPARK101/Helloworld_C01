/*#include<iostream>

using namespace std;

//----------------------------[����Լ�]---------------------------
constexpr int fac(int n) {
	return n > 1 ? n*fac(n-1):1; //n�� 1���� ũ��  : �� �ƴϸ� �� n! ���� ���ϴ°� factorial
}

int main() 
{
	signed int x = 2999999999;
	cout << "x = " << x << endl;


	//----------------------[��������ȯ �� ����]----------------------
	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++; //257
	someInteger*= 2; //514
	someShort = static_cast<short>(someInteger);//514
	someLong = someShort * 10000;//5140000
	someFloat = someLong + 0.785f;//5140000 �տ��� 7�ڸ�
	someDouble = static_cast<double>(someFloat) / 100000; // 51.40000
	cout << someDouble << endl;


	//------------------------[���ϱ�]---------------------------------
	int firstNum = 0;
	cout << "first Num : ";
	cin >> firstNum;
	int secondNum = 0;
	cout << "second Num : ";
	cin >> secondNum;
	cout << "Sum : ";
	cout << firstNum + secondNum << endl;

	const int a = 0; //�����(������ �ʴ°����� ����) ���ӳ� ���� �ٲ��� �ʴ°�
	constexpr int b = fac(4);  //�̹� ���� ����Լ��� ���� ���´�
	//int c = fac(4);

}
*/