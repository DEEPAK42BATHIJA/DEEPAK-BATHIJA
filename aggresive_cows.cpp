#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int cowcount = 1;
    int cow = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - cow >= mid)
        {
            cowcount++;
            cow = arr[i];
        }
        if (cowcount == m)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[5] = {1, 2, 4, 8, 9};
    int res = -1;
    int s = 1, e = 8;
    int m = 3;
    while (s <= e)
    {
        int mid = (s + e) >> 1;
        if (isPossible(arr, 5, m, mid))
        {
            res = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    cout << res;
}