#include <Windows.h>


//콘솔의 글자색을 변경한다.
int textcolor(unsigned short color_number)
{
	int retval = SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
	return retval;
}

//커서의 위치를 변경한다.
int gotoxy(short x, short y)
{
	COORD position = { x, y };
	int retval = SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	return retval;
}