#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d, media; //declara��es de vari�veis do tipo inteiro
	
	printf("Digite a primeira nota: ");
	scanf("%d", &a);
	
	printf("Digite a segunda nota: ");
	scanf("%d", &b);
	
	printf("Digite a terceira nota: ");
	scanf("%d", &c);
	
	printf("Digite a quarta nota: ");
	scanf("%d", &d);
	
	media = (a + b + c + d) / 4; //C�lculo da soma + a media das notas do aluno
	
	printf("O valor da media eh = %d\n", media); // Mostra a nota do aluno
	
	if(media<=6) // se o valor da Nota for menor ou igual a 6 � aluno Reprovado
	
		{
			printf("ALUNO REPROVADO! SUA NOTA EH = %d\n", media);
		}
	
	else // Se n�o, o Aluno � Aprovado
		{
			printf("ALUNO APROVADO! SUA NOTA EH = %d\n", media);
		}
	
	system("pause");
	return 0;
	
}
