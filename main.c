#include <stdio.h>

int main(){

  float temperatura, umidade;
  unsigned int estoque, estoqueMinimo=1000;
  printf("Entre com a temperatura: \n");
  scanf("%f, &temperatura");
  printf("Entre com a umidade: \n");
  scanf("%f, &umidade");
  printf("Entre com a estoque: \n");
  sanf("%f, &estoque);

  if(temperatura > 30){
    printf("Temperatura esta alta \n");
  } 
  else
  {
    printf("Temperatura esta alta \n");
  }


  if(umidade > 50){
    printf("umidade elevada \n");
  } 
  else
  {
    printf("Temperatura dentro dos parametros \n");
  }

  if(estoque < estoqueMinimo){
    printf("Estoque abaixo do mínimo \n");
  }
  else
  {
    printf("Estoque Normal. \n);
  }


}
