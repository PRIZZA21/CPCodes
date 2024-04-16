#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>
#include<cassert>
#include<numeric>
#define ll long long int
using namespace std;

// Function to check if we can divide the array arr[] into K
// subarrays such that each subarray has sum <= mid
bool isValid(vector<ll> arr, ll N, ll targetProducts, ll mid)
{
    ll products =0;
    for(int i=0; i<N; i++)
    {
        products += mid/arr[i];
        if(products>=targetProducts) return true;
    }
    return products>=targetProducts;
}

// function to minimize the maximum sum among all subarrays
ll solve(vector<ll> arr, ll N, ll K)
{
    // Define the lower and upper limit of our answer
    ll low =0;
    ll high = 1e18;
    ll ans = -1;
    // Binary Search to minimize the maximum sum
    while (low <= high) {
        ll mid = (low + high) / 2;
        // If it is possible to divide the array arr[] into
        // K subarrays such that each subarray has sum <=
        // mid, then we update ans and move high to mid-1
        if (isValid(arr, N, K, mid)) {
            ans = mid;
            high = mid - 1;
        }
        // If it is impossible to divide the array arr[]
        // into K subarrays such that each subarray has sum
        // <= mid, move low to mid+1
        else {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    // Sample Input
    ll N,K;
    cin>>N>>K;
    vector<ll> arr(N,0);
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    cout << solve(arr, N, K);
}
