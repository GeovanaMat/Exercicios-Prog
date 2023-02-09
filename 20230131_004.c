#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s1[20],s2[20];

void respostaA(){
    printf("S1 = ");
    scanf("%s",s1);

}

void respostaB(){


}



int main() {
    char resposta[1],parametro[1],c2[1],s3[20],c3[2],substring[20],aprov;
    int i,contador=0,j,continuar = 1;
    while(continuar == 1){

        printf("Escolha uma opcao: (a)(b)(c)(d)(e)(f)(g)(h)(i)");
        scanf("%s",resposta);

            if(resposta[0] == 97){
                    respostaA();
                    continuar =1;

                    }


            else if (resposta[0] == 98){
                    printf("Tamanho da String S1 = %d \n",strlen(s1));
                    continuar = 0;
            }

            else if(resposta[0]== 99){
                printf("S2 = ");
                scanf("%s",s2);
                if(strcmp(s1,s2) == 0){
                    printf("Sao iguais\n");
                }
                else
                    printf("Sao diferentes\n");

            }

            else if(resposta[0] == 100){
                printf("Concatenação de S1 e S2 = %s\n",strcat(s1,s2));
            }
            else if(resposta[0] == 101){
                for(i=(strlen(s1)-1);i>=0;i--){
                    printf("%c",s1[i]);
                }
                printf("\n");
            }
            else if(resposta[0] == 102){
                printf("Qual letra voce quer saber a quantidade? ");
                scanf("%s",&parametro);
                for(i=0;i<=sizeof(s1);i++){
                    if(s1[i] == parametro[0]){
                        contador+=1;
                        printf("%d\n",contador);
                    }
                }
            }

            else if(resposta[0]== 103){
                printf("Informe o letra de S1 que ira mudar e Para qual letra ira mudar");
                scanf("%s%s",c3,c2);

                for(i=0;i<=strlen(s1);i++){
                    s3[i] = s1[i];
                }
                for(i=0;i<=strlen(s1);i++){
                    if(c3[0] == s3[i]){
                        s3[i] = c2[0];
                    }}

                printf("%s",s3);}

                else if(resposta[0] == 104){
                        contador = 0;
                        printf("Escreva um S2 = ");
                        scanf("%s",s2);
                        for(i=0;i<=strlen(s1);i++){
                            for(j=0;j<=strlen(s2);j++){
                                if(s1[i] == s2[j]){
                                    substring[contador] = s1[i];
                                    contador +=1;

                                }
                            }

                        }
                         if(strcmp(s2,substring) == 0){
                                printf("S2 eh substring de S1\n");
                            }
                            else
                                printf("Nao eh substring\n");
                        }
                else if(resposta[0] == 105){
                            char subs1[20];
                            int posi,tam;
                            printf("Qual posição você quer que comece? ");
                            scanf("%d",&posi);
                            printf("Qual o tamanho? ");
                            scanf("%d",&tam);
                            for(i=posi,j=0;i<tam,j<tam;i++,j++){
                                subs1[j] = s1[i];
                            }
                        printf("%s",subs1);

                        }


                        }



                    }







