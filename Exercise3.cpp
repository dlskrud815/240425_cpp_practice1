#include <iostream>
using namespace std;
#define ARRAY_SIZE 5

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
	int myArray[ARRAY_SIZE] = { 1, 2, 3, 4, 6 };

	reverse(&myArray[0]);

	for (int k = 0; k < ARRAY_SIZE; k++)
	{
		cout << myArray[k] << endl;
	}

	return 0;
}