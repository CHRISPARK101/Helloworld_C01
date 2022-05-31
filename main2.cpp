/*
#include<iostream>

using namespace std; //std를 전역변수화 시킴으로써 main함수내 별도의 std함수를 불러올필요가 없어진다.

namespace myNS1 {
	int n = 10;
}
namespace myNS2 {
	int n = 20;
}
int n = 30;

int main(int argc, char* argv[]) {
	int n = 40;

	cout << myNS1::n << std::endl;
	cout << myNS2::n << std::endl;
	cout << ::n << std::endl; // 전역변수 : 메인함수 바깥의 n
	cout << n << std::endl; // 지역변수 : 메인함수 안의 n


	//----------------------[형변환]----------------------------
	float myFloat = 3.14f;
	int i1 = (int)myFloat;//비추천
	int i2 = int(myFloat);//비추천
	int i3 = static_cast<int>(myFloat);//정확한 형변환 방법

	double d1 = 1200.; //f붙이면 flot형
	double d2 = 1200.0;
	double d3 = 12e2; // 12*(10)^2 : e = 10
	double d4 = 1.2e+3; // 1.2e3와 같음 = 1.2 * (10^3), +대신 -는 (10)^-3

	cout << d1 << " " << d2 << " " << d3<<" " << d4 << endl;

}
*/