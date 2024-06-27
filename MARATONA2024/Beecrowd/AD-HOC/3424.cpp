#include<bits/stdc++.h> // Biblioteca que inclui várias bibliotecas padrão do C++
#define endl "\n"; // Define "endl" como um caractere de nova linha para facilitar a leitura

using namespace std; // Usa o namespace std para evitar escrever std:: antes de cada comando

int main(){
  long long int n; // Declaração de uma variável de tipo inteiro longo para armazenar o tamanho da string
  int cnt, tam; // Declaração de variáveis inteiras para contagem
  string m; // Declaração de uma string

  cin>>n; // Lê o tamanho da string
  cin>>m; // Lê a string

  cnt = 0; // Inicializa a contagem de sequências de 'a' consecutivos como 0
  tam = 1; // Inicializa o tamanho da sequência atual como 1
  for(int i = 0; i < n; i++){ // Loop através de cada caractere da string
    if(m[i] == m[i-1]){ // Se o caractere atual for igual ao anterior
      tam++; // Incrementa o tamanho da sequência
    } else { // Se o caractere atual for diferente do anterior
      if(tam > 1 && m[i-1] == 'a'){ // Se a sequência anterior tinha mais de um 'a' consecutivo
        cnt += tam; // Adiciona o tamanho da sequência à contagem total
      }
      tam = 1; // Reinicia o tamanho da sequência para 1
    }
  }

  // Verifica a última sequência
  if(tam > 1 && m[n - 1] == 'a'){ // Se a última sequência tiver mais de um 'a' consecutivo
    cnt += tam; // Adiciona o tamanho da sequência à contagem total
  }

  cout<<cnt<<endl; // Imprime a contagem total

  return 0; // Finaliza o programa
}
