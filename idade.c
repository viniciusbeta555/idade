#include <stdio.h>

int main(){
    int cont = 10;
    int i;

    int idade, porcentagem;
    int pessoas = 0;
    int pessoas2 = 0;
    float somaIdade = 0;
    float peso, altura, mediaIdade;


    for (i = 0; i < cont; i++){
        printf("Informe sua idade, seu peso e sua altura;\n");
        scanf("%d", &idade);
        scanf("%f", &peso);
        scanf("%f", &altura);
        somaIdade = somaIdade + idade;

        if(peso > 80 && altura < 1.50){
            pessoas = pessoas + 1;
        }

        if(idade > 10 && idade < 30 && altura > 1.90){
            pessoas2 = pessoas2 + 1;
        }
    }

    mediaIdade = somaIdade/10;
    porcentagem = pessoas2 * 100/10;
    printf("A media das idades é: %.2f\n", mediaIdade);
    printf("A quantidade de pessoas com peso acima de 80kg e altura abaixo de 1.50 é: %d\n", pessoas);
    printf("A porcentagem das pessoas com idade entre 10 e 30 anos e altura acima de 1.90 é: %d\n", porcentagem);

return 0;

}