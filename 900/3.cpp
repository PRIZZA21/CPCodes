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
    long long n,x,k;
    cin>>n>>x>>k;
    if(2*k>=x*(x+1) && 2*k<=n*(n+1)-(n-x)*(n-x+1)){ //check if k is between the minimum and maximum sum 
			cout << "YES\n";
		}
		else cout << "NO\n";
   }
}

// n k x
//k distinct bw 1 and n so that sum = x
// 5 3 10 
// 10 = 2+ 3+5
