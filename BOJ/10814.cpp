#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct per {
	int age;
	int num;
	string name;
};

bool cmp(const per& a1, const per& a2) {
	if (a1.age < a2.age) {
		return true;
	}
	else if (a1.age == a2.age) {
		return a1.num < a2.num;
	}
	else {
		return false;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	per* s = new per[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i].age >> s[i].name;
		s[i].num = i;
	}
	sort(s, s + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << s[i].age << " " << s[i].name << '\n';
	}
	delete[] s;
	return 0;
}