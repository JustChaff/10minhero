#include "game.h"

int keyControl()
{
	char temp = getch();

	if (temp == 'w' || temp == 'W')
		return UP;
	else if (temp == 'a' || temp == 'A')
		return LEFT;
	else if (temp == 's' || temp == 'S')
		return DOWN;
	else if (temp == 'd' || temp == 'D')
		return RIGHT;
	else if (temp == ' ')
		return SUBMIT;
}

void titleOpen()
{
	printf("\n\n\n\n");
	printf("Ÿ��Ʋ�ǳ��Ұ�..��");
}

int menu()
{
	int x = 24;
	int y = 12;
	gotoxy(x - 2, y);//-2�� > ����� ���� �ڸ�����
	printf("> �� �� �� �� ");
	gotoxy(x, y + 1);
	printf(" �� �� �� ");//���Ŀ� �����¼�������..�� �ٲܰ�.
	gotoxy(x, y + 2);
	printf("�� �� �� �� ");
	while (1)
	{
		int n = keyControl();
		switch (n)
		{
		case UP:
		{
			if (y > 12)
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, --y);
				printf(">");
			}
			break;
		}

		case DOWN:
		{
			if (y < 14)
			{
				gotoxy(x - 2, y);
				printf(" ");
				gotoxy(x - 2, ++y);
				printf(">");
			}
			break;
		}
		case SUBMIT:
		{
			return y - 12;
		}
		}
	}
}

void infoDraw()
{
	system("cls");
	printf("\n\n");
	printf("                       [ �� �� �� ]\n\n");
	printf("                    �� �� : W, A, S, D\n");
	printf("                    �� �� : �� �� �� �� ��\n\n\n\n\n\n");
	printf("  �� �� �� �� �� ��  �� �� ��  �� �� ȭ �� �� ��  �� �� �� �� ��.");

	while (1)
	{
		if (keyControl() == SUBMIT)
		{
			break;
		}
	}
}

void introPlay()
{
	char ch;
	printf("\npress enter to continue");
	while ((ch = getchar()) != '\n'){}//����ġ�� ���� �ؽ�Ʈ ����
	printf("������ ������ ��ȥ�ĳ�.");
	while ((ch = getchar()) != '\n'){}
	printf("���ڿ� ������ ��ȥ���� �����ϱ� ���� �ձ��� �鼺���� ��� �� ������ ������ ������...!");
	while ((ch = getchar()) != '\n') {}
}