#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string minsik;
	int m_l = 0, m_o = 0, m_v = 0, m_e = 0;
	cin >> minsik;

	int N, k = 0, max = 0, order = 0;
	cin >> N;

	string* _name = new string[N];
	int* women = new int[N];

	for (int i = 0; i < N; i++) {
		women[i] = 0;
	}

	for (int i = 0; i < minsik.size(); i++) {
		if (minsik[i] == 'L') m_l++;
		if (minsik[i] == 'O') m_o++;
		if (minsik[i] == 'V') m_v++;
		if (minsik[i] == 'E') m_e++;
	}

	for (int i = 0; i < N; i++) {
		string name;
		cin >> name;
		_name[i] = name;
	}

	sort(_name, _name + N);
	for (int i = 0; i < N; i++) {
		int love[4] = { 0, };
		int L = 0, O = 0, V = 0, E = 0;
		for (int j = 0; j < _name[i].size(); j++) {
			if (_name[i][j] == 'L') love[0]++;
			if (_name[i][j] == 'O') love[1]++;
			if (_name[i][j] == 'V') love[2]++;
			if (_name[i][j] == 'E') love[3]++;
		}
		L = m_l + love[0]; O = m_o + love[1];
		V = m_v + love[2]; E = m_e + love[3];
		women[k] = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
		k++;
	}

	max = women[0];
	for (int i = 0; i < N; i++) {
		if (max < women[i]) {
			max = women[i];
			order = i;
		}
	}
	cout << _name[order];
	return 0;
}	