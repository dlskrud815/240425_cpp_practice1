#include <iostream>
#include <string>
using namespace std;

int main()
{
	string score[5][4] = {
		{"이름", "나이", "국어", "수학"},
		{"방지턱", "19", "66", "68"},
		{"정직한", "20", "73", "94"},
		{"김가루", "19", "58", "37"},
		{"조나단", "20", "82", "29"}
	};

	int numRows = sizeof(score) / sizeof(score[0]);
	int numCols = sizeof(score[0]) / sizeof(score[0][0]);
	int age;

	while (1)
	{
		cout << endl << "나이를 입력해주세요 (-1 입력시 종료)" << endl;
		cin >> age;

		// type
		// 0. -1 입력 시 종료
		// 1. 배열 내 입력한 나이 존재
		// 2. 배열 내 입력한 나이 부재

		int type = 0;


		if (age == -1)
		{
			type = 0;
		}
		else 
		{
			for (int i = 1; i < numRows; i++)
			{
				if (age == stoi(score[i][1]))
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
			cout << "프로그램을 종료합니다." << endl;
			return 0;

		case 1:
			for (int j = 1; j < numRows; j++)
			{
				if (age == stoi(score[j][1]))
				{
					cout << "이름: " << score[j][0] << ", 수학 점수: " << score[j][3] << endl;
				}
			}
			break;

		case 2:
			cout << "해당 나이는 존재하지 않습니다." << endl;
			break;
		}
	}
}