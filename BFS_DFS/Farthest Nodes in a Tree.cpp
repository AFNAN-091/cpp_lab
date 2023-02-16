//           * * ببسم الله الرحمن الرحيم  * *
// ********************@Author*******************
//     ____     _____   __  _     ____     __  _
//    / __ \   | ____| |  \| |   / __ \   |  \| |
//   / /__\ \  | |__   | |\  |  / /__\ \  | |\  |
//  /_/    \_\ |_|     |_| \_| /_/    \_\ |_| \_|
 
#include<bits/stdc++.h>
#include<numeric>
#define mod 1000000007
#define lcm(a,b)    a*b/__gcd(a,b)
#define endl '\n'
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long ll;
/*--------------------------------------------------------------------*/

#define sz 50000

vector<int>adj[sz],w[sz];
int visit[sz];
int cost[sz];
int farthest_node;
int bfs(int st)
{
	int mx = 0;
	farthest_node = 0;
	queue<int>q;
	q.push(st);
	//dis[0] = 0;
	cost[st] = 0;
	visit[st] = 1;	
	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		for(int i=0; i<adj[node].size(); i++)
		{
			int u = adj[node][i];
			//cout<<u<<endl;
			if(!visit[u])
		    {
		    	q.push(u);
		    	visit[u] = 1;
		    	//dis[u] = dis[node] + 1;
		    	cost[u] = cost[node] + w[node][i];
		    	//cout<<cost[u]<<endl;
		    	if(mx<cost[u])
		    	{
		    	//	cout<<u<<endl;
		    		farthest_node = u;
		    		mx = cost[u];
		    	}
		    		
		    	  	
		    }

		}
	}

//	cout<<endl<<endl;
	//cout<<mx<<endl;
	return mx;
}



void init(int n)
{
	for(int i=0; i<n; i++)
	{
		adj[i].clear();
		w[i].clear();
		visit[i] = 0;
	}
}

int main()
{   
    FAsT  
    ll a,b,c,d,e,f,g,h,k,len,n,m,p,q,t,x,y,z;
    cin>>t;
    c =1;
    while(t--)
    {
       cin>>n;
       init(n);
       for(int i=0; i<n-1; i++)
       {
       		int u,v;
       		cin>>u>>v>>z;
       		adj[u].push_back(v);
       		adj[v].push_back(u);
       		w[u].push_back(z);
       		w[v].push_back(z);
       }
       bfs(0);
       memset(visit, 0, sizeof(visit));
       //cout<<"p "<<p<<endl;
       bfs(farthest_node);
       cout<<"Case "<<c++<<": ";
       cout<<cost[farthest_node]<<endl;
    }
    return 0;
}