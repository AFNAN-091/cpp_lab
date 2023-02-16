#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MX 105
int edge[MX][MX];

void AFnaN()
{
    
}
int main()
{
    int a,b,c;
    c = 1;
    while(scanf("%d%d",&a,&b)==2 and a and b)
    {
        for(int i=0; i<MX; i++)
        {
            for(int j=0; j<MX; j++)
            {
                edge[i][j] = INF;
            }
        }
        edge[a][b] = 1;

        while(scanf("%d%d",&a,&b)==2 and a and b)
        {
            edge[a][b] = 1;
        }

        for(int k=0; k<MX; k++)
        {
            for(int i=0; i<MX; i++)
            {
                for(int j=0; j<MX; j++)
                {
                    edge[i][j] = min(edge[i][j],edge[i][k]+edge[k][j]);;;;
                }
            }
        }
        int count , sum ;
        count = sum = 0;

        for(int i=0; i<MX; i++)
        {
            for(int j=0; j<MX; j++)
            {
                if(edge[i][j]!=INF and i!=j)
                {
                    sum+=edge[i][j];
                    count++;
                }
            }
        }
        printf("Case %d: average length between pages = %.3lf clicks\n", c++, (double)sum / count);
        
    }


    exit(0);
}