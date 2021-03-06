/*
//----------------------[표준라이브러리 일반적으로 #include "" 사용  #은 컴파일 처리하기위한것]------------------
#include <iostream> 
//---------[ main이 프로그램 시작지점], int값으로 반환한다. int main(int argc, char*argv[]) 시작옵션값, int argc(갯수),argv[] 넘버가 프로그램

int main()
// {} 문장에서 단원 역할

{
	
	//--------------------------------------[변수타입]----------------------------------------------
	signed int value1; // 정수(예 1,-1) 양수,음수가능
	unsigned int value2;// 양수값정수 1,2,3 int와 동일 기본형  
	float value3; //  실수형(예 3.141592f) f가 없을시 더블
	char c1 = 'a';//'a' 문자1자(유니코드로 사실상 숫자임)


	//-------------------------------------[초기화 방법]-------------------------------------------
	int value4 = 0; //초기화
	int a1(0); //초기화
	int a2 = { 0 }; //인싸 초기화
	int a3{ 0 }; //인싸 초기화

	//---------------------------------[진법및 코드표기방법]-----------------------------------------
	value1 = 0b1001011;//2진법 표기 0b으로 시작
	value1 = 0123; //8진법 0으로 시작
	value1 = 0x9f; //16진법 0x 로시작
	c1 = '\101'; //10진수 유니코드 'a'
	c1 = '\x41'; //16진수 유니코드 'a'

	//--------------------------------------[입력함수 cin]-------------------------------------------
	int value; 
	std::cin >> value;

	//-------------------[현수  : Hello world 출력]---------------------------
	std::cout << "Hello, Wrold" << std::endl; // cout문장출력 ;는 마침표 역할 
	std::cout << "There are " << value << " ways\n" << "I love you\n" << std::endl;
	std::cout<<"A\nBC\nDEF\nGH\n" << std::endl;

} 

 //빌드시에 솔루션빌드(수정) 리빌드(새로빌드) 프로젝트별 빌드가능
 //주석처리 //  구간 주석
*/