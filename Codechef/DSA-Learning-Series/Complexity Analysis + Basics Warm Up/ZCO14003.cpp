// Smart Phone

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

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
    ll n, tmp, max = 0;
    cin >> n;

    vector<ll> ar;

    for (ll i = 0; i < n; i++)
    {
        cin >> tmp;
        ar.push_back(tmp);
    }

    sort(ar.begin(), ar.end());

    for (ll i = 0; i < n; ++i)
    {
        if (ar[i] * (n - i) > max)
        {
            max = ar[i] * (n - i);
        }
    }

    cout << max << endl;

    return 0;
}