//           * * ببسم الله الرحمن الرحيم    * *
// ********************@Author**************************************
//     ____     _____   __  _     ____     __  _
//    / __ \   | ____| |  \| |   / __ \   |  \| |
//   / /__\ \  | |__   | |\  |  / /__\ \  | |\  |
//  /_/    \_\ |_|     |_| \_| /_/    \_\ |_| \_|
 
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define lcm(a,b)    a*b/__gcd(a,b)
#define endl '\n'
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
typedef long long ll;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

vector<int>v[sz];
int indeg[sz];
vector<int> topo(int n)
{
	priority_queue<int,vector<int> , greater<int> >q;
	vector<int>sort;
	for(int i=1; i<=n; i++)
	{
		if(indeg[i]==0) q.push(i);
	}
	while(!q.empty())
	{
		int x = q.top();
		sort.push_back(x);
		q.pop();
		for(int i=0 ; i<v[x].size();i++)
		{
			int temp = v[x][i];
			if(--indeg[temp] == 0) q.push(temp);
		}
	}
	return sort;
}
 
int main()
{
	int n,m;
	cin>>n>>m;
	
	for(int i=0; i<m; i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		indeg[y]++;
	}
	vector<int>ans = topo(n);
	if(ans.size() != n)
	{
		cout<<"Sandro fails."<<endl;
		return 0;
	}
	for(auto x : ans)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
} 