#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string strall;
	string str[10] = { "black" , "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	int arr[3] = { 0, };
	long long int num = 0;
	
	for (int i = 0; i < 2; i++) {
		cin >> strall;
		for (int j = 0; j < 10; j++) {
			if (strall == str[j]) {
				arr[i] = j;
			}
		}
	}
	cin >> strall;
	for (int i = 0; i < 10; i++) {
		if (strall == str[i]) {
			num = pow(10, i);
		}
	}
	int sum = arr[0] * 10 + arr[1];
	num = sum * num;
	cout << num;
	
	return 0;
}