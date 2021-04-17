#include <iostream>
#include <string>
using namespace std;

int main() {
  string opção;
  string entrada, auxiliar;
  int j = 0;
  int soma = 1;
  int cont = 0;

cout << "Digite C(Codificar) ou D(Decodificar): ";
cin >> opção;

if(opção == "C"){

  cout << "Digite um texto: ";
  cin >> entrada;

  if(size(entrada) > 0  &&  size(entrada) < 1000){
  for (int i =0; i < size(entrada); i++) {

    if (entrada[i] == 'Z') {
              auxiliar[cont] = 'Z';
              cont++;
              auxiliar[cont] = 'Z';
              cont++;
    }
              if(entrada[i] == 'A' || entrada[i] == 'B' || entrada[i] == 'C' ||entrada[i] == 'D' ||entrada[i] == 'E' ||entrada[i] == 'F' ||entrada[i] == 'G' ||entrada[i] == 'H' ||entrada[i] == 'I' ||entrada[i] == 'J' ||entrada[i] == 'K' ||entrada[i] == 'L' ||entrada[i] == 'M' ||entrada[i] == 'N' ||entrada[i] == 'O' ||entrada[i] == 'P' ||entrada[i] == 'Q' ||entrada[i] == 'R' ||entrada[i] == 'S' ||entrada[i] == 'T' ||entrada[i] == 'U' ||entrada[i] == 'V' ||entrada[i] == 'W' ||entrada[i] == 'X' ||entrada[i] == 'Y' ) {
                auxiliar[cont] = entrada[i] ;
                cont++;
              }if(entrada[i] == '0'){
                auxiliar[cont] = 'Z';
                cont++;
                auxiliar[cont] = 'A';
                cont++;
              }
              if(entrada[i] == '1'){
                auxiliar[cont] = 'Z';
                cont++;
                auxiliar[cont] = 'B';
                cont++;
              }
              if(entrada[i] == '2'){
                auxiliar[cont] = 'Z';
                cont++;
                auxiliar[cont] = 'C';
                cont++;
              }
              if(entrada[i] == '3'){
                auxiliar[cont] = 'Z';
                cont++;
                auxiliar[cont] = 'D';
                cont++;
              }
              if(entrada[i] == '4'){
                auxiliar[cont] = 'Z';
                cont++;
                auxiliar[cont] = 'E';
                cont++;
              }
              if(entrada[i] == '5'){
                auxiliar[cont] = 'Z';
                cont++;
                auxiliar[cont] = 'F';
                cont++;
              }
              if(entrada[i] == '6'){
                auxiliar[cont] = 'Z';
                cont++;
                auxiliar[cont] = 'G';
                cont++;
              }
              if(entrada[i] == '7'){
                auxiliar[cont] = 'Z';
                cont++;
                auxiliar[cont] = 'H';
                cont++;
              }
              if(entrada[i] == '8'){
                auxiliar[cont] = 'Z';
                cont++;
                auxiliar[cont] = 'I';
                cont++;
              }
              if(entrada[i] == '9'){
                auxiliar[cont] = 'Z';
                cont++;
                auxiliar[cont] = 'J';
                cont++;
              }
                         
}
}else{
  cout<< "texto nao reconhecido";
}
}else{
  if(opção == "D"){

    cout << "Digite um texto: ";
    cin >> entrada;
  
  if(size(entrada) > 0  &&  size(entrada) < 1000){
    

  }else{
    cout << "texto nao reconhecido";
  }

  }else{
    if (opção != "C" || "D"){
        cout << "opção nao existe";
    }
  }
}

for(int i = 0; i < cont; i++){
  cout << auxiliar[i];
}
}