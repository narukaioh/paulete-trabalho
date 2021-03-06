#include<stdio.h>
#include<stdlib.h>

int main () {
  int temDireitoAoSeguroDesemprego = 1;

  if (temDireitoAoSeguroDesemprego == 1) {
    int resposta, rI, parcelas = 1;
    double salario1, salario2, salario3;
    double salarioMedio;
    double valorInvariante = 1911.84;
    double valorParcela;
    double resto;

    int vinculoEmpregaticio;
    // definir quantidade de parcelas
    printf("Quantos meses voce trabalhou? ");
    scanf("%d", &vinculoEmpregaticio);

    if(vinculoEmpregaticio >= 6 && vinculoEmpregaticio<= 11) {
      parcelas = 3;
    } else if (vinculoEmpregaticio >= 12 && vinculoEmpregaticio <= 23){
      parcelas = 4;
    } else {
      parcelas = 5;
    }

    printf("Antes da data de demissão, você recebeu o salário por três ou dois meses? \n1) Três meses \n2) Dois meses\n");
    scanf("%d", &rI);

    if (rI == 1) {
      printf("\nDigite o primeiro salario: ");
      scanf("%lf", &salario1);
      printf("Digite o segundo salario: ");
      scanf("%lf", &salario2);
      printf("Digite o terceiro salario: ");
      scanf("%lf", &salario3);

      salarioMedio = ((salario1 + salario2 + salario3)/3);
    }else {
      printf("\nDigite o primeiro salario: ");
      scanf("%lf", &salario1);
      printf("Digite o segundo salario: ");
      scanf("%lf", &salario2);

      salarioMedio = ((salario1 + salario2)/2);
    }

    if (salarioMedio >= 2811.60) {
      printf("\nparcelas: %d x %lf", parcelas, valorInvariante);
    } else {
      if (salarioMedio > 1100 && salarioMedio < 1686.79) {
        valorParcela = salarioMedio * 0.8;
      } else if (salarioMedio > 1686.79) {
        valorParcela = salarioMedio * 0.5;
      } else {
        resto = 1100 - salarioMedio;
        valorParcela = salarioMedio + resto;
      }
      printf("\nparcelas: %d x %lf\n\n", parcelas, valorParcela);
    }

  }

  return 0;
}
