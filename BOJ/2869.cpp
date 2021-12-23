#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int v, a, b;
	cin >> a >> b >> v;
	int sum = 0;
	sum = ((v - b - 1) / (a - b)) + 1;  //  (v - b) / (a - b)가 나누어 떨어지면 그 날짜가 맞지만, 나누어 떨어지지 않을 경우 +1을 해줘야 한다.
												// 미리 앞에서 -1 을 해주면 나누어 떨어질 때 1이 낮기 때문에 뒤에 +1을 해준다. 결론은 귀찮아서 미리 계산.
	cout << sum << '\n';
	return 0;
}