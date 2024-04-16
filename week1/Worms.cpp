#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>
#include<cassert>
#include<numeric>
#define ll int64_t
using namespace std;







int main()
{
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int> pre(n,0);
    pre[0]=a[0];
    // prefix array 
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+a[i];
    }

    ll m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int key;
        cin>>key;
        int idx = lower_bound(pre.begin(),pre.end(),key)-pre.begin();
        cout<<idx+1<<endl;

    }

    



}