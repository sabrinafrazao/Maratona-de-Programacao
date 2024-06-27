#include<bits/stdc++.h>
#define _ ios_base:: sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define endl "\n";

using namespace std;

int main(){ _

    int a, b;
    int op = 1, contA = 0, contB = 0, empate = 0, grenais=0;


        while (op == 1)
        {
            cin>>a>>b;

            if(a>b){
                contA++;
            }else if(b>a){
                contB++;
            }else{
                empate++;
            }

            grenais++;

            cout<<"Novo grenal (1-sim 2-nao)"<<endl;
            cin>>op;
        }

        cout<<grenais<<" grenais"<<endl;
        cout<<"Inter:"<<contA<<endl;
        cout<<"Gremio:"<<contB<<endl;
        cout<<"Empates:"<<empate<<endl;

        if(contA>contB){
            cout<<"Inter venceu mais"<<endl;
        }else if(contB>contA){
            cout<<"Gremio venceu mais"<<endl;
        }else{
            cout<<"Nao houve vencedor"<<endl;
        }
        
    return 0;
}