#include "room.h"
int cellar()//���Ͻ�
{
	static int justOnecell = 0;//ù ���� ��� 1�� ���
	if(justOnecell == 0)
	{
		_getch();
		printf("�ĳ��� �ͳ��� �������� ������...���� ������ �������� ������ �ǰ��� ��!\n");
		_getch();
		printf("�������� ������ �ߴµ� �ð��� 10�йۿ� �� ���Ҵٴ�...\n");
		_getch();
		printf("3�� 500ġ�� �� �༮�̶� �������� �¼��� ����, ���� ã�Ƽ� ������!\n");
		_getch();
		CLR;
		justOnecell = 1;
	}

	while (1)
	{
		int cellChoose;
		//â�� �ƽ�Ű��Ʈ..? ���� �� ���� ��
		printf("�츮 �ձ��� ���� â���ʹ� �񱳵� �� �� ������ ������ ���Ͻ��̴�.\n");
		printf("���ϽǱ��� �̷��� ������ ������, �󸶳� ������ ��� �ž�...?\n\n");
		printf("1) ��ܼ����� ��ĭ  2) ��ܼ����� �߰�ĭ  3) ��ܼ����� �Ʒ�ĭ  4) ���̽� ħ�� ��  5) ���Ͻ� �ⱸ\n");
		printf(">> ");
		scanf_s("%d", &cellChoose);
		while (1)
		{
			if (cellChoose == 1)//��� ��ĭ
			{
				CLR;
				if (item[0] == 1)//���Ͻ� ���� ���� ��
				{
					printf("Ŭ��, �������÷���, 15cm �� ��...��¦ �κη��� ���� ����� ���ǵ��� ���δ�.\n");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("Ŭ��, �������÷���, 15cm �� ��, �׸��� '���Ͻ�'�̶� ���� ����...����ϰ� ������ ���� ����� ���ǵ��� ���δ�.\n");
					_getch();
					printf("�� ����� �������߰ڴ�.\n\n");
					_getch();
					printf("���Ͻ� ���踦 ȹ���ߴ�!");
					_getch();
					CLR;
					item[0] = 1;//���Ͻ� ����(�ŽǷ� ���� �� ����)ȹ��
					break;
				}
			}
			else if (cellChoose == 2)//����߰�ĭ
			{
				//ȭ����ȯ222
				CLR;
				if (item[1] == 1) //������ ���� ��
				{
					printf("���޽����� ���ܰ� ���ð� ���δ�. �������� ã���� �ǵ�ȴ��� ó������ �� �������ϴ�.");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("���޽����� ���ܰ� ���ð� ���δ�. �ϳ� ��½�ص� �𸣰���? Ȥ�� �ʿ������� ���ݾ�!\n");
					_getch();
					printf("�հ� ���İ� �Ŷ� �ܽ��̶� ġ��.\n\n");
					_getch();
					printf("�������� ȹ���ߴ�!");
					_getch();
					CLR;
					item[1] = 1;//������ ȹ��
					break;
				}
			}
			else if (cellChoose == 3)//����ϴ�ĭ
			{
				CLR;
				printf("���� ������ �ܶ� �ִ�!\n�� ���� ���� A4 �������� ũ�� 6 4��� �����ִ�...?\n");
				_getch();
				printf("�߿��� ���ڰ��� ���̴µ�. �̰� �ܿ����ƾ���.");
				_getch();
				CLR;
				break;
			}
			else if (cellChoose == 4)//���̽� ħ�� ��
			{
				CLR;
				if (item[2] == 1)//�ٶ� �� ���� ���� ��
				{
					printf("ħ�� �ر��� �Ű澲�� ���̶��� ���� ���̰� ���� �ʾ�... ����, ���� ��������!");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("ħ�� �ر��� �����ϴٰ�? ���� �ǹ̷� '���ù����� ��'�̴�...\n");
					_getch();
					printf("���Ϸ� ���谡 �ϳ� �ֳ�. '�ٶ���'�̶�� ���� �־�.\n���⿡ �־���Ҵ� ���� �߿��� �����̶�� ���̰���? �ٷ� ì�ܰ��߰ڴ�!");
					_getch();
					printf("�ٶ��� ���踦 ȹ���ߴ�!");
					_getch();
					CLR;
					item[2] = 1; //�ٶ��� ���� ȹ��
					break;
				}
			}
			else if (cellChoose == 5)//���Ͻ� �ⱸ
			{
				CLR;
				if (item[0] == 1)//���Ͻ� ���� ���� ��
				{
					printf("�����忡�� ã�� ���踦 ����־���.\n\n");
					_getch();
					printf("... ...\n");
					printf("�����ϸ鼭 ���� ���ȴ�!");
					_getch();
					livingroom();
				}
				else
				{
					printf("���� ���� ��� �ִ�. ���ʿ����� ����� ����� �Ѵٰ�? �̷��Ա��� �� ������ �ֳ�?");
					_getch();
					CLR;
					break;
				}
			}
			else//������ �̿��� ���� �Է����� ���
			{
				CLR;
				break;
			}
		}
	}
}

