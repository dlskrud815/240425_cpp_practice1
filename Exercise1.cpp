#include <iostream>
#include<string>
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
		cout << endl << "나이를 입력해주세요." << endl;
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
					cout << "이름: " << score[i][0] << ", 수학 점수: " << score[i][3] << endl;
				}
			}
		}
	}

	return 0;
}