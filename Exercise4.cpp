#include <iostream>
using namespace std;

int main()
{
	int stdNum;
	float stdScore, scoreSum = 0;

	cout << "������ �Է��� �л��� �� ��? " << endl;
	cin >> stdNum;

	int* stdArr = new int[stdNum]; //���� �迭 ����

	for (int i = 0; i < stdNum; i++)
	{
		cout << i+1 << "�� �л��� ������ �Է��ϼ���: ";
		cin >> stdScore;

		scoreSum += stdScore;
		*(stdArr + i) = stdScore;
	}

	delete[] stdArr; //�޸� ����

	cout << "���� ���: " << scoreSum / stdNum << endl;

	return 0;
}