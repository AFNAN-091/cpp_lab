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
#define sz 50000
#define intmax INT_MAX
#define intmin INT_MIN
typedef long long ll;
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

void AFnaN()
{
  ll n;
  cin>>n;
  vector<ll>v(n);

  for(auto &it: v)
  {
    cin>>it;
  }
  ll mx = 0;
  for(int i=0; i<n; i++)
  {
    ll cnt = 0;
    ll l, r;
    l = i;
    r = i+1;
    while(l>=0 and v[l]>=v[i])
    {
      l--;
      cnt++;
    }
    while(r<n and v[r]>=v[i])
    {
      cnt++;
      r++;
    }
    ll area = cnt*v[i];
    mx = max(mx,area);
  }
  
  f(mx);

}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin >> t;
    a = 1;
    while(t--)
    {
       cout<<"Case "<<a++<<": ";
       AFnaN();
       
    }

    exit(0);
}