#include <stdio.h>
#include <Windows.h>

#pragma region Enum
enum Color
{
	Black,
	DarkBlue,
	DarkGreen,
	DarkCyan,
	DarkRed,
	DarkMagenta,
	DarkYellow,
	Gray,
	DarkGray,
	Blue,
	Green,
	Cyan,
	Red,
	Magenta,
	Yellow,
	White,
};

enum SCENE_ID
{
	LOGO,
	MENU,
	STAGE,
};
#pragma endregion
#pragma region WIN_API
void HideCursor();
void SetPosition(int x, int y);
void ChangeColor(Color color);
#pragma endregion



int main()
{
	HideCursor();

	while (true)
	{
		system("cls");
		
		SetPosition(10,10);
		ChangeColor(Yellow);
		printf("Hello world");

		Sleep(50);

	}

	return 0;
}

#pragma region WIN_API
//Ŀ�� �̵�
void SetPosition(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//Ŀ�� ���̴°� ����
void HideCursor()
{
	CONSOLE_CURSOR_INFO info;
	info.bVisible = false;
	info.dwSize = 1;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

//���� �ٲٱ�
void ChangeColor(Color color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
#pragma endregion

