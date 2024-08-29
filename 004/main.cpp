#include <iostream>

using namespace std;

int main (){
  //tipos de variáveis

  int numeroInteiro = 10;
  float numeroDecimal = 10.5;
  double numeroDecimalGrande = 10.5;

  //Casting em variáveis, em programação, refere-se à conversão explícita de um tipo de dado para outro. Isso é especialmente comum em linguagens como Java, onde variáveis têm tipos estritos (tipagem estática).

  double numeroDecimalGrande2 = 10.5;
  int numeroInteiro2 = (int) numeroDecimalGrande2;

  cout << numeroInteiro2 << endl;

  //Entrada de dados

  cout << "Digite um número: " << endl; 
  cin >> numeroInteiro;

  cout << "O número digitado foi: " << numeroInteiro << endl;

  return 0;


//Exercício 

// 1. Crie um programa que leia dois números inteiros e imprima a soma deles.

int num1;
int num2;

cout << "Digite o primeiro número: " << endl;
cin >> num1;

cout << "Digite o segundo número: " << endl;
cin >> num2;

int resultado = num1 + num2;

cout << "A soma dos números é: " << resultado << endl;

return 0;

}