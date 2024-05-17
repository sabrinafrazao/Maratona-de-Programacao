#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);
#define endl "\n";

using namespace std;

int main(){
    int n, pt1, pt2, time, pontos;
    string entrada;

    cin>>n;

    cin.ignore();
    pt1=0, pt2=0;

    for(int i=0; i<n; i++){
        getline(cin, entrada);

        sscanf(entrada.c_str(), "Time %d +%d", &time, &pontos);

        if(time == 1){
            pt1+=pontos;
        }else if(time == 2){
            pt2+=pontos;
        }
    }

    cout<<pt1<<" x "<<pt2<<endl;

    return 0;
}