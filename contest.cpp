#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>
#include<cassert>

using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int flag=1;
        int i=0;
        int j=n-1;
        while(k>0)
        {
            if(flag==1)
            {
                v[i]--;
                if(v[i]==0)
                {
                    i++;
                }
            }
            else 
            {
                v[j]--;
                if(v[j]==0)
                 j--;
            }
            flag=!flag;
            k--;
        }
        cout<<j-i+1<<endl;
    }
}