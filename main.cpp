#include <iostream>
#include <string>
using namespace std;

int main() {
  string entrada, auxiliar;

  cout << "texto: ";
  cin >> entrada;
int cont = 0;
  for (int i =0; i < 20; i++) {
    switch(entrada[i]){
     
          case '0': 
          auxiliar[cont] = 'Z';
          cont++;
          
          auxiliar[cont] = 'A';
          cont++;
                    break;
          case '1': 
          auxiliar[cont] = 'Z';
          cont++;
          auxiliar[cont] = 'B';
          cont++;
                    break;
          case '2': 
          auxiliar[cont] = 'Z';
          cont++;
          auxiliar[cont] = 'C';
          cont++;
                    break;
          case '3': 
          auxiliar[cont] = 'Z';
          cont++;
          auxiliar[cont] = 'D';
          cont++;
                    break;
          case '4': 
          auxiliar[cont] = 'Z';
          cont++;
          auxiliar[cont] = 'E';
          cont++;
                    break;
          case '5': 
          auxiliar[cont] = 'Z';
          cont++;
          auxiliar[cont] = 'F';
          cont++;
                    break;
          case '6': 
          auxiliar[cont] = 'Z';
          cont++;
          auxiliar[cont] = 'G';
          cont++;
                    break;
          case '7': 
          auxiliar[cont] = 'Z';
          cont++;
          auxiliar[cont] = 'H';
          cont++;
                    break;
          case '8': 
          auxiliar[cont] = 'Z';
          cont++;
          auxiliar[cont] = 'I';
          cont++;
                    break;
          case '9': 
          auxiliar[cont] = 'Z';
          cont++;
          auxiliar[cont] = 'J';
          cont++;
                    break;  
          
          case 'Z':
          auxiliar[cont] = 'Z';
          cont++;
          auxiliar[cont] = 'Z';
          cont++;
          break;  

      /*    default : 
            if (entrada[i] != 'Z') {
              auxiliar[cont] = entrada[i] ;
              cont++;
            } 
            break;      */                                              
        }
  }
  
  
}