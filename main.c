#include "main.h"

int main()
{
	int c;
	init();
	while (1)
	{
		titleOpen();
		scanf_s("%d", &c);
		while (1)
		{
			if (c == 1)//���ӽ���
			{
				CLR;
				introPlay();//��Ʈ��
				cellar();//���Ͻ� ����
			}
			else if (c == 2)//���۹�
			{
				CLR;
				infoDraw();
				int infoChoose;
				scanf_s("%d", &infoChoose);
				if (infoChoose == 1)
				{
					CLR;
					break;
				}
				else if (infoChoose == 2)
				{
					CLR;
					introPlay();
					cellar();
				}
			}
			else if (c == 3)//��������
			{
				exit(0);
			}
			else//������ �̿��� ���ڸ� �Է����� ���
			{
				break;
			}
		}
		CLR;
	}
	return 0;
}