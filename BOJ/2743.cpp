#include <iostream>

using namespace std;

int mystrlen(const char *str);

int main() {
	char arr[101] = "";
	int i = 0;
	while (!cin.eof()) {
		cin >> arr[i];
		i++;
	}
	cout << mystrlen(arr) << '\n';
	return 0;
}

int mystrlen(const char *str) {
	int cnt = 0;
	for (cnt = 0; str[cnt]; cnt++); // str[cnt]는 종료문자('\n')이 나올 때까지
	return cnt;
}