#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Print(vector<int> &a) {
    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> a(3);

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), less<int>());

    Print(a);
}