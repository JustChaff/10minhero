#include "main.h"

int main()
{
	int c;
	init();
	while (1)
	{
		titleOpen();
		menu();
		printf("�����ϱ� ���ϴ� ��ȣ�� �Է����ּ���: ");
		scanf_s("%d", &c);
		while (1)
		{
			if (c == 1)//���ӽ���
			{
				CLR;
				introPlay();//��Ʈ��
				cellar();//���Ͻ� ����
				return 0;
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
					break;//return 0 ��ߵ��� break ��ߵ���... �ϴ� �� ������ ���� �÷��� �غ��� ����.
				}
			}
			else if (c == 3)//��������
			{
				exit(0);
			}
			else//������ �̿��� ���ڸ� �Է����� ���
			{
				CLR;
				break;
			}
		}
		CLR;
	}
	return 0;
}