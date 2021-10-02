#include <iostream>
#include <string>

using namespace std;

int main() {
	int N;
	string L;
	cin >> N >> L;
	int a = 0;
	for (int i = 0; i < N; i++) {
		while (to_string(a++).find(L) != string::npos);
	}
	cout << a << endl;
	return 0;
}