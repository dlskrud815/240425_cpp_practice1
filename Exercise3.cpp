#include <iostream>
using namespace std;
#define ARRAY_SIZE 10

void reverse(int* array)
{
	for (int i = 0; i < ARRAY_SIZE / 2; i++) {
		int temp = *(array + i);
		*(array + i) = *(array + (ARRAY_SIZE - i - 1));
		*(array + (ARRAY_SIZE - i - 1)) = temp;
	}
}

int main()
{
	int myArray[ARRAY_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	reverse(&myArray[0]); //배열은 인덱스를 안 붙이면 & 없이 myArray로 사용 가능
	//reverse(myArray);

	for (int j = 0; j < ARRAY_SIZE; j++)
	{
		cout << myArray[j] << " ";
	}

	return 0;
}