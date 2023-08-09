#include<bits/stdc++.h>

using namespace std;

int a, b;
int x[100010], y[100010];

int main(){
	cin >> a >> b;
	
	for(int i=0; i<a; i++)
		cin >> x[i];
	for(int i=0; i<b; i++)
		cin >> y[i];
		
	int tam_sub = 0;
	for(int i=0; i<a; i++){
		if (x[i] == y[tam_sub]){
			tam_sub++;
		}
		if(tam_sub == b){
			break;
		}
	}
	
	if(tam_sub == b){
		cout << "S\n";
	}
	else{
		cout << "N\n";
	}
	
		
}
