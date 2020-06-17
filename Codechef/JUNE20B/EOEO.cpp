// The Tom and Jerry Game!

#include <iostream>
#include <string.h>
using namespace std;

void io()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    io();
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long ts;
        cin >> ts;
        unsigned long long cnt = 0;
        for (int i = 1; i <= ts; ++i)
        {
            if (i % 2 == 0)
            {
                if (ts % 2 == 0)
                {
                    ts /= 2;
                    i /= 2;
                    continue;
                }
                else
                {
                    cnt = ts / 2;
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
