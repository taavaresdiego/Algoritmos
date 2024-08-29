#include <iostream>

using namespace std;

int main (){

  //custo de viagem 

  int distancia;
  float consumo;
  float preco;

  cout << "Digite a distância da viagem em km: " << endl;
  cin >> distancia;

  cout << "Digite o consumo do veículo em km/l: " << endl;
  cin >> consumo;

  cout << "Digite o preço do combustível por litro: " << endl;
  cin >> preco;

  float custo = (distancia / consumo) * preco;

  cout << "O custo da viagem é: R$ " << custo << endl;

  return 0;
}