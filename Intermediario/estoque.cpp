#include <bits/stdc++.h>

using namespace std;
int n,m;
	
int M[510][510];

int main(){
	cin >> n >> m;
	
	for(int i=1; i<=n; i++)
    for(int j=1; j<=m; j++)
        cin >> M[i][j];

			
			
	int x, p, y;
	cin >> p;
	int cnt = 0;
		
	while(p--){
		cin >> x >> y;
		
		if(M[x][y] > 0){
			cnt++;
			M[x][y]--;
		}
	}
	
 	cout << cnt << "\n";
	
}
