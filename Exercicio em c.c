#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



char nome[40];
int alg, num, idade, ant, suc, num2, resto1, resto2, resto3, dia, op2, opc, opp, opi, operador;


int main () {
		setlocale (LC_ALL, "Portuguese_Brazil");
	
			printf ("Informe seu nome.\n");
		fgets (nome, sizeof(nome), stdin);
		do {
	printf ("%s, Escolha o algorítmo que você quer! 1 para idade, 2 para ant e suc, 3 para multiplos e 4 para temperatura\n", nome);
	scanf ("%d", &alg);
	switch (alg)
	{
	case 1:
		do {
        printf ("%s, Informe sua idade.\n", nome);
        scanf ("%d", &idade);
	    idade = idade * 365;
        printf ("%d\n", idade);
        if (idade >=  6570) {printf ("Você é maior de idade!\n");}
     	else {printf ("Você é menor de idade.\n");};
     	printf ("Quer testar outra idade? 1 para sim, 2 para não.\n"); 
        scanf ("%d", &opi);}while (opi == 1);
     	printf ("Caso quiser testar outro algorítmo, aperte 1, se não, 2.\n");
        scanf ("%d", &operador);
        break;
    case 2:
    	do{
    	printf ("%s, Informe seu número.\n", nome);
    	scanf ("%d", &num);
    	ant = (num - 1);
    	suc = (num + 1);
    	printf ("O antecessor e o sucessor de %d são, respectivamente, %d e %d\n", num, ant, suc);
    	printf ("Quer testar outro número? 1 para sim, 2 para não.\n"); 
        scanf ("%d", &opc);}while (opc == 1);
    	printf ("Caso quiser testar outro algorítmo, aperte 1, se não, 2.\n");
        scanf ("%d", &operador);
    	break;
    case 3:
    	do {printf ("informe seu número\n");
    	scanf ("%d", &num2);
    	resto1 = (num2 % 2);
    	resto2 = (num2%3);
    	resto3 = (num2%5);
    	if (resto1 == 0) {printf ("Seu número é múltiplo de 2\n");};
    	if (resto2 == 0) {printf ("Seu número é múltiplo de 3\n");};
    	if (resto3 == 0) {printf ("Seu número é múltiplo de 5\n");};
    	printf ("Quer testar outro número? 1 para sim, 2 para não.\n"); 
        scanf ("%d", &opp);}while (opp == 1);
    	printf ("Caso quiser testar outro algorítmo, aperte 1, se não, 2.\n");
        scanf ("%d", &operador);
    	break;
    case 4:
    	do {
    	 printf ("Informe se o seu dia está (1) nublado, (2)ensolarado ou (3)chuvoso.\n");
    	 scanf ("%d", &dia);
    	 if (dia == 1) {(op2 = 1);
		 printf ("Temperatura agradável.\n");
         printf ("Caso quiser testar outro algorítmo, aperte 1, se não, 2.\n");
         scanf ("%d", &operador);}
    		else
			if (dia == 2) { (op2 = 1);
			printf ("Temperatura quente.\n");
	        printf ("Caso quiser testar outro algorítmo, aperte 1, se não, 2.\n");
            scanf ("%d", &operador);}
				else 
					if (dia == 3) { (op2 = 1);
					printf ("Temperatura fria.\n"); 
			       	printf ("Caso quiser testar outro algorítmo, aperte 1, se não, 2.\n");
                    scanf ("%d", &operador);}	
						else {printf ("Não foi possível compreender. Por favor, escolha de novo.\n");
						(op2 = 2);}
 	     }while (op2 == 2);
    		 break;
    default: 
		printf ("Inválido. Caso quiser tentar novamete a escolha aperte 1, se não, 2.\n");
            scanf ("%d", &operador);}	 

		
	
		
}while (operador == 1);

}