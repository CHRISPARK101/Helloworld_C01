/*#include<iostream>

using namespace std;

//----------------------------[재귀함수]---------------------------
constexpr int fac(int n) {
	return n > 1 ? n*fac(n-1):1; //n이 1보다 크면  : 앞 아니면 뒤 n! 값을 구하는것 factorial
}

int main() 
{
	signed int x = 2999999999;
	cout << "x = " << x << endl;


	//----------------------[변수형변환 및 연산]----------------------
	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++; //257
	someInteger*= 2; //514
	someShort = static_cast<short>(someInteger);//514
	someLong = someShort * 10000;//5140000
	someFloat = someLong + 0.785f;//5140000 앞에서 7자리
	someDouble = static_cast<double>(someFloat) / 100000; // 51.40000
	cout << someDouble << endl;


	//------------------------[더하기]---------------------------------
	int firstNum = 0;
	cout << "first Num : ";
	cin >> firstNum;
	int secondNum = 0;
	cout << "second Num : ";
	cin >> secondNum;
	cout << "Sum : ";
	cout << firstNum + secondNum << endl;

	const int a = 0; //상수값(변하지 않는값으로 지정) 게임내 절대 바뀌지 않는값
	constexpr int b = fac(4);  //이미 값이 재귀함수에 의해 들어온다
	//int c = fac(4);

}
*/