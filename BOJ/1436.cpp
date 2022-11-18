#include <iostream>
#include <string>

using namespace std;

int N;										//몇번ㅉㅐ 영화인지
string endNum;								//숫자 담기용
int num = 666;								//종말 숫자 시작

void print();


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	print();

	return 0;
}

void print() {											//완전탐색 -> 666 ~ N이 0이 될 때까지
	while (N > 0) {
		endNum = to_string(num);						//숫자를 문자열로 바꾸어준다
		if (endNum.find("666") != -1) {					//string라이브러리에 있는 find함수를 이용하여 666이 없을 경우 N을 줄여준다.
			N--;
		}
		num++;											//666이 있으면 숫자 증가
	}

	cout << num - 1 << '\n';							// num에 1를 빼줘야 함 -> 666이 처음인데 위에서 666을 먼저 체크 후 num++를 해주기 때문에
}