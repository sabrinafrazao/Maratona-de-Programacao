#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl "\n";

using namespace std;

int main(){ _
    int f, s,g, u, d, andar;

    cin>>f>>s>>g>>u>>d;

    vector<int>visitar(f+1, -1);
    queue<int>fila;

    fila.push(s);
    visitar[s] = 0;

    while(!fila.empty()){
        andar = fila.front();
        fila.pop();

        if(andar == g){
            cout<<visitar[andar]<<endl;

            return 0;
        }

        int subir = andar + u;
        int descer = andar - d;

        if(subir <= f && visitar[subir] == -1){
            fila.push(subir);
            visitar[subir] = visitar[andar] + 1;
        }

        if(descer>=1 && visitar[descer] == -1){
            fila.push(descer);
            visitar[descer] = visitar[andar] +1;

        }
    }

    cout<<"use the stairs"<<endl;

    return 0;

}