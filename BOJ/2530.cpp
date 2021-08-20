#include <iostream>

using namespace std;

int main()
{
    int h, m, s, D, Dh, Dm, Ds;
    cin >> h >> m >> s >> D;
    
    int mr, sr;

    Dh = D / 3600;
    Dm = (D % 3600) / 60;
    Ds = (D % 3600) % 60;

    int sec = s + Ds;
    int sadd = sec / 60;
    s = sec % 60;

    int min = m + Dm + sadd;
    int madd = min / 60;
    m = min % 60;

    int hour = h + Dh + madd;
    h = hour % 24;

    cout << h << " " << m << " " << s << "\n";

    return 0;
}
