#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n = 5;
    int maxSum = INT_MIN;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "maximum sum of array is : " << maxSum << endl;
    return 0;
}
