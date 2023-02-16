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
#define clr(a) memset(a, 0, sizeof a)
#define reset(a) memset(a, -1, sizeof a)
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz 50000
#define intmax INT_MAX
#define intmin INT_MIN
typedef long long ll;
typedef vector<long long> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/

bool open(char c)
{
    if(c=='(' || c=='<' || c=='{' || c=='[')
        return true;
    return false;
}
bool close(char c)
{
    if(c==')' || c=='>' || c=='}' || c==']')
        return true;
    return false;
}

int main()
{   
    FAsT  
    ll a, b, c, d, e, f, g, h, k, len, n, m, p, q, r, t, x, y, z;

    
    stack<int>st;
    string s;
    while(getline(cin,s))
    {
        c=0;
        while(!st.empty())
            st.pop();
        int i;
        int len=s.size();
        for(i=0; i<len; i++)
        {
            c++;
            if(open(s[i]))
            {
                if(s[i]=='(' && s[i+1]=='*')
                {
                    st.push('*');
                    i++;
                }
                else st.push(s[i]);
            }
           else  if(close(s[i]) || (s[i]=='*' && s[i+1]==')'))
            {
                if(st.empty())
                    break;
                if(s[i]=='*')
                {
                    if(st.top()!='*')
                        break;
                    st.pop();
                    i++;
                }
                else if(s[i]==')')
                {
                    if(st.top()!='(')
                        break;
                    st.pop();
                }
                else if(s[i]=='}')
                {
                    if(st.top()!='{')
                        break;
                    st.pop();
                }
                else if(s[i]==']')
                {
                    if(st.top()!='[')
                        break;
                    st.pop();
                }
                else if(s[i]=='>')
                {
                    if(st.top()!='<')
                        break;
                    st.pop();
                }
            }
        }
        if(i<len || !st.empty())
        {
            if(i==len && !st.empty())
                c++;

            cout<<"NO "<<c<<endl;
        }
        else cout<<"YES"<<endl;

    }

    exit(0);
}
//Solution submitted by: AFnaN, SUST CSE19