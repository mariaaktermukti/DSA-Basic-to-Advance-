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

    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) 
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            int sum;
            if (i == 0)
                sum = prefix[j];
            else
                sum = prefix[j] - prefix[i - 1];

            maxSum = max(maxSum, sum);
        }
    }

    cout << "Maximum Subarray Sum (Prefix Sum): " << maxSum << endl;
    return 0;
}


// Final Time Complexity: O(n²)
// Space Complexity: O(n)
