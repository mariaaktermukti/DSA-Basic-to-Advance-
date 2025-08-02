#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++) 
    {
        currentSum += arr[i];
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0)
            currentSum = 0;
    }

    cout << "Maximum Subarray Sum (Kadane's): " << maxSum << endl;
    return 0;
}


// Final Time Complexity: O(n)
// Space Complexity: O(1)
