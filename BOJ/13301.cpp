#include <iostream>

using namespace std;

int main() {
	int N;
	long long int arr[100] = { 0, };
	cin >> N;
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i <= N; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	cout << ((2 * arr[N]) + (2 * arr[N - 1]));
	return 0;
}
// 첫시도 74점 짜리
//#include <iostream>
//
//using namespace std;
//
//int arr[100];
//
//int fi(int n) {
//	if (n == 0) return 1;
//	else if (n == 1) return 1;
//	if (arr[n] != 0) return arr[n];
//	return fi(n - 1) + fi(n - 2);
//}
//
//int main(void) {
//	long long N;
//	cin >> N;
//	cout << (2 * fi(N)) + (2 * fi(N - 1));
//	return 0;
//}