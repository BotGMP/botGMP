#include <stdio.h>
#include <math.h>

int main(void)
{
//Leitura e verifica��o do vetor
    int vetor[18], k, numero;


    for(k=0;k<18;k++)
    {
        {
            printf("Insira um numero inteiro entre 1 e 11:  ");
            scanf("%d", &numero);
            vetor[k]=numero;
        }while(numero<1 && numero>11);
    }

//Funcionalidade 1

    int linha, coluna, matriz[4][18];
    for(linha=0; linha<4; linha++)
    {
        for(coluna=0; coluna<18; coluna++)
        {
                matriz[linha][coluna]=vetor[coluna];
        }
    }

    
//Funcionalidade 2
    int menor, m,aux, posicao;
    float logaritmo;
    for(k=0;k<18;k++)
    {
        logaritmo=log(vetor[k]);
    }

//Funcionalidade 3
    float calculo;

    for(k=0;k<18;k++)
    {
        menor=12;
        for(m=0;m+k<18;m++)
        {
            if (vetor[m+k]<menor)
            {
                menor=vetor[m+k];
                posicao=m+k;
            }
        }
        aux=vetor[posicao];
        vetor[posicao]=vetor[k];
        vetor[k]=aux;
    }


    for(k=0;k<18;k++)
    {
        printf("%d", vetor[k]);
    }

    calculo=(vetor[8]+vetor[9])/2;

    printf("%f", calculo);


//Funcionalidade 4


    for(k=0;k<18;k++)
    {
        vetor[k]=-vetor[k];
    }

    //Ordenar o vetor em crescente
    for(k=0;k<18;k++)
    {
        menor=12;
        for(m=0;m+k<18;m++)
        {
            if (vetor[m+k]<menor)
            {
                menor=vetor[m+k];
                posicao=m+k;
            }
        }
        aux=vetor[posicao];
        vetor[posicao]=vetor[k];
        vetor[k]=aux;
    }


    for(k=0;k<18;k++)
    {
        printf("%d", vetor[k]);
    }

    printf("%d", vetor[0]);//Este print � para saber se est� a funcionar



//Funcionalidade 5
    for(k=0;k<18;k++)
    {
        if(vetor[k]>2 && vetor[k]%5==0)
        {
            printf("%d\n", vetor[k]);
        }
    }


//Funcionalidade 6


    int vetor_final[9],z, x, segundo_vetor[9];

    x=k+9;

    for(k=0;k<9;k++)
{
    vetor[k];
}
    for(x=0;x<9;x++)
{
    segundo_vetor[x];
}
    for(z=;z<9;z++)
{
    vetor_final[z]=vetor[k]+segundo_vetor[x];
}
}
}
printf("%d\n", vetor_final);




}





