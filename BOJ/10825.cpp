#include <iostream>
#include <algorithm>

using namespace std;

struct students {
	string name;
	int kor, eng, mat;
};

bool cmp(const students& a1, const students& a2);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	students* s = new students[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i].name >> s[i].kor >> s[i].eng >> s[i].mat;
	}
	sort(s, s + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << s[i].name << '\n';
	}
	delete[] s;
	return 0;
}

bool cmp(const students& a1, const students& a2) {
	if (a1.kor > a2.kor) {
		return true;
	}
	else if (a1.kor == a2.kor) {
		if (a1.eng < a2.eng) {
			return true;
		}
		else if (a1.eng == a2.eng) {
			if (a1.mat > a2.mat) {
				return true;
			}
			else if (a1.mat == a2.mat) {
				if (a1.name < a2.name) {
					return true;
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}
