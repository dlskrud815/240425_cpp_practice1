#include <iostream>
using namespace std;

int main()
{
	int stdNum;
	float stdScore, scoreSum = 0;

	cout << "성적을 입력할 학생은 몇 명? " << endl;
	cin >> stdNum;

	int* stdArr = new int[stdNum];

	for (int i = 0; i < stdNum; i++)
	{
		cout << i << "번 학생의 성적을 입력하세요: ";
		cin >> stdScore;

		scoreSum += stdScore;
		*(stdArr + i) = stdScore;
	}

	cout << "성적 평균: " << scoreSum / stdNum << endl;

	return 0;
}