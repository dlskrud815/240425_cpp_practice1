#include <iostream>
#include<string>
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
	int age;

	while (1)
	{
		cout << endl << "���̸� �Է����ּ���." << endl;
		cin >> age;

		if (age == -1)
		{
			break;
		}
		else
		{
			for (int i = 1; i < numRows; i++)
			{
				if (age == stoi(score[i][1]))
				{
					cout << "�̸�: " << score[i][0] << ", ���� ����: " << score[i][3] << endl;
				}
			}
		}
	}

	return 0;
}