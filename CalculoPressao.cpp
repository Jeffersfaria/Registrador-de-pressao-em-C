#include <stdio.h>
#include <locale.h>
#include<stdlib.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    
    int pressao_diastolica[10];
    int pressao_sistolica[10];

   
    for (int i = 0; i < 10; i++) {
        printf("Pressão diastólica da pessoa %d: ", i+1);
        scanf("%d", &pressao_diastolica[i]);

        printf("Pressão sistólica da pessoa %d: ", i+1);
        scanf("%d", &pressao_sistolica[i]);
         fflush(stdin);
        system("cls");
    }
    

    printf("\nPressões diastólicas: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", pressao_diastolica[i]);
    }
    
    printf("\n");
    
    printf("\nPressões sistólicas: ");
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

    
    printf("\nMédia da pressão diastólica: %.2f\n", media_diastolica);
    printf("\nMédia da pressão sistólica: %.2f\n", media_sistolica);

    return 0;
}

