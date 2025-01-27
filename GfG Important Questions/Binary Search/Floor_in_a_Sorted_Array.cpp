//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int findFloor(vector<int> &arr, int k)
    {

        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= k)
            {
                ans = mid;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return high;//ans;

        // or

        // int lb = lower_bound(arr.begin(), arr.end(), k) - arr.begin();
        // if (lb == 0 || arr[lb] > k)
        // {
        //     return lb - 1;
        // }
        // return lb;
    }
};

//{ Driver Code Starts.
int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends