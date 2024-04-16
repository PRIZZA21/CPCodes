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
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        // 1  1 7 
        sort(v.begin(),v.end());
        int sec=0;
        int j=0;
        long long ans=0;
        for(int i=0;i<v.size();i++)
        {
            // if(b==1 && j<n)
            // {
            //     b= min(b+ v[j],a);
            //     j++;
            // }
            // sec++;
            // b--;
            // cout<<b<<endl;1 +1 , 1+1 , 1+ 7 
           // 3 2 1        2 2 5 
          //  min( 1+ 1+1+7,5)
          long long  temp = min(1+v[i],a);
        // 2 3 6 7 7 = 25 
          ans+=temp;
        }
        
        ans+=(b-n);
        cout<<ans<<endl;
    }
}