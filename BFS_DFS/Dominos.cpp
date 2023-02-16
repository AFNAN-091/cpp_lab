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
#define mx 10005
typedef long long ll;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

vector<ll>adj[mx];
bool vis[mx];
int indeg[mx];
int ans=0;
void bfs(int u)
{
    if(!vis[u]) ans++;
    vis[u] = 1;
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int y = 0; y < adj[x].size(); y++)
        {
            int node = adj[x][y];
            if (!vis[node])
            {
                vis[node] = 1;
                ans++;
                q.push(node);
            }
        }
    }
}

void init()
{
    for (int i = 0; i < mx; i++)
    {
        vis[i] = 0;
        adj[i].clear();
        ans=0;
    }
}

int main()
{
    int t,n,m,l,x,y;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
		init();
        cin>>n>>m>>l;
        for (int i = 0; i < m; i++)
        {
            cin >> x >> y;
            adj[x].push_back(y);
        }
        
        for(int i=0;i<l;i++){
            cin>>x;
            bfs(x);
        }
        cout << ans << endl;
    }

    exit(0);
}