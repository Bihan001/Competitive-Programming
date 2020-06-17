// Chef and Price Control

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, nsum = 0, ksum = 0;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            nsum += arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > k)
            {
                ksum += k;
            }
            else
            {
                ksum += arr[i];
            }
        }
        cout << nsum - ksum << endl;
    }
    return 0;
}
