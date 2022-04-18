#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);

    vector<int> occurence;
    char c = '1', temp;
    int i = 0;

    while (true)
    {
        temp = c;

        c = getchar();
        if (c == '\n')
        {
            occurence.push_back(i);
            break;
        }
        else
        {
            if (temp == c || temp == '1')
            {
                i++;
            }
            else
            {
                occurence.push_back(i);
                i = 1;
                temp = '1';
            }
        }
    }
    int highest = 0;
    for (int j = 0; j < occurence.size(); j++)
    {
        if (occurence[j] > highest)
            highest = occurence[j];
    }
    cout << highest;
}