#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, long long maxAllowedpages) {
    int stu = 1;
    long long pages = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxAllowedpages) {
            return false;
        }
        if (pages + arr[i] <= maxAllowedpages) {
            pages += arr[i];
        } else {
            stu++;
            pages = arr[i];
        }
        if (stu > m) return false;
    }
    return true;
}

int allocateBooks(vector<int> &arr, int n, int m) {
    if (m > n) {
        return -1;
    }

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int ans = -1;

    long long st = 0, end = sum; // range of possible answer

    while (st <= end) {
        long long mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid)) {
            ans = (int)mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}