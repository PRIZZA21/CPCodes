// https://youtube.com/watch?v=-1jnSLwsT9o
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

vector<int> v;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n;
         cin>>n;
         int ans=0;
         int b=n-1;
         for(int a=3;a*a<=(2*n-1);a=a+2)
         {
            ans++;
         }
        cout<<ans<<endl;         
    }
}
