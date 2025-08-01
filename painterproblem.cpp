#include <iostream>
#include <vector>
using namespace std;


bool isPossible(vector<int> &arr, int n, int k, int maxAllowedTime)
{
    int painters = 1, time = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedTime)
        {
            return false;
        }
        if (time + arr[i] <= maxAllowedTime)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
        }
    }
    return painters <= k;
}


int minTimeToPaint(vector<int> & arr,  int n, int k)
    {
        // code here
        int sum = 0, maxVal = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            maxVal = max(maxVal, arr[i]);
        }

        int st = maxVal, end = sum, ans = -1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;

            if (isPossible(arr, n, k, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }

        return ans;
    }

int main()
{
    vector<int> arr={40,30,10,20};
    int n=4,k=2;

    cout<<minTimeToPaint(arr,n,k)<<endl;
    return 0;
}