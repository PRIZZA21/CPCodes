// https://codeforces.com/problemset/problem/1167/B
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

vector<int> p = {4, 8, 15, 16, 23, 42};
int ans[4];

int main()
{
	for(int i = 0; i < 4; i++)
	{
		cout << "? " << i + 1 << " " << i + 2 << endl;
		cout.flush();
		cin >> ans[i];
	}
	do
	{
		bool good = true;
		for(int i = 0; i < 4; i++)
			good &= (p[i] * p[i + 1] == ans[i]);
		if(good) break;
	}
	while(next_permutation(p.begin(), p.end()));
	cout << "!";
	for(int i = 0; i < 6; i++)
		cout << " " << p[i];
	cout << endl;
	cout.flush();
	return 0;
}