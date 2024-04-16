// problem link -: https://codeforces.com/problemset/problem/679/A

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


int main()
{
    string ans;
    int cnt=0;
    vector<int> check = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,4,9,25,49};
    for(auto x:check)
    {
        cout<<x<<endl;
        cin>>ans;
        if(ans=="yes") cnt++;
        if(cnt>1)
        {
            cout<<"composite"<<endl;
            break;
        }

    }
    if(cnt<=1) cout<<"prime"<<endl;
    return 0;
}