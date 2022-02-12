#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	int small = 0, big = 0, num = 0, gap = 0;
	while(!cin.eof()) {
		getline(cin, str);
		for (int i = 0; i < str.length(); i++) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				small++;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z') {
				big++;
			}
			else if (str[i] >= '0' && str[i] <= '9') {
				num++;
			}
			else if (str[i] == ' ') {
				gap++;
			}
		}
		if(str.length() != 0) cout << small << " " << big << " " << num << " " << gap << '\n';
		small = 0; big = 0; num = 0; gap = 0;
	}
	return 0;
}