#include "util.h"

void init()
{
	system("title 10�� ���");
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SMALL_RECT windowSize = { 0, 0, 129,  109};  // �ܼ� â�� ũ�⸦ 80x25�� ����

	SetConsoleWindowInfo(consoleHandle, TRUE, &windowSize);
}