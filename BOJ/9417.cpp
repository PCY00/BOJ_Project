#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int gcd(int a, int b);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector <int> v;
	int Case;
	string str;
	int max = -1;
	cin >> Case;
	cin.ignore();
	while (Case != 0) {
		v.clear();
		getline(cin, str);
		istringstream ss(str);
		while (getline(ss, str, ' ')) {
			v.push_back(stoi(str));
		}
		for (int i = 0; i < v.size() - 1; i++) {
			for (int j = i + 1; j < v.size(); j++) {
				if (max <= gcd(v[i], v[j])) {
					max = gcd(v[i], v[j]);
				}
			}
		}
		Case--;
		cout << max << '\n';
		max = -1;
	}
	return 0;
}

int gcd(int a, int b) {
	int c = 0;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}