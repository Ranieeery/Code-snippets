//1. Faça um programa em C no qual o usuário digitará os 
//valores inicial (vi) e final (vf), após isso, mostrar 
//na tela todos os números ímpares contidos neste intervalo 
//e ao final a soma destes números. Supondo que o valor 
//inicial digitado será sempre menor que o valor final, 
//o laço de repetição, para este programa será crescente, 
//utilize o comando WHILE.

#include <stdio.h>

int main() {
  int controle = 0, vi, vf, soma;
  
  while (1) {
    soma = 0;
    printf("Digite o valor inicial: ");
    scanf("%d", &vi);
    printf("Digite o valor final: ");
    scanf("%d", &vf);
    if (vi > vf || controle > vi){
      printf("Intervalo inválido");
      break;
    } 
    while (vi <= vf) {      // Percorre os números do intervalo
      if (vi % 2 == 1) {    // % calcula resto apenas para int
        printf("%d\n", vi); // \n = quebra de linha
        soma += vi;         // Somatório dos ímpares
      }
      vi++;
    }
    printf("A soma é igual a: %d\n", soma);
    controle = vf;
  }
}
