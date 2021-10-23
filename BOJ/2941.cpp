#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	string str1 = "1";
	int save = 0;
	int count = 0;
	cin >> str;
	string s[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	for (int i = 0; i < 8; i++) {
		for (;;) {
			if (str.find(s[i]) != string::npos) {
				save = str.find(s[i]);
				str.replace(save, s[i].length(), str1);
			}
			else if (str.find(s[i]) == string::npos) {
				break;
			}
		}
	}
	for (int i = 0; i < str.length(); i++) {
		count++;
	}
	cout << count << endl;
	return 0;
}