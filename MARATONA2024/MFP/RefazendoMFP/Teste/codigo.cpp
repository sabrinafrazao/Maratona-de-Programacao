#include<bits/stdc++.h>

#define _ ios_base::sync_with_stdio(false);\
    cin.tie(NULL); cout.tie(NULL);

#define endl '\n';

using namespace std;

int main(){
    int bits[8];

    for(int i=0; i<8; i++) {

        cin>> bits[i];
    }

    int cont1 = 0;

    for(int i=0; i < 7; i++){
        
        if(bits[i] == 1){
            cont1++;
        }
    }

    if(cont1 % 2 == 0 && bits[7] == 1){

        cout << "S" << endl;

    } else{
        cout << "N?" << endl;
    }

    return 0; 

}