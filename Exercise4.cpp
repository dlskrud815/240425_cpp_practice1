#include <iostream>
using namespace std;

int main()
{
	int stdNum;
	float stdScore, scoreSum = 0;

	cout << "������ �Է��� �л��� �� ��? " << endl;
	cin >> stdNum;

	int* stdArr = new int[stdNum];

	for (int i = 0; i < stdNum; i++)
	{
		cout << i << "�� �л��� ������ �Է��ϼ���: ";
		cin >> stdScore;

		scoreSum += stdScore;
		*(stdArr + i) = stdScore;
	}

	cout << "���� ���: " << scoreSum / stdNum << endl;

	return 0;
}