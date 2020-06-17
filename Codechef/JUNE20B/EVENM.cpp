// Even Matrix

#include <iostream>
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
        int n, cnt = 1;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; ++j)
                {
                    cout << cnt++ << " ";
                }
            }
            else
            {
                cnt += n - 1;
                for (int j = 0; j < n; ++j)
                {
                    cout << cnt-- << " ";
                }
                cnt += n + 1;
            }
            cout << endl;
        }
    }
    return 0;
}
