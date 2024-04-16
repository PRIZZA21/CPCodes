#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>
#include<cassert>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int  gap1= v[0]-0;
        int gap2=0;
        for(int i=0;i<n-1;i++)
        {
           gap2= max(v[i+1]-v[i],gap2);
        }
        int gap3 = x-v[n-1];
        int gap4 = 2*(x-v[n-1]);
        int ans = max(gap1,max(gap2,max(gap3,gap4)));
        cout<<ans<<endl;
    }
}