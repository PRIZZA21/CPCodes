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

bool check(vector<int> &v,int mid,int k,int m)
   {   int temp =k;
       int n = v.size();
      for(int i=0;i<n;i++)
      {
        if(v[i]<=mid)
        {
            temp--;
        }
        else
        {
            temp=k;
        }
        if(temp==0) {m--;
        temp=k;
        }
      }
      return m<=0;
   }


int main()
{
   vector<int> v ={ 1000000000,1000000000};
   cout<< check(v,1000000000,1,1)<<endl;
    int low = 1000000000;
    int high = 1000000000;
    int ans=-1;
         while(low<=high)
         {
            int mid = (low +high)/2;
            cout<<"***"<<endl;
            cout<<check(v,mid,1,1)<<endl;
            cout<<"***"<<endl;
            if(check(v,mid,1,1))
            {   cout<< mid << endl;
                ans=mid;
                high = mid -1;
            }
            else
            {
                low = mid+1;
            }
         }
         cout<<ans<<endl;


}