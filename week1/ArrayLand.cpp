#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<algorithm>
#include<cassert>
#include<numeric>
#include<climits>
#define ll int64_t
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> city(n,0);
    vector<ll> tower(m,0);

    ll r=INT_MIN;
    for(int i=0;i<n;i++)
    {   // finding tower just ahead of city
        auto itr1 = upper_bound(tower.begin(),tower.end(),city[i]);
        int j = abs(itr1- tower.begin());
      
        // finding tower just behind city
        auto itr2 = lower_bound(tower.begin(),tower.end(),city[i]);
        int p = itr2- tower.begin();
     
       // max(abs(tower[j]-city[i]),abs(tower[p]-city[i])) to find the r for the given city
       // finding max of all r's 
        
        r=max(r,max(abs(tower[j]-city[i]),abs(tower[p]-city[i])));
        
    }
  
    cout<<r<<endl;

}