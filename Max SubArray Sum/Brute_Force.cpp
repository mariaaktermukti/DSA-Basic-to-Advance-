#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        int currentSum = 0;
        for (int j = i; j < n; j++) {
            currentSum += arr[j];
            maxSum = max(maxSum, currentSum);
        }
    }

    cout << "Maximum Subarray Sum (Brute Force): " << maxSum << endl;
    return 0;
}


// Time Complexity = O(n³)
// Space Complexity = O(1)