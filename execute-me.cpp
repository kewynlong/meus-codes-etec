#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void mostrarAnimacao() {
    printf("Analisando arquivos do usu�rio...\n");
    Sleep(1500);
    printf("Localizando documentos, fotos e arquivos pessoais...\n");
    Sleep(1500);
    printf("Moeda da aposta: TODOS OS DADOS DESTE COMPUTADOR\n");
    Sleep(1500);
    printf("Voc� est� prestes a apostar tudo. Tem certeza?\n");
    Sleep(1000);
}

void forcarDesligamento() {
    FILE *batFile = fopen("formatar_pc.bat", "w");
    if (batFile != NULL) {
        fprintf(batFile, "@echo off\n");
        fprintf(batFile, "echo [ERRO CR�TICO] Sistema corrompido!\n");
        fprintf(batFile, "echo Seus arquivos foram perdidos. Formatando...\n");
        fprintf(batFile, "shutdown /s /t 5 /f\n");  // For�a desligamento em 5 segundos
        fclose(batFile);
        system("formatar_pc.bat");  // Executa o script
    } else {
        printf("Falha ao iniciar a formata��o. Tente novamente.\n");
    }
}

int main() {
    int escolha;
    srand(time(NULL));
    
    printf("=== CASSINO ELETR�NICO DE APOSTAS ===\n");
    printf("Escolha seu jogo (e seu destino):\n");
    printf("1. Roleta da Desgra�a (33%% de chance)\n");
    printf("2. Dados do Inferno (10%% de chance)\n");
    printf("3. Tiro Certeiro (3%% de chance)\n");
    printf("Escolha: ");
    scanf("%d", &escolha);
    
    mostrarAnimacao();
    
    int sorteado = rand() % 100 + 1; // 1-100
    int ganhou = 0;
    
    switch(escolha) {
        case 1:  // 33% de chance
            ganhou = (sorteado <= 33);
            break;
        case 2:  // 10% de chance
            ganhou = (sorteado <= 10);
            break;
        case 3:  // 3% de chance
            ganhou = (sorteado <= 3);
            break;
        default:
            printf("Op��o inv�lida! Perdeu por burrice!\n");
            ganhou = 0;
    }
    
    if (ganhou) {
        printf("\nVoc� venceu... por enquanto.\n");
        printf("Mas a pr�xima vez, n�o ter� sorte.\n");
    } else {
        printf("\nVOC� PERDEU TUDO!\n");
        Sleep(1000);
        printf("Iniciando formata��o do sistema...\n");
        Sleep(2000);
        printf("Apagando pastas pessoais...\n");
        Sleep(1000);
        printf("Corrompendo arquivos do sistema...\n");
        Sleep(1500);
        printf("Seu computador ser� desligado em 5 segundos.\n");
        printf("(N�o tente salvar nada. J� � tarde demais.)\n");
        Sleep(2000);
        forcarDesligamento();  
    }
    
    return 0;
}
