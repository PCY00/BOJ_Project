#include <iostream>

using namespace std;

typedef struct p{
	int weight;
	int height;
	int m;
}ck;

int main() {
	int n;
	cin >> n;
	ck* num = new ck[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i].weight >> num[i].height;
		num[i].m = 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (num[i].weight < num[j].weight && num[i].height < num[j].height) {
				num[i].m++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << num[i].m << ' ';
	}
	delete[] num;
	return 0;
}