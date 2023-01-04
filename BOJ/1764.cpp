#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int N, M;						// N = 듣도 못한 사람, M = 보도 못한 사람
int cnt;						// 사람 수
vector<string> all;				//모든 이름이 들어있는 배열
vector<string> result;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;

	cin >> N >> M;

	all.reserve(N + M + 1);											//resize는 값을 채워놓는다. reserve는 값을 채워놓지 않음
	result.reserve(N + M + 1);

	for (int i = 0; i < N + M; i++) {
		cin >> str;
		all.push_back(str);
	}

	sort(all.begin(), all.end());

	for (int i = 0; i < N + M - 1; i++) {
		if (all[i].compare(all[i+1]) == 0){							//문자열 비교
			result.push_back(all[i]);
			cnt++;
		}
	}

	cout << cnt << '\n';
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << '\n';
	}
	return 0;
}