#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	string str, str2;
	map<string, string> a;
	for (int i = 0; i < n; i++) {
		cin >> str >> str2;
		a[str] = str2;
	}
	for (int i = 0; i < m; i++) {
		cin >> str;
		cout << a[str] << '\n';
	}
	return 0;
}