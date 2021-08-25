#include <iostream>
#include <string>

using namespace std;

int main() {
	string num; //받는 숫자
	int sum = 0;
	
	while (cin >> num) {
		if (num == "0") {
			break;
		}
		for (int i = 0; i < num.length(); i++) {
			if (num[i] == '0') {
				sum += 5;  //옆의 공백 1개 + 해줌
			}
			else if (num[i] == '1') {
				sum += 3; //옆의 공백 1개 + 해줌
			}
			else {
				sum += 4; //옆의 공백 1개 + 해줌
			}
		}
		cout << sum + 1 << endl;  //첫번째 숫자는 공백 2개인데 위 식에서 +1 했기에 +1만 해줌
		sum = 0;
	}
	return 0;
}