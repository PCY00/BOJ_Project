#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct people {
	string name;
	int day;
	int month;
	int year;
};

bool cmp(const people& a1, const people& a2) {
	if (a1.year > a2.year) {
		return true;
	}
	else if (a1.year == a2.year) {
		if (a1.month > a2.month) {
			return true;
		}
		else if (a1.month == a2.month) {
			if (a1.day > a2.day) {
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

int main() {
	int n;
	cin >> n;
	people* p = new people[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i].name >> p[i].day >> p[i].month >> p[i].year;
	}
	sort(p, p + n, cmp);
	for (int i = 0; i < n; i++) {
		if (i == 0 || i == n - 1) {
			cout << p[i].name << endl;
		}
	}
	delete[] p;
	return 0;
}