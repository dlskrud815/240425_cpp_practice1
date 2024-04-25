#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;

// 배열의 크기 반환
int getArraySize(const wchar_t* array) {
    int size = 0;
    while (array[size] != L'\0') {
        size++;
    }
    return size;
}

// 배열 요소 swap
void swap(wchar_t& a, wchar_t& b) {
    wchar_t temp = a;
    a = b;
    b = temp;
}

// 배열 reverse
void reverse(wchar_t* array) {
    int size = getArraySize(array);
    for (int i = 0; i < size / 2; i++) {
        swap(array[i], array[size - i - 1]);
    }
}

int main() {
    wchar_t input[MAX_SIZE];

    // 사용자로부터 입력 받기
    wcout << L"한글 문장을 입력하세요: ";
    wcin.getline(input, MAX_SIZE);

    // 입력 받은 문장 출력
    wcout << L"입력한 문장: " << input << endl;

    // reverse 함수로 배열 뒤집기
    reverse(input);

    // 뒤집은 문장 출력
    wcout << L"뒤집힌 문장: " << input << endl;

    return 0;
}