#include <iostream>
using namespace std;

int main()
{
	int my_array[5] = { 5, 4, 3, 2, 1 };
	int* p = my_array;

	cout << "value1: " << *p << endl;
	//p++;
	cout << "value2: " << *(p + 1) << endl;
	//p++;
	cout << "value3: " << *p + 1<< endl;

	return 0;
 }