int livingroom()//�Ž�
{
	CLR;
	static int justOneliv = 0;//ù ����� �� ���� ��µǰ� �ϴ� ��ġ
	if (justOneliv == 0)
	{
		_getch();
		printf("����, ���� �������Դ�...\n");
		_getch();
		printf("���, ������ ����? ���� ���󿡼� ���ư��� �Ǵ� �Ŷ� ���°ž�?\n");
		_getch();
		printf("���ϻ��̶� ������ �����ٵ�... �׷� ���ɼ��� �󸶳� ������ �𸣰����� ���� ã�ٰ� �������� ���ڴ�.\n");
		_getch();
		CLR;
		justOneliv = 1;
	}
	while (1)
	{
		int livChoose;
		//�Ž� �ƽ�Ű��Ʈ..? ���� �� ���� ��
		printf("������ �ٴ�, ����� ������. �߶Ծ��� �� �ϳ� ���� ����� �Ž��̴�.\n");
		printf("�Žǿ� ����Ǿ� �ִ� �ξ��� �׾߸��� ��� �� ��ü��.\n");
		printf("���� ���� �ս� û�Һη� �����ұ� �����ϰ� ������ ���߾�...\n\n");
		printf("1) ���Ͻ� ��  2) �ٶ��� ��  3) â�� ��  4) ȭ��� ��  5) ħ�� ��  6) �ξ� ������  7) �ξ� ����  8) �޸���  9) ���� ��\n");
		printf(">> ");
		scanf_s("%d", &livChoose);
		while (1)
		{
			if (livChoose == 1)//���Ͻ� ��
			{
				CLR;
				printf("���� �ΰ� ���� ������? ��� ���� �ͺ���.");
				_getch();
				CLR;
				cellar();
			}
			else if (livChoose == 2)//�ٶ��� ��
			{
				CLR;
				if (item[2] == 1) //�ٶ��� ���� ���� ��
				{
					printf("���� �� �Ѱ�� '�ٶ��� ���'�̶�� �ָ��� �ɷ� �ִ�.\n");
					_getch();
					printf("���Ͻǿ��� ã�� ���踦 ����־���.\n\n");
					_getch();
					printf("... ...\n");
					printf("�����ϸ鼭 ���� ���ȴ�!");
					_getch();
					CLR;
					garret();
					break;
				}
				else
				{
					printf("���� �� �Ѱ�� '�ٶ��� ���'�̶�� �ָ��� �ɷ� �ִ�.\n");
					_getch();
					printf("���� �ʹ� �翬�ϰԵ� ��� �ִ�.\n");
					_getch();
					CLR;
					break;
				}
			}
			else if (livChoose == 3)//â�� ��
			{
				CLR;
				if (item[3] == 1) //â�� �� ���� ���� ��
				{
					printf("�������� ��� Ŀ�ٶ� ö�� �� �Ѱ�� '���� ����'��� �ָ��� �ɷ� �ִ�.\n");
					_getch();
					printf("�ٶ��濡�� ã�� ���踦 �ڹ��迡 ����־���.\n\n");
					_getch();
					printf("... ...\n");
					printf("�ڹ��谡 ���ȴ�!\n");
					printf("���� ����� ���� ���� �� ������ ����ִ� ������.");
					_getch();
					CLR;
					storage();
					break;
				}
				else
				{
					printf("�������� ��� Ŀ�ٶ� ö�� �� �Ѱ�� '���� ����'��� �ָ��� �ɷ� �ִ�.\n");
					_getch();
					printf("�̷� �� ���� �� ���� ������.\n");
					_getch();
					printf("��Ÿ���Ե�, �׸��� �翬�ϰԵ� �ڹ���� ��� ���� ������ ���� ���� ���Ѵ�.\n");
					_getch();
					CLR;
					break;
				}
			}
			else if (livChoose == 4)//ȭ��� ��
			{
				CLR;
				if (item[4] == 1)//ȭ��� �� ���� ���� ��
				{
					printf("�� �Ѱ�� 'ȭ���'�̶�� �ָ��� �ɷ� �ִ�.\n");
					_getch();
					printf("�ٶ��� ���ڿ��� ã�� ���踦 ����־���.\n\n");
					_getch();
					printf("... ...\n");
					printf("�����ϸ鼭 ���� ���ȴ�!\n");
					_getch();
					CLR;
					bathroom();
					break;
				}
				else
				{
					printf("�� �Ѱ�� 'ȭ���'�̶�� �ָ��� �ɷ� �ִ�.\n");
					_getch();
					printf("����ü ȭ��� ���� �� �ᰡ���� ����?");
					_getch();
					CLR;
					break;
				}
			}
			else if (livChoose == 5)//ħ�� ��
			{
				CLR;
				int bedChoose;
				printf("ȭ���� �� �Ѱ�� 'ħ��'�̶�� �ָ��� �ɷ��ִ�.\n");
				_getch();
				printf("�� �ʸӷ� ���� �帣����� �Ҹ��� �鸰��.\n\n");
				printf("1) ħ�� �������� ���  2) �ŽǷ� ���ư���");
				printf(">> ");
				scanf_s("%d", &bedChoose);
				if (bedChoose == 1)//ħ�� �������� ���
				{
					int bedChoose2;
					CLR;
					printf("�� �� �� ����. �������� �Ѵٸ� ��������?\n\n");
					_getch();
					printf("�������� ������ ���赵 ���� ���� ���ȴ�.\n");
					printf("���̶� ���� �˴� ����� �ᰡ���� ���⸸ ���� ä �дٰ�???\n\n");
					printf("1) ħ�Ƿ� ����  2) �����̶� ���ư���\n");
					printf(">> ");
					scanf_s("%d", &bedChoose2);
					if (bedChoose2 == 1)
					{
						CLR;
						printf("�̹� ������ �����µ�, ���� �λ��� ��������!");
						_getch();
						CLR;
						gameover_bedroom();
					}
					else if (bedChoose2 == 2)
					{
						CLR;
						printf("���� �ƴ� �� ����. �����̶� ���� ����...!\n");
						printf("�ٽ� ���ư���.");
						_getch();
						CLR;
						break;
					}
				}
				else if (bedChoose == 2)//�ŽǷ� ���ư���
				{
					CLR;
					printf("���� ���ٰ� ���� ����� ������ �ʾ�...\n");
					printf("�ٽ� ���ư���.");
					_getch();
					CLR;
					break;
				}
			}
			else if (livChoose == 6)//�ξ� ������
			{
				CLR;
				if (item[5] == 1)
				{
					printf("�����忡 ���� ���ǵ��� �ڼ��� �ִ�.");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("�����忡 ���� ���ǵ��� �������� �����Ǿ� �ִ�. �ʿ��� ������ ������?\n\n");
					_getch();
					printf("������� ���� '���ϻ�'�̶� ���� ���谡 ������ ������ �־���.\n");
					printf("... ���, ���ϻ�?\n\n");
					_getch();
					printf("���谡 ���´� ���� ã����, ���ϻ��� Ÿ�� �����ϰ� �������� �� �ְڴ�!");
					_getch();
					printf("'���ϻ�'�̶� ���� ���踦 ȹ���ߴ�!");
					_getch();
					CLR;
					item[5] = 1;//���� ���� ȹ��
					break;
				}
			}
			else if (livChoose == 7)//�ξ� ����
			{
				if (item[6] == 1)
				{
					CLR;
					printf("�ξ� �����忡 �����ⱸ���� ������â���� ���� �ִ�.");
					_getch();
					CLR;
					break;
				}
				else
				{
					CLR;
					printf("�ξ� �����忡 �پ��� �����ⱸ�� ���� ���� ���� �����Ǿ� �ִ�.\n");
					_getch();
					printf("�跮 ��Ǭ�� ���� ���δ�... ��򰡿� ������ ������?");
					_getch();
					printf("�跮 ��Ǭ�� ȹ���ߴ�!");
					_getch();
					CLR;
					item[6] = 1;//�跮 ��Ǭ ȹ��
					break;
				}
			}
			else if (livChoose == 8)//�޸���
			{
				CLR;
				printf("�ξ� �޸��ǿ� �Ϸ� �ϰ�, �̹� �� ������, �׸��� �ؾ� �� �Ͽ� ���� �޸� �ܶ� �����Ǿ� �ִ�.\n");
				_getch();
				printf("�츮 �ս� �Խ����� ���������� ���� �󸶳� ����?... ��·�� ���� �������� � ������ ���� ������?");
				_getch();
				CLR;
				printf("----------------------------------------------------------------\n");
				printf("���� û���ϴ� ��.\n");
				printf("�콼 �κ� ����: �� ������ 15mL, �� �� �� ��� �콼 ���� �ٸ���.\n");
				printf("�� ������ ���� �ݵ�� ��Ȯ�ϰ� ���� ��! ��ǰ�� ������ ������ �� ��!\n");
				printf("----------------------------------------------------------------\n\n");
				_getch();
				printf("15mL�� �跮 ��Ǭ���� �� ��Ǭ�̾�����? ...�𸣰ڴ�.");
				_getch();
				CLR;
				break;
			}
			else if (livChoose == 9)//���� ��
			{
				CLR;
				if (item[9] != 1)//���� ����X
				{
					printf("������ ã�� ������ ���� �� ����...\n\n");
					_getch();
					printf("����ü ��� ���аɱ�?");
					_getch();
					CLR;
					break;
				}
				else if (item[9] == 1 && item[10] != 1)//���� �����ϰ� ������ ���� ���� ����X
				{
					printf("������ ã�Ҵµ�...���� ���谡 ������ ������ �; ���� ���� ����.");
					_getch();
					CLR;
					break;
				}
				else if (item[9] == 1 && item[10] == 1 && item[11] != 1)//���ϻ� ����X
				{
					printf("������, ���赵 �ִµ� �����ϰ� �پ�� ���� ��� ����. �� ���� ��� �ʹٰ�.");
					_getch();
					CLR;
					break;
				}
				else if (item[9] == 1 && item[10] == 1 && item[11] == 1)//���� ���� ����
				{
					CLR;
					ending();
				}
			}
			else//������ �̿��� ���ڸ� �Է����� ���
			{
				CLR;
				break;
				}
		}
	}
}

