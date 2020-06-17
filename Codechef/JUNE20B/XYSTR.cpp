// Chef and String

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
        char s[100001];
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == 'x')
            {
                if (s[i + 1] == 'y')
                {
                    cnt++;
                    i++;
                    continue;
                }
                else
                {
                    continue;
                }
            }
            else if (s[i] == 'y')
            {
                if (s[i + 1] == 'x')
                {
                    cnt++;
                    i++;
                    continue;
                }
                else
                {
                    continue;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
