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

void AFnaN()
{
  
}

string Map[50];
int M, N;
char land;

int dfs(int A, int B) {
	queue< pair<int, int> > q;
	q.push({A, B});
	int V = 0;
	while (!q.empty()) {
		pair<int, int> P = q.front();
		q.pop();
		int I = P.first;
		int J = P.second;
		if (I < 0 || I >= M)  continue;
		if (J < 0 || J >= N)  continue;
		if (Map[I][J] != land)continue;
	
		Map[I][J] = ' ';
		++V;
		for (int i = 0; i < 4; i++)
			q.push({I + rr[i], (J + cc[i] + N) % N});
	}
	return V;
}

int main() {
	
	while (cin >> M >> N) {
		string str;
		for (int i = 0; i < M; i++)
			cin >> Map[i];

		int A, B, Max = 0;
		cin >> A >> B;
		
		land = Map[A][B];
		dfs(A, B);
		
		for (int i = 0; i < M; i++)
			for (int j = 0; j < N; j++)
					Max = max(Max, dfs(i, j));

		cout << Max << endl;
	}
	exit(0);
}
