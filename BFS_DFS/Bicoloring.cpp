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
typedef vector<int> vi;
int rr[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int cc[] = {0, 0, -1, 1, -1, 1, -1, 1};
/*--------------------------------------------------------------------*/



int main() {
	int V, E, u, v;
	vector<vi> AdjList;

	while (scanf("%d", &V), V) {
		AdjList.assign(V, vi());
		scanf("%d", &E);

		for (int i = 0; i < E; i++) {
			scanf("%d %d", &u, &v);
			AdjList[u].push_back(v);
			AdjList[v].push_back(u);
		}

		queue<int> q;
		q.push(0);
		vi color(V, 1e9);
   // cout<<color[0]<<endl;
		color[0] = 0;
		bool isBipartite = true;
		while (!q.empty() && isBipartite) {
			int u = q.front();
			q.pop();
			for (int j = 0; j < (int) AdjList[u].size(); j++) {
				int v = AdjList[u][j];
				if (color[v] == 1e9) {
					color[v] = 1 - color[u];
					q.push(v);
				} else if (color[v] == color[u]) {
					isBipartite = false;
					break;
				}
			}
		}

		if (isBipartite)
			printf("BICOLORABLE.\n");
		else
			printf("NOT BICOLORABLE.\n");
	}

	return 0;
}