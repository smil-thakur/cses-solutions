#include <iostream>
using namespace std;
int main()
{
    long int n;
    cin >> n;
    int arr[n - 1];
    long int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << ((n * (n + 1)) / 2) - sum;
}