int garret()//�ٶ���
{
	while (1)
	{
		int garChoose;
		//�ٶ��� �ƽ�Ű��Ʈ..? ���� �� ���� ��
		printf("���� ���� �� �ƴ϶���� �ٶ��浵 ����ϰ� �����Ǿ� �ִ�.\n");
		printf("�������� �������� ������ ������ ������ ���ڵ�, �ٶ��� â������ õõ�� ��ġ�� �޻�...\n");
		printf("... ... ...\n");
		printf("��, �۶��� ���� �ƴϴ�. �̴�� �� �� �߸� �� �����̶��!\n\n");
		printf("1) ���� ũ���� ����  2) ���� ����  3) ū ����  4) ������  5) �ŽǷ� ���ư���\n");
		printf(">> ");
		scanf_s("%d", &garChoose);
		while (1)
		{
			if (garChoose == 1)//����ũ���� ����
			{
				CLR;
				printf("���⵵ ������ �ܶ� ��� �ִ�.\n");
				_getch();
				printf("'�߿��� ��ȣ'?  '3 1'...? ���Ͻǿ��� ����� ���̸� �� �� ����. �ܿ����ƾ߰ڴ�!");
				_getch();
				CLR;
				break;
			}
			else if (garChoose == 2)//���� ����
			{
				CLR;
				if (item[4] == 1)//ȭ��� ���� ���� ��
				{
					printf("���� ���質, �ٸ� �ʿ��� ����� ����?\n");
					_getch();
					printf("... ...\n");
					printf("�ƹ��� �����ŷ��� ���� �ʿ��� ����� ������ �ʴ´�.");
					_getch();
					CLR;
					break;
				}
				else if (item[7] == 1)//���г� ���� ��
				{
					printf("���гʷ� ��Ʈ�� Ǯ��, ���ڸ� ���� ���� �� ���� ������� ��� �־���.\n");
					_getch();
					printf("���� �ʿ��� ���̴� �� 'ȭ���(����)'�̶� ���� �� ���� ���̳�.\n\n");
					_getch();
					printf("ȭ��� ���踦 ȹ���ߴ�!");
					_getch();
					CLR;
					item[4] = 1;//ȭ��� ���� ȹ��
					break;
				}
				else
				{
					printf("���ڰ� ��Ʈ�� �� ��� �ִ�. ���� Ǯ �� �ִ� ���гʰ� �ִٸ� ���� �ٵ�...\n");
					_getch();
					printf("�ٶ��� �ȿ����� ���� ���г� ���� �� ������ �ʴ´�.\n");
					_getch();
					CLR;
					break;
				}
			}
			else if (garChoose == 3)//ū ����
			{
				CLR;
				if (item[11] == 1)//���ϻ� ���� ��
				{
					printf("�׷������� ���� �� �۴� �� ���� �ؾ��� ���̾��µ�. ���� �� �������� ���ϻ��� ���� ì�ܰ���!\n");
					_getch();
					CLR;
					break;
				}
				else if (item[8] == 1 && item[5] != 1)//�� ������ �����ϰ� ������ ���� ���� ����X
				{
					printf("���� ���� ������, ���� ���踸 ã���� �ȴ�!\n");
					_getch();
					CLR;
					break;
				}
				else if (item[8] == 1 && item[5] == 1)//�� ������, ���� ���� ��� ���� ��
				{
					printf("�쵵 �����߰�, ���赵 �ְڴ�~ �ٷ� ������߰ڴ�.\n");
					_getch();
					printf("... ...");
					printf("������ ���ϻ��� �ִ�! �� ì�ܰ�����.\n\n");
					_getch();
					printf("���ϻ��� ȹ���ߴ�!");
					_getch();
					CLR;
					item[11] = 1;//���ϻ� ȹ��
					break;
				}
				else
				{
					printf("���ڰ� �ڹ���� ��� �ִ�. �ٵ� �� �ڹ���, ���� ��û ���� �ֳ�?\n");
					_getch();
					printf("���� �� ���� �ִ� ���� ġ���� �ǿ�����, ��·�� ���踸���δ� ������ ���� �� ����.\n\n");
					_getch();
					printf("�׸��� ���ڿ� �޸����� �پ� �ִ�.\n\n");
					printf("-----------------------------------------------\n");
					printf("'û�ҳ��� �� �ڹ��赵 �� �������� �۾Ƴ��� ��!'\n");
					printf("-----------------------------------------------");
					_getch();
					CLR;
					break;
				}
			}
			else if (garChoose == 4)//������
			{
				CLR;
				if (item[3] == 1)//â�� ���� ������
				{
					printf("������̿� ���谡 �ܶ� �ɷ� �ִ�.\nâ���� ������ �޺��� ���ļ� �����ϰ� ��¦�δ�...\n");
					_getch();
					printf("... ... ...\n");
					printf("��������! �Ʊ ������, �� �� �߸� �����̶��.");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("������̿� ���谡 �ܶ� �ɷ� �ִ�. 'â��'��� ���� ���谡 ���� ���...\n");
					_getch();
					printf("â�����, �� '���� ����'�� �����ִ� ö���̷���? ������ ���߰ڴ�.\n\n");
					_getch();
					printf("â�� ���踦 ȹ���ߴ�!");
					_getch();
					CLR;
					item[3] = 1;//â�� ���� ȹ��
					break;
				}
			}
			else if (garChoose == 5)//�ŽǷ� ���ư���
			{
				CLR;
				printf("�ŽǷ� ���ư��߰ڴ�.");
				_getch();
				livingroom();
			}
			else//������ �̿��� ���ڸ� �Է����� ���
			{
				CLR;
				break;
			}
		}
	}
}

