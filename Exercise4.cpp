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
		cout << endl << i+1 << "�� �л��� ������ �Է��ϼ���: ";
		cin >> stdScore;

		scoreSum += stdScore;
		*(stdArr + i) = stdScore;
	}

	cout << "\n���� ���:\n( ";

	for (int j = 0; j < stdNum; j++)
	{
		cout << stdArr[j];

		if (j != stdNum - 1)
		{
			cout << " + ";
		}
		else 
		{
			cout << " ) / " << stdNum << " = ";
		}
	}

	delete[] stdArr; //�޸� ����

	cout << scoreSum / stdNum << endl;

	return 0;
}