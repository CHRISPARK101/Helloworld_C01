#include<iostream> // ��������� �������� ������ϸ� Ȯ�ν� �Ѵ��� �ľǰ���
#include "employeestruct.h" //�츮�� ������������� ""�� �ҷ��´�. ����ø��� ������ �ϹǷ� ������Ͽ� pragma once�� ���δ�.
using namespace std;

enum PieceType1 {
	PiceTypeKing = 1, 
	PieceTypeQueen, 
	PieceTypeRook=10, 
	PieceTypePawn
}; //���� �տ��� �ԷµǾ����� �ѹ����� ���������� 1�� ���� (�� : Queen = 2, Pawn = 11)

enum class PieceType : unsigned long {
	King = 1,
	Queen,
	Rook = 10,
	Pawn
};

int main()
{
	PieceType1 myPiece = PieceTypeRook; //����
	int a = myPiece;
	cout << a << endl;

	PieceType myPiece2 = PieceType::King;
	//int b = mypiece2; //Enum Classs�� Ÿ���� �����Ҽ� ����.


	//----------------[��������� ����ü�� �̿��Ͽ� �ݺ��Ǵ� ���������� ����Ҽ� �ִ�]-------------------

	Employee anEmployee; //����ü���� anEmployee�� �����Ұ���
	anEmployee.firstInitial = 'M'; 
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salarry = 80000;

	cout << "Employee : " << anEmployee.firstInitial <<
		anEmployee.lastInitial << endl;
	cout << "Number:" << anEmployee.employeeNumber << endl;
	cout << "Salary:$" << anEmployee.salarry << endl;


}