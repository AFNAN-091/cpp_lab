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
#define yes cout<< "YES\n"
#define no cout<< "NO\n"
#define f(x) cout<< x <<endl
#define in(x) cin>> x 
#define er(x) cerr << x << endl
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 5005
#define clr(a) memset(a, 0, sizeof a)
#define reset(a) memset(a, -1, sizeof a)
#define intmax INT_MAX
#define intmin INT_MIN
typedef long long ll;
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

ll n;

struct Node
{
	int n;
	int cost;
	Node(){}
	Node(int n, int cost) {this->n = n; this->cost = cost;}
    bool operator < (const Node &node) const {return cost > node.cost;}
};


vector<Node> adj[sz];
bool vis[sz];
int w[sz];
int w2[sz];
int mn[sz];
bool back[sz];

void init()
{
    for(int i = 1; i <= n; i++)
			adj[i].clear();

    clr(vis);
	reset(w);
	reset(w2);
	clr(back);
}

int dijkstra(int start, int end)
{
    priority_queue<Node> q;
	q.push(Node(start, 0));
	
	w[start] = 0;
	Node node, temp;

    for(int i = 1; i <= n; i++)
	{
		mn[i] = INT_MAX;
		for(int j = 0; j < adj[i].size(); j++)
			mn[i] = min(mn[i], 2*adj[i][j].cost);
	}
    while(!q.empty())
	{
		node = q.top();
		q.pop();
		
		if(vis[node.n]) 
		{
			if(w[node.n] < node.cost && (w2[node.n] == -1 || w2[node.n] >= node.cost))
					w2[node.n] = node.cost;
			else
				continue;
		}
		else vis[node.n] = true;
		
		for(int i = 0; i < adj[node.n].size(); i++)
		{
			temp = adj[node.n][i];
			if(w[temp.n] == -1 || w[temp.n] > node.cost + temp.cost)
			{
		 		q.push(Node(temp.n, node.cost + temp.cost));
				w2[temp.n] = w[temp.n];
		 		w[temp.n] = node.cost + temp.cost;
			}
			else if(w2[temp.n] == -1 || w2[temp.n] > node.cost + temp.cost)
			{
				if(w[temp.n] != node.cost + temp.cost)
					q.push(Node(temp.n, node.cost + temp.cost));
			}
		}
		if(!back[node.n])
		{
			q.push(Node(node.n, w[node.n] + mn[node.n]));
			back[node.n] = true;
		}
	}
	
	return w2[end];
}


void AFnaN()
{
  ll r;
  cin>>n>>r;
  init();
  while(r--)
  {
    ll x,y,z;
    cin>>x>>y>>z;
    adj[x].push_back(Node(y, z));
    adj[y].push_back(Node(x, z));	
		
  }
  cout<< dijkstra(1, n)<<endl;
 
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin >> t;
    c = 1;
    while(t--)
    {
       cout<<"Case "<<c++<<": ";
       AFnaN();
       
    }

    exit(0);
}
//Solution submitted by: AFnaN, SUST CSE19