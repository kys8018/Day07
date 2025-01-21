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

#pragma region GAME
void InitLogo();	  //�ʱ�ȭ
void UpdateLogo(); //�ݺ� ����
void ClearLogo();  //�����Ҵ��Ѱ� ���� ����

void InitMenu();	  //�ʱ�ȭ
void UpdateMenu(); //�ݺ� ����
void ClearMenu();  //�����Ҵ��Ѱ� ���� ����

void InitStage();	  //�ʱ�ȭ
void UpdateStage(); //�ݺ� ����
void ClearStage();  //�����Ҵ��Ѱ� ���� ����
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

#pragma region GAME
#pragma region LOGO
void InitLogo()
{
}
void UpdateLogo()
{
}
void ClearLogo()
{
}
#pragma endregion
#pragma region MENU
void InitMenu()
{
}
void UpdateMenu()
{
}
void ClearMenu()
{
}
#pragma endregion
#pragma region STAGE
void InitStage()
{
}
void UpdateStage()
{
}
void ClearStage()
{
}
#pragma endregion
#pragma endregion
