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
  
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    in(n);
    in(m);

    //cout<<n<<" "<<m<<endl;
    int arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int histo[n][m];
    for(int i=0; i<m; i++)
    {   
        histo[0][i] = arr[0][i];
    }

    for(int i=1; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr[i][j])
            {
                histo[i][j] = histo[i-1][j] + 1;
            }
            else{
                histo[i][j] = 0;
            }
        }
    }

    ll mx = 0;

    for(int i=0; i<m; i++)
    {
        ll area = 0;
        for(int j=0; j<m; j++)
        {
            ll cnt = 0;
            ll l, r;
            l = j;
            r = j+1;
            while(l>=0 and histo[i][l]>=histo[i][j])
            {
                l--;
                cnt++;
            }
            while(r<m and histo[i][r]>=histo[i][j])
            {
                cnt++;
                r++;
            }
            ll area = cnt*histo[i][j];
            mx = max(mx,area);
         }
    }

    cout<<mx<<endl;

    exit(0);
}