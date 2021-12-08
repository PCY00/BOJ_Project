#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool comp(char a, char b);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	cin >> str;
	char* arr = new char[str.length() + 1];
	for (int i = 0; i < str.length(); i++) {
		arr[i] = str[i];
	}
	sort(arr, arr + str.length(), comp);
	for (int i = 0; i < str.length(); i++) {
		cout << arr[i];
	}
	delete[] arr;
	return 0;
}

bool comp(char a, char b) {
	if (a <= b) {
		return false;
	}
	else {
		return true;
	}
}