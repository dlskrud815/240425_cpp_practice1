#include <iostream>
#include <string>
using namespace std;

int main()
{
	string score[5][4] = {
		{"�̸�", "����", "����", "����"},
		{"������", "19", "66", "68"},
		{"������", "20", "73", "94"},
		{"�谡��", "19", "58", "37"},
		{"������", "20", "82", "29"}
	};

	int numRows = sizeof(score) / sizeof(score[0]);
	int numCols = sizeof(score[0]) / sizeof(score[0][0]);
	string age;

	cout << "** ���̸� �Է¹޾� �ش� ���̸� ���� �л��� �̸��� ���� ������ Ȯ���ϴ� ���α׷� **" << endl
		<< "(exit �Է½� ����)" << endl << endl;

	while (1)
	{
		cout << endl << "���̸� �Է����ּ���" << endl;
		cin >> age;

		// type
		// 0. -1 �Է� �� ����
		// 1. �迭 �� �Է��� ���� ����
		// 2. �迭 �� �Է��� ���� ����

		int type = 0;


		if (age == "exit")
		{
			type = 0;
		}
		else
		{
			for (int i = 1; i < numRows; i++)
			{
				if (age == score[i][1])
				{
					type = 1;
					break;
				}
				else
				{
					type = 2;
				}
			}
		}

		switch (type)
		{
		case 0:
			cout << "���α׷��� �����մϴ�." << endl;
			return 0;

		case 1:
			for (int j = 1; j < numRows; j++)
			{
				if (age == score[j][1])
				{
					cout << "�̸�: " << score[j][0] << ", ���� ����: " << score[j][3] << endl;
				}
			}
			break;

		case 2:
			cout << "�ش� ���̴� �������� �ʽ��ϴ�." << endl;
			break;
		}
	}
}