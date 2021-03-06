#include<stdio.h>
#include<stdlib.h>

int main () {

  int resposta, rI;
  double salario1, salario2, salario3;
  double salarioMedio;
  double valorInvariante = 1911.84;
  double valorParcela;
  double resto;
  
  printf("Antes da data de demissão, você recebeu o salário por três ou dois meses? \n1) Três meses \n2) Dois meses");
  scanf("%d", &rI);

  if (rI == 1) {
    printf("Digite o primeiro salario: ");
    scanf("%lf", &salario1);
    printf("\nDigite o segundo salario: ");
    scanf("%lf", &salario2);
    printf("\nDigite o terceiro salario: ");
    scanf("%lf", &salario3);

    salarioMedio = ((salario1 + salario2 + salario3)/3);
  }else {
    printf("Digite o primeiro salario: ");
    scanf("%lf", &salario1);
    printf("\nDigite o segundo salario: ");
    scanf("%lf", &salario2);

    salarioMedio = ((salario1 + salario2)/2);
  }

  if (salarioMedio >= 2811.60) {
    printf("valor parcela: %f", valorInvariante);
  } else {
    if (salarioMedio > 1100 && salarioMedio < 1686.79) {
      valorParcela = salarioMedio * 0.8;
      printf("valor parcela: %f", valorParcela);
    } else if (salarioMedio > 1686.79) {
      valorParcela = salarioMedio * 0.5;
      printf("valor parcela: %f", valorParcela);
    } else {
      resto = 1100 - salarioMedio;
      valorParcela = salarioMedio + resto;
      printf("valor parcela: %f", valorParcela);
    }
  }

  return 0;
}
