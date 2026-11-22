#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor1 = 0, valor2 = 0, resultado = 0;
    char conta;

    printf("Digite o primeiro valor:\n ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor:\n ");
    scanf("%d", &valor2);

    printf("digite a conta\n");
    scanf(" %c", &conta);


    if(conta == '-'){

        resultado = valor1 - valor2;
        printf("resultado igual %d\n",resultado);
    }

    else if(conta == '+'){

        resultado = valor1 + valor2;
        printf("resultado igual %d",resultado
    }

    else if(conta == '*'){

        resultado = valor1 * valor2;
        printf("resultado igual %d\n",resultado);
    }
    else if(conta == '/'){

        resultado = valor1 / valor2;
        printf("resultado igual %d\n",resultado);
    }
    return 0;
}


