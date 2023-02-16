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


priority_queue<ll>mx;

priority_queue <ll, vector<ll>, greater<ll>> mn;
void add(ll n)
{
    if( mx.size() && n >= mx.top())
        mn.push(n);
    else
        mx.push(n);
    ll a = mx.size();
    ll b = mn.size();
    if(abs(a - b) > 1)
    {
        if(mx.size() > mn.size())
        {
            ll temp = mx.top();
            mx.pop();
            mn.push(temp);
        }
        else
        {
            ll temp = mn.top();
            mn.pop();
            mx.push(temp);
        }
    }
}

void median()
{
    ll len = mn.size() + mx.size();
    double ans = 0;
    if(len%2 == 1)
    {
        if(mx.size() > mn.size())
            ans = mx.top();
        else
            ans = mn.top();
    }
    else
    {
        if(!mx.empty())
            ans += mx.top();
        if(!mn.empty())
            ans += mn.top();
        ans/=2.0;
    }

    //cout<<ans<<endl;
    
    printf("%0.1lf\n",ans);
}





int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    cin>>n;

    while(n--)
    {
        cin>>x;
        add(x);
        median();
    }

    exit(0);
}