#include <stdio.h>

int main()
{
    int num_notas = 4;
    float media;
    float nota[num_notas];
    int notasBoas = 0;
    
    for(int i = 0; i < num_notas; i++){
        printf("digite a nota %d: ",i+1);
        scanf("%f",&nota[i]);
        
        if(nota[i]>=7){
            notasBoas++;
        }
    } 
    media = (nota[0] + nota[1] + nota[2] + nota[3])/4;
    
    if(media >=7 ){
        printf("Você foi aprovado, sua media foi: %0.2f \n",media);
    }else{
        printf("Você foi reprovado, sua media foi: %0.2f \n",media);
    }
    printf("você teve esse numero de notas acima da media: %d",notasBoas);
    return 0;
}