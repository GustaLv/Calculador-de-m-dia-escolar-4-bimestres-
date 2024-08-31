#include <stdio.h>
int main(void){
    float nota1, nota2, nota3, nota4, media;

    printf("Descubra sua média escolar! \n");
    printf("Fale a sua nota do primeiro bimestre: ");
    scanf("%f", &nota1);
    printf("Fale agora a sua nota do segundo bimestre: ");
    scanf("%f", &nota2);
    printf("Novamente, agora do terceiro bimestre: ");
    scanf("%f", &nota3);
    printf("E por último, a nota do quarto bimestre!: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) /4;
    if(media >= 5) {
    printf("Parabéns! Você foi aprovado. A sua média é: %.2f\n", media); } //%.2f limita a dois números depois da vírgula
    else {
    printf("Infelizmente você reprovou. Sua média é: %.2f\n", media); }

}
