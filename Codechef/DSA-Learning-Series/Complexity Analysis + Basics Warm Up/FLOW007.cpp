// Reverse The Number

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r = 0;
        cin >> n;
        while (n > 0)
        {
            int tmp = n % 10;
            r = r * 10 + tmp;
            n /= 10;
        }
        cout << r << endl;
    }
    return 0;
}