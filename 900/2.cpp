#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>
#include<cassert>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int odd_occurrences = 0; // Initialize to zero
        map<char,int> mp;
        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if(it->second % 2 != 0) odd_occurrences++; // Check if frequency is odd
        }
        if(odd_occurrences > k + 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
