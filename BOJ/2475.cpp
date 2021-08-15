#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double UniqueNumber1, UniqueNumber2, UniqueNumber3, UniqueNumber4, UniqueNumber5;

    cin >> UniqueNumber1 >> UniqueNumber2 >> UniqueNumber3 >> UniqueNumber4 >> UniqueNumber5;

    int UniqueNumber6 = (pow(UniqueNumber1, 2) + pow(UniqueNumber2, 2) + pow(UniqueNumber3, 2)  + pow(UniqueNumber4, 2) + pow(UniqueNumber5, 2));

    cout << UniqueNumber6 % 10 << endl;
}
