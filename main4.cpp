#include<iostream> // 헤더파일은 목차역할 헤더파일만 확인시 한눈에 파악가능
#include "employeestruct.h" //우리가 만든헤더파일은 ""로 불러온다. 실행시마다 컴파일 하므로 헤더파일에 pragma once를 붙인다.
using namespace std;

enum PieceType1 {
	PiceTypeKing = 1, 
	PieceTypeQueen, 
	PieceTypeRook=10, 
	PieceTypePawn
}; //열거 앞에서 입력되어지는 넘버부터 순차적으로 1씩 증가 (예 : Queen = 2, Pawn = 11)

enum class PieceType : unsigned long {
	King = 1,
	Queen,
	Rook = 10,
	Pawn
};

int main()
{
	PieceType1 myPiece = PieceTypeRook; //전역
	int a = myPiece;
	cout << a << endl;

	PieceType myPiece2 = PieceType::King;
	//int b = mypiece2; //Enum Classs는 타입을 변경할수 없다.


	//----------------[헤더파일의 구조체를 이용하여 반복되는 변수선언을 대신할수 있다]-------------------

	Employee anEmployee; //구조체에서 anEmployee를 생성할것임
	anEmployee.firstInitial = 'M'; 
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salarry = 80000;

	cout << "Employee : " << anEmployee.firstInitial <<
		anEmployee.lastInitial << endl;
	cout << "Number:" << anEmployee.employeeNumber << endl;
	cout << "Salary:$" << anEmployee.salarry << endl;


}