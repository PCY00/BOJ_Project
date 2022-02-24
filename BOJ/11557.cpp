#include <iostream>
#include <string>

using namespace std;

typedef struct {
	string str;
	int K;
}S;

int main() {
	int max = 0, result = 0;
	int Case, N;
	cin >> Case;
	for (int i = 0; i < Case; i++) {
		cin >> N;
		S* s = new S[N];
		for (int j = 0; j < N; j++) {
			cin >> s[j].str >> s[j].K;
			if (max < s[j].K) {
				max = s[j].K;
				result = j;
			}
		}
		cout << s[result].str << '\n';
		delete[] s;
	}
	return 0;
}