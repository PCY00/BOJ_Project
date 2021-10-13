#include <iostream>
#include <deque>

using namespace std;

int M1[51] = { 0, };

int main() {
	int N, M;
	int save = 0;
	int count = 0;
	deque <int> d;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		d.push_back(i);
	}
	for (int i = 1; i <= M; i++) {
		cin >> M1[i];
		for (int j = 0; j < d.size(); j++) {
			if (d[j] == M1[i]) {
				save = j;
				break;
			}
		}
		if (save < d.size() - save) {
			for (int j = 0; j < d.size(); j++) {
				if (d.front() == M1[i]) {
					d.pop_front();
					break;
				}
				d.push_back(d.front());
				d.pop_front();
				count++;
			}
		}
		else {
			for (int j = 0; j < d.size(); j++) {
				if (d.front() == M1[i]) {
					d.pop_front();
					break;
				}
				d.push_front(d.back());
				d.pop_back();
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}