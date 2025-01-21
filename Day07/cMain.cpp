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
void InitLogo();	  //초기화
void UpdateLogo(); //반복 진행
void ClearLogo();  //동적할당한거 있음 해제

void InitMenu();	  //초기화
void UpdateMenu(); //반복 진행
void ClearMenu();  //동적할당한거 있음 해제

void InitStage();	  //초기화
void UpdateStage(); //반복 진행
void ClearStage();  //동적할당한거 있음 해제
#pragma endregion



struct Obj
{
	int x;
	int y;
	const char* shape;
};

//데이터 여기저기 사용가능
//8byte 정도만 할당
Obj* player = nullptr; // nullptr == 0

int main()
{
<<<<<<< HEAD
	player = (Obj*)malloc(sizeof(Obj));
	player->x = 10;
	player->y = 10;
	player->shape = "옷";
=======
	HideCursor();
>>>>>>> ac222dc224796fb4aad95064e5f446e891b09748

	while (true)
	{
		system("cls");
<<<<<<< HEAD

		if (GetAsyncKeyState(VK_LEFT))
		{
			player->x--;
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			player->x++;
		}
		if (GetAsyncKeyState(VK_UP))
		{
			player->y--;
		}
		if (GetAsyncKeyState(VK_DOWN))
		{
			player->y++;
		}

		SetPosition(player->x, player->y);
		printf(player->shape);

=======
		
		SetPosition(10,10);
		ChangeColor(Yellow);
		printf("Hello world");
>>>>>>> ac222dc224796fb4aad95064e5f446e891b09748

		Sleep(50);

	}

	free(player);
	player = nullptr;

	return 0;
}

#pragma region WIN_API
//커서 이동
void SetPosition(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

<<<<<<< HEAD
=======
//커서 보이는거 방지
void HideCursor()
{
	CONSOLE_CURSOR_INFO info;
	info.bVisible = false;
	info.dwSize = 1;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

//색깔 바꾸기
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
>>>>>>> ac222dc224796fb4aad95064e5f446e891b09748
