#include <iostream>
using namespace std;

int main()
{
	int stdNum;
	float stdScore, scoreSum = 0;

	cout << "성적을 입력할 학생은 몇 명? " << endl;
	cin >> stdNum;

	int* stdArr = new int[stdNum]; //동적 배열 생성

	for (int i = 0; i < stdNum; i++)
	{
		cout << endl << i+1 << "번 학생의 성적을 입력하세요: ";
		cin >> stdScore;

		scoreSum += stdScore;
		*(stdArr + i) = stdScore;
	}

	cout << "\n성적 평균:\n( ";

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

	delete[] stdArr; //메모리 해제

	cout << scoreSum / stdNum << endl;

	return 0;
}