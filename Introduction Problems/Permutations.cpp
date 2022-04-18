#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int count = 1;
    int start = 2;
    if (n == 1)
        cout << 1;
    else if (n <= 3)
        cout << "NO SOLUTION";
    else
    {
        while (n >= count)
        {

            cout << start << " ";
            count++;
            start = start + 2;
            if (count == (n / 2) + 1)
            {
                start = 1;
            }
        }
    }
}