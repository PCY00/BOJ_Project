#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;
	int A, B;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << "yes" << "\n";
	}
	return 0;
}// 곱셈은 1 이나 -1로 무한정 곱하여 수를 맞출수 있기에 무조건 yes만 나옴.


//#include <stdio.h>  //시간초과 뜬 코드.. 하나하나 무식하게 다 계산함
//
//const char* re(int a, int b) {
//	for (int i = 1; i <= a; i++) {
//		for (int j = 1; j <= b; j++) {
//			if (i * j == a && i + j == b) {
//				return "yes";
//			}
//		}
//	}
//	return "no";
//}
//
//int main() {
//	int T;
//	scanf_s("%d", &T);
//	int A, B;
//	for (int i = 0; i < T; i++) {
//		scanf_s("%d %d", &A, &B);
//		printf("%s\n", re(A, B));
//	}
//	return 0;
//}
