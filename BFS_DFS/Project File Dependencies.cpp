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
#define sz 5000
typedef long long ll;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

vector<int>adj[sz];
int indeg[sz];

vector<int> toposort(ll n)
{
    
    priority_queue<int,vector<int>,greater<int> >q;
    vector<int>res;
    for(int i=1; i<=n; i++)
    {
        
        if(indeg[i]==0) q.push(i);
    }
    if(q.empty()) return res;
    
    while(!q.empty())
    {
        int u = q.top();
        q.pop();
        res.push_back(u);
        for(int i=0; i<adj[u].size(); i++)
        {
            
            int node = adj[u][i];
            if(--indeg[node]==0) 
            {
                //cout<<node<<" ";
                q.push(node);
            }
        }
    }

    return res;
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;
    int u,v;
    cin>>n>>m;
    while(m--)
    {
        cin>>u;
        cin>>k;
        indeg[u]+=k;
        while(k--)//           * * ببسم الله الرحمن الرحيم    * *
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
#define sz 5000
typedef long long ll;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

vector<int>adj[sz];
int indeg[sz];

vector<int> toposort(ll n)
{
    
    priority_queue<int,vector<int>,greater<int> >q;
    vector<int>res;
    for(int i=1; i<=n; i++)
    {
        
        if(indeg[i]==0) q.push(i);
    }
    if(q.empty()) return res;
    
    while(!q.empty())
    {
        int u = q.top();
        q.pop();
        res.push_back(u);
        for(int i=0; i<adj[u].size(); i++)
        {
            
            int node = adj[u][i];
            if(--indeg[node]==0) 
            {
                //cout<<node<<" ";
                q.push(node);
            }
        }
    }

    return res;
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;
    int u,v;
    cin>>n>>m;
    while(m--)
    {
        cin>>u;
        cin>>k;
        indeg[u]+=k;
        while(k--)
        {
            cin>>v;
            adj[v].push_back(u);            
        }
    }

    

   vector<int>ans =  toposort(n);

   for(auto it: ans)
   {
        cout<<it<<" ";
   }

   cout<<endl;

    exit(0);
}
        {
            cin>>v;
            adj[v].push_back(u);            
        }
    }

    

   vector<int>ans =  toposort(n);

   for(auto it: ans)
   {
        cout<<it<<" ";
   }

   cout<<endl;

    exit(0);
}