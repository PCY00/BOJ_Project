#include <iostream>
#include <string>
#define num 5

using namespace std;

int main() {
	string* str = new string[num];
	unsigned int max = 0;
	for (int i = 0; i < num; i++) {
		cin >> str[i];
		if (max < str[i].length()) {
			max = str[i].length();
		}
	}
	for (unsigned int i = 0; i < max; i++) {
		for (unsigned int j = 0; j < num; j++) {
			if (i < str[j].length()) {
				cout << str[j][i];
			}
		}
	}
	delete[] str;
	return 0;
}