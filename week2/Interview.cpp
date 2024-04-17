// https://codeforces.com/problemset/problem/1807/E#
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

void check (int l, int r,vector<int> v)
{    
    if(l==r)
    {
        cout<<"! "<<l<<endl<<flush;
        return ;
    }


     int mid = (l+r)/2;
     int k = (mid-l+1);
     cout<<"? "<<k<<" ";
     for(int i=l;i<=mid;i++)
     {
        cout<<i<<" ";
     }
     cout<<endl<<flush;
     int response;
     cin>>response;

     int expec_sum=0;
     for(int i=l;i<=mid;i++)
     {
        expec_sum+=v[i-1];
     }

     if(expec_sum<response)
     {
        check(l,mid,v);
     }
     else
     {
        check(mid+1,r,v);
     }
}



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    check(1,n,v);
    }


}