#include <stdio.h>
#include <Windows.h>

void SetPosition(int x, int y);

struct Obj
{
	int x;
	int y;
	const char* shape;
};

//������ �������� ��밡��
//8byte ������ �Ҵ�
Obj* player = nullptr; // nullptr == 0

int main()
{
	player = (Obj*)malloc(sizeof(Obj));
	player->x = 10;
	player->y = 10;
	player->shape = "��";

	while (true)
	{
		system("cls");

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


		Sleep(50);

	}

	free(player);
	player = nullptr;

	return 0;
}

//Ŀ�� �̵�
void SetPosition(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

