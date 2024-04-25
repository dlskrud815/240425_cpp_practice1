#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;

// �迭�� ũ�� ��ȯ
int getArraySize(const wchar_t* array) {
    int size = 0;
    while (array[size] != L'\0') {
        size++;
    }
    return size;
}

// �迭 ��� swap
void swap(wchar_t& a, wchar_t& b) {
    wchar_t temp = a;
    a = b;
    b = temp;
}

// �迭 reverse
void reverse(wchar_t* array) {
    int size = getArraySize(array);
    for (int i = 0; i < size / 2; i++) {
        swap(array[i], array[size - i - 1]);
    }
}

int main() {
    wchar_t input[MAX_SIZE];

    // ����ڷκ��� �Է� �ޱ�
    wcout << L"�ѱ� ������ �Է��ϼ���: ";
    wcin.getline(input, MAX_SIZE);

    // �Է� ���� ���� ���
    wcout << L"�Է��� ����: " << input << endl;

    // reverse �Լ��� �迭 ������
    reverse(input);

    // ������ ���� ���
    wcout << L"������ ����: " << input << endl;

    return 0;
}