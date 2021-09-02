#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	char arr[10] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
	int count = 0;

	while (1) {
		getline(cin, str);

		if (str == "#") {
			break;
		}
		for (int i = 0; i < str.length(); i++) {
			for (int j = 0; j < 10; j++) {
				if (str[i] == arr[j]) {
					count++;
				}
			}
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}