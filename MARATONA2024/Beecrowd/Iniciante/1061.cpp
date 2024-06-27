#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);\
    cin.tie(0); cout.tie(0);

#define endl "\n";

using namespace std;

int main(){ _
   string ig;

   int inicio_day, fim_day, h_inicio, h_fim, m_inicio, m_fim, s_inicio, s_fim;

   cin>>ig>>inicio_day;
   cin>>h_inicio>>ig>>m_inicio>>ig>>s_inicio;
   cin>>ig>>fim_day;
   cin>>h_fim>>ig>>m_fim>>ig>>s_fim;

    int inicio_s_t = (h_inicio*3600) + (m_inicio * 60) + (s_inicio) + ((inicio_day-1) * 86400);
    int fim_s_t = (h_fim*3600) + (m_fim * 60) + (s_fim) + ((fim_day -1) * 86400);

    int duracao = fim_s_t - inicio_s_t;

    int day = duracao/86400;
    duracao %= 86400;
    int h = duracao/3600;
    duracao %= 3600;
    int min = duracao/60;
    int seg = duracao %= 60;;

    cout<<day<<" dia(s)"<<endl;
    cout<<h<<" hora(s)"<<endl;
    cout<<min<<" minuto(s)"<<endl;
    cout<<seg<<" segundo(s)"<<endl;

   return 0;
}