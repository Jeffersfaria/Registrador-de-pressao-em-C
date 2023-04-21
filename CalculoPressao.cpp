#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
    int pressao_diastolica[10];
    int pressao_sistolica[10];

   
    for (int i = 0; i < 10; i++) {
        printf("Press�o diast�lica da pessoa %d: ", i+1);
        scanf("%d", &pressao_diastolica[i]);

        printf("Press�o sist�lica da pessoa %d: ", i+1);
        scanf("%d", &pressao_sistolica[i]);
         fflush(stdin);
        system("cls");
    }
    

    printf("\nPress�es diast�licas: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", pressao_diastolica[i]);
    }
    
    printf("\n");
    
    printf("\nPress�es sist�licas: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", pressao_sistolica[i]);
    }

	printf("\n");

    float media_diastolica = 0;
    float media_sistolica = 0;
    for (int i = 0; i < 10; i++) {
        media_diastolica += pressao_diastolica[i];
        media_sistolica += pressao_sistolica[i];
    }
    media_diastolica /= 10;
    media_sistolica /= 10;

    
    printf("\nM�dia da press�o diast�lica: %.2f\n", media_diastolica);
    printf("\nM�dia da press�o sist�lica: %.2f\n", media_sistolica);

    return 0;
}

