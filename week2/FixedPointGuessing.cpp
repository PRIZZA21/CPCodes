// https://codeforces.com/problemset/problem/1698/D
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

void check(int l,int r)
{    
    if(l==r)
    {
        cout<<"! "<<l<<endl;
        return;
    }


    int mid=(l+r)/2;
    int cnt=0;
    cout<<"? "<<l<<" "<<mid<<endl;
    for(int i=1;i<=(mid-l+1);i++)
    {
        int t;
        cin>>t;
        if(l<=t && t<=mid) cnt++;
    }

    if(cnt % 2 ==0)
    {
        check(mid+1,r);
    }
    else
    {
         check(l,mid);
    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        check(1,n);
    }
}