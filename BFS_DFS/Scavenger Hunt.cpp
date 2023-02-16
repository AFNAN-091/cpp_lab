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


int indeg[500];

void init(ll n)
{
    for(int i=0; i<=n; i++)
    {
        indeg[i] = 0;
    }
}

void AFnaN()
{
  ll n;
  cin>>n;
  //cout<<n<<endl;
  init(n);
  map<string,int>mp;
  map<int,string>mp1;
  int cnt = 1;
  vector<int>adj[500];
  string s,s1;
  for(int i=0; i<n-1; i++)
  {
    cin>>s>>s1;
   // cout<<s<<" "<<s1<<endl;
    if(!mp[s])
    {
        mp[s] = cnt;
        mp1[cnt] = s;
        cnt++;
    }
    if(!mp[s1]){
        mp[s1] = cnt;
        mp1[cnt] = s1;
        cnt++;
    }

    int u = mp[s];
    int v = mp[s1];
    //cout<<u<<" "<<v<<endl;
    adj[u].push_back(v);
    indeg[v]++;
 //   cout<<v<<endl;

  }


  queue<int>q;
  vector<int>ans;

  for(int i=1; i<=n; i++)
  {
    if(indeg[i]==0) q.push(i);
  }
  //cout<<q.size();
  if(q.empty()) return;

  while(!q.empty())
  {
    int u = q.front();
    q.pop();
    //cout<<u<<endl;
    ans.push_back(u);
    for(int i=0; i<adj[u].size(); i++)
    {
        int node = adj[u][i];
        if(-- indeg[node]==0) q.push(node);
    }
  }


  for(auto it: ans)
  {
    cout<<mp1[it]<<endl;
  }

  cout<<endl;


}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin >> t;
    a = 1;
    while(t--)
    {
       cout<<"Scenario #"<<a++<<":"<<endl;

       AFnaN();
       
    }

    exit(0);
}