#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    long int arr[n];
    long int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            ans = ans + arr[i] - arr[i + 1];
            arr[i + 1] = arr[i];
        }
    }
    cout << ans;
}