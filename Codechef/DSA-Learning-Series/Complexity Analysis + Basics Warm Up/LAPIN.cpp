// Lapindromes

#include <iostream>
#include <string>
#include <map>
using namespace std;

template <typename Map>
bool map_compare(Map const &lhs, Map const &rhs)
{
    // No predicate needed because there is operator== for pairs already.
    return lhs.size() == rhs.size() && std::equal(lhs.begin(), lhs.end(),
                                                  rhs.begin());
}

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
        string s, s1, s2;
        cin >> s;
        if (s.length() % 2 == 0)
        {
            s1 = s.substr(0, s.length() / 2);
            s2 = s.substr(s.length() / 2, s.length() / 2);
        }
        else
        {
            s1 = s.substr(0, s.length() / 2);
            s2 = s.substr(s.length() / 2 + 1, s.length() / 2);
        }
        map<char, int> m1, m2;
        for (int i = 0; i < s1.length(); i++)
        {
            m1[s1[i]] = 0;
            m2[s2[i]] = 0;
        }
        for (int i = 0; i < s1.length(); i++)
        {
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        if (map_compare(m1, m2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}