#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int chute = 0;
    int chances = 1;

	srand(time(NULL));
	int numeroSecreto = rand() % 31;

	int numeroLimite;
    numeroLimite = 30;

	double pontuacaomax = 1000.0;
	double pontos = pontuacaomax;

	char mensagempontos[50];

	int numeroDeTentativas;

	int nivel;
	printf("Qual nivel de dificuldade voce deseja jogar?\n ");
	printf("(1) Facil (2) Medio (3) Dificil\n\n ");
	printf("Escolha: ");
	scanf("%d", &nivel);

	switch (nivel) {
		case 1:
			numeroDeTentativas = 20;
			break;
		case 2:
			numeroDeTentativas = 15;
			break;
		case 3:
			numeroDeTentativas = 10;
			break;
		default:
			numeroDeTentativas = 5;
	}

    for (int i = 0; i < numeroDeTentativas; i++) {

		system("cls");

        printf("===========JOGO DA ADIVINHACAO===========\n");
        printf("======Bem vindo ao jogo de adivinhacao===\n");
        printf("=========================================\n");
		printf("Tentativa %d \n", chances);

        printf("Digite um numero de 0 ate %d para descobrir o numero secreto: \n",numeroLimite);
        scanf("%d", &chute);

		int numSecretoMenor = (numeroSecreto < chute);
		int numSecretoMaior = (numeroSecreto > chute);

		if (chute < 0) {
			printf("voce nao pode chutar um numero secreto negativo!\n");
			printf("O numero secreto eh menor que o seu chute %d \n", chute);

			double regradepontuacao = abs(chute - numeroSecreto) / 2.0;
			pontos -= regradepontuacao;
			sprintf(mensagempontos, "Voce acumulou %.2f pontos\n", pontos);
			printf("%s", mensagempontos);

			printf("Nao desanime, tente novamente\n");
			system("pause");
			continue;
		}

		double regradepontuacao = abs(chute - numeroSecreto) / 2.0;
		pontos -= regradepontuacao;
		sprintf(mensagempontos, "Voce acumulou %.2f pontos\n", pontos);

		if (chute == numeroSecreto) {
			break;
		}

		if (numSecretoMenor) {
			printf("O numero secreto eh menor que o seu chute %d \n", chute);
			printf("%s", mensagempontos);
			printf("Nao desanime, tente novamente\n");
			system("pause");
		} else if (numSecretoMaior) {
			printf("O numero secreto eh maior que o seu chute %d \n", chute);
			printf("%s", mensagempontos);
			printf("Nao desanime, tente novamente\n");
			system("pause");
		}

		chances++;
    }

	int ganhou = numeroSecreto == chute;
	int perdeu = numeroSecreto != chute;

	printf("Fim do Jogo!");

	if (ganhou) {
		printf("O numero secreto %d eh igual ao seu chute %d \n", numeroSecreto, chute);
		printf("%s\n ", mensagempontos);
		printf("Parabens, voce acertou na sua tentativa de numero %d\n", chances);
		system("pause");
	} else if (perdeu) {
		printf("Voce nao conseguiu acertar o numero secreto que eh igual a %d em %d tentativas", numeroSecreto, chances);
		printf("%s", mensagempontos);
		system("pause");
	}

    return 0;
}