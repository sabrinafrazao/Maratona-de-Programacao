#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define endl "\n";

using namespace std;

int main(){ _

    float n1, n2, nota;
    bool v1, v2;
    int opcao = 1;


    while(opcao == 1){
        v1 = v2 = false;

        while (!v1  || !v2)
        {
            cin>>nota;

            if(nota<0 || nota>10){
                cout<<"nota invalida"<<endl;
            }else{

                if(!v1){
                    n1 = nota;
                    v1 = true;
                } else if(!v2){
                    n2 = nota;
                    v2 = true;
                }

                }
        }

        float m = ( n1 + n2)/2;

        cout<<"media = "<<fixed<<setprecision(2)<<m<<endl; 

        opcao = 0;
        while(opcao!=1 && opcao!=2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> opcao;
        }
    }
        

    return 0;

}