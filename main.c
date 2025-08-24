#include <stdio.h>

int main()
{
    printf("calculadora \n");
    int n1 = 0;
    int n2 = 0;
    int total = 0;
    
    printf("primeiro número: ");
    scanf("%d", &n1);
    printf("segundo número: ");
    scanf("%d", &n2);
    
    total = n1 - n2;
    printf("subtração: %d\n", total);
   
    total = n1 + n2;
    printf("soma: %d\n", total);

    total = n1 * n2;
    printf("multiplicação: %d\n",total);
    
    if(n2 == 0)
    
    printf(" dividsão: impossível \n" , total);
    
    else
    {
    total = n1 / n2;
    printf("divisão(quociente) %d\n",total);
    total = n1 % n2 ;
    printf("divisão(resto) %d\n", total);
    }
    return 0;
}
