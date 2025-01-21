#include <stdio.h>
#include <Windows.h>

void SetPosition(int x, int y);

int main()
{
	while (true)
	{
		system("cls");
		SetPosition(10, 10);
		printf("hello world");
		Sleep(50);

	}

	return 0;
}

//커서 이동
void SetPosition(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
