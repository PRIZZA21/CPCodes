
// https://codeforces.com/problemset/problem/1520/F1
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
     int n,t;
     cin>>n>>t;
     int k;
     cin>>k;
     int l=1;
     int r = n;
    
     while(l<=r)
     {
        if(l==r)
        {

            cout<<"! "<< l<<endl;
            return 0;
        }
        int m = (l+r)/2;
        cout<<"? "<<l<<" "<<m<<endl;
        int sum;
        cin>>sum;

        if(m-l+1-sum>=k)
        {
            r=m;
        }
        else{
      
            
            k=k - (m - l + 1) + sum;
            l=m+1;
            
        }


     }
}