int storage()//â��
{
	CLR;
	static int justOnestor = 0;//ù ����� �� ���� ��µǰ� �ϴ� ��ġ
	if (justOnestor == 0)
	{
		_getch();
		printf("����, â���� ���Դ�...\n\n");
		_getch();
		printf("��ø�, ���� �������� �� ������? ���� �� �����ž�?\n");
		_getch();
		printf("ħ������, ���� ���� �Ͼ�� ���� �� �����ϱ� ���� ������� �����غ���...\n");
		_getch();
		CLR;
		printf("�� ���� ��ġ�� ���̴µ�, ��ġ�� �ڼ��� ���� ���� ����Ǿ� �ִ�.\n");
		printf("�� ��ġ�� ��� �ϸ� ���� ������?\n\n\n");
		_getch();
		CLR;
		justOnestor = 1;
	}
	while (1)
	{
		int storChoose;
		int pw;//�ݰ� ��й�ȣ
		//â�� �ƽ�Ű��Ʈ..? ���� �� ���� ��
		printf("â���ϸ� ��������� �Ŷ� �����ߴµ�, ����� ������ �� �Ǿ �׷��� �����Ⱑ ���� ��ħ���� �ʴ�.\n");
		printf("���� â������ ���׸�� �Ű澴 �ɱ�? �� ����̶�� �𸦱�, ���� ���̶� ������ ������ �ȴ�.\n\n");
		printf("1) ������  2) �ݰ�  3) �ŽǷ� ���ư���\n");
		printf(">> ");
		scanf_s("%d", &storChoose);
		while (1)
		{
			if (storChoose == 1)//������
			{
				CLR;
				if (item[7] == 1)//���г� ���� ��
				{
					printf("�����Կ� ���� �������� �ڼ��� ���� �ִ�. �Ʊ� ���� ���ٰ� �� ���� ����� �� ������, ��������?\n");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("�����Կ� ���� �������� �������� �����Ǿ� ���� �ִ�...\n");
					_getch();
					printf("ã�Ҵ�, ���г�! �̰Ŷ�� ���� ����, �ٶ��� ���ڵ� �� �� ���� �ž�!\n\n");
					_getch();
					printf("���гʸ� ȹ���ߴ�!");
					_getch();
					CLR;
					item[7] = 1;//���г� ȹ��
					break;
				}
			}
			else if (storChoose == 2)//�ݰ�
			{
				CLR;
				if (item[9] == 1) //���� ȹ�� ��
				{
					printf("�ݰ� ���� �� �ݾƳ��� �ǰ���. �� �� �ٴ� �ƴ�!");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("��, ���� Ư���ϰ� ���� �ݰ��� �ִ�!\n");
					printf("��й�ȣ 6�ڸ��� �Է��ؾ� �ϴ� �� ������...��ȣ�� ��� ã��?\n\n");
					printf("��й�ȣ �Է�: ");
					scanf_s("%d", &pw);
					if (pw == 643128)
					{
						CLR;
						printf("��, ������ �̰� ��й�ȣ���ٴ�! �� �༮�� ���� ����ϳ�.\n");
						_getch();
						printf("���ѱ� �����̴�! �̾�������, �� ������ �ٽ� ������ ��߰ڴ�.\n\n");
						_getch();
						printf("������ ��ã�Ҵ�!");
						_getch();
						CLR;
						item[9] = 1;//���� ȹ��
						break;
					}
					else
					{
						CLR;
						printf("���� �ݰ� ���� �ȿ����� �� ���� Ʋ�� �� ����. ��й�ȣ�� ��� ������...");
						_getch();
						CLR;
						break;
					}
				}
			}
			else if (storChoose == 3)//�ŽǷ� ���ư���
			{
				if (item[7] == 1)//���г� ���� ��
				{
					CLR;
					printf("���гʷ� ��ġ�� ��ǰ�� ȸ����Ű�� ���� ���ȴ�!\n");
					_getch();
					printf("�ŽǷ� ���ư��߰ڴ�.");
					_getch();
					CLR;
					livingroom();
				}
				else
				{
					CLR;
					printf("�ŽǷ� ���ư����� â�� ���� ������ �ʴ´�. ��ġ�� ��� �� ���� �� �� ������...\n");
					_getch();
					printf("���гʶ� ã�ƺ��� �ϳ�?");
					_getch();
					CLR;
					break;
				}
			}
			else//������ �̿��� ���ڸ� �Է����� ���
			{
				CLR;
				break;
			}
		}
	}
}

int bathroom()//ȭ���
{
	CLR;
	static int justOnebath = 0;//ù ����� �� ���� ��µǰ� �ϴ� ��ġ
	if(justOnebath == 0)
	{
		_getch();
		printf("ȭ��Ǳ��� ���̱��� �ᰡ ���� ������ ����? ��¥ ���� ������ ����...\n\n\n");
		_getch();
		CLR;
		justOnebath = 1;
	}
	while (1)
	{
		int bathChoose;
		//ȭ��� �ƽ�Ű��Ʈ..? ���� �� ���� ��
		printf("�ſ��� ���� ���� ���� ��ó�� ��¦�̰�, �ٴ� Ÿ�� �ϳ��ϳ��� ���� �հ� �ִ�...\n");
		printf("�츮 �ձ� ȭ��ǿ��� ���� ��� �� �� ���� �����̴�.\n");
		printf("�׸��� ���⼭��� �� �������� ���� �� ���� �� ����!\n\n");
		printf("1) ȭ��� ������  2) �� ������ �����  3) �ŽǷ� ������\n");
		printf(">> ");
		scanf_s("%d", &bathChoose);
		while (1)
		{
			if (bathChoose == 1)//ȭ��� ������
			{
				CLR;
				if (item[10] == 1)//���� ���� ���� ��
				{
					printf("ĩ��, ��, �� ��ÿ� �ٵ����...��� ��ǰ���� ĭ ���� �з��Ǿ� �κη��� �ִ�.\n");
					_getch();
					printf("���谡 �پ��ִ� ������ �� �ڸ� ��ȣ '2 8'�� ���� �ִ�.\n");
					_getch();
					CLR;
					break;
				}
				else
				{
					printf("ĩ��, ��, �� ��ÿ� �ٵ����...��� ��ǰ���� ĭ ���� �����Ǿ� �ִ�.\n");
					_getch();
					printf("������ �������� ���谡 �ٿ��� �ִ�...? '����'�̶�� ������ �ֳ�?\n");
					_getch();
					printf("������ ���踦 �� ���� �� �ڸ� ��ȣ�� ���� �ִ�. 2 8�̶�...\n");
					_getch();
					printf("����� ì�ܰ��߰ڴ�.\n\n");
					_getch();
					printf("���� ���踦 ȹ���ߴ�!");
					_getch();
					CLR;
					item[10] = 1;//���� ���� ȹ��
					break;
				}
			}
			else if (bathChoose == 2)//�� ������ �����
			{
				CLR;
				if (item[1] == 1 && item[6] != 1)//������ ��, �跮 ��Ǭ ��
				{
					printf("���� ���Ͻǿ��� ������ �� ���� �ǰ���? �׷��� �跮�� ������ ����.");
					_getch();
					CLR;
					break;
				}
				else if (item[1] != 1 && item[6] == 1)//������ ��, �跮 ��Ǭ ��
				{
					printf("�跮 ��Ǭ�̸� �뷮 ���ߴ��� ��Ʈ���� ���� ���� ���ڳ�. �ٵ� ���� ���� ���� ����.");
					_getch();
					CLR;
					break;
				}
				else if (item[1] == 1 && item[6] == 1)//������, �跮 ��Ǭ ��� ���� ��
				{
					printf("���Ͻǿ��� ������ ���̶�, �뷮 ���� �跮 ��Ǭ...�ʿ��� �� �� �ִ� �� ����.\n");
					_getch();
					printf("���� �� �ް� �������ָ�...�ϼ��̴�! �����ؼ� ��� ����.\n\n");
					_getch();
					printf("�� �������� ȹ���ߴ�!");
					_getch();
					CLR;
					item[8] = 1;//�� ������ ȹ��
					break;
				}
				else
				{
					printf("���� ������ ���� ������ ���ٵ�, ������ �ִ� �� �߿��� �� ���� �� �ϳ��� ����...");
					_getch();
					CLR;
					break;
				}
				if (item[8] == 1)//�� ������ ���� ��
				{
					printf("���� ����ٰ� �ٴ��� ����������. �� ���� �˾Ƽ� ġ�����!");
					_getch();
					CLR;
					break;
				}
			}
			else if (bathChoose == 3)//�ŽǷ� ������
			{
				CLR;
				printf("�ŽǷ� ���ư��߰ڴ�.");
				_getch();
				CLR;
				livingroom();
			}
			else//������ �̿��� ���ڸ� �Է����� ���
			{
				CLR;
				break;
			}
		}
	}
}

int gameover_bedroom()
{
	CLR;
	_getch();
	printf("����.\n\n\n");
	_getch();
	printf("GAME OVER\n\n");
	printf("���ڴ� ���� �ǵ��� ����.");
	_getch();
	CLR;
	titleOpen();
}

int ending()
{
	CLR;
	_getch();
	printf("������ �հ� ���⿡ �����ߴ�!");
	_getch();
	CLR;
	titleOpen();
}