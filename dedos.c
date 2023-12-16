#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//variaveis globais com o proposito de os seus valores poderem ser acedidos e alterados por qualquer função
struct jogador {
    int dedosMaoE;
    int dedosMaoD;
    char* nome;
}jogador1,jogador2;

void ataque_a_jogador1(char maoJogador1,char maoJogador2){    //explica a decisão do jogador1 e verifica o numero de dedos da mão atacada
    if(maoJogador2=='e' && maoJogador1=='e'){   //Vai adicionar à mão esquerda do Jogador 1 os dedos da mão esquerda do Jogador 2
        jogador1.dedosMaoE+=jogador2.dedosMaoE;             
        if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, e ficam %d dedos\n\n", jogador1.dedosMaoE);
    }
    else if(maoJogador2=='e' && maoJogador1=='d'){  
        jogador1.dedosMaoE+=jogador2.dedosMaoD;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        }
        printf("dedo(s) da mão direita ataca dedo(s) da mão esquerda, e ficam %d dedos\n\n", jogador1.dedosMaoE);
    }
    else if(maoJogador2=='d' && maoJogador1=='d'){
        jogador1.dedosMaoD+=jogador2.dedosMaoD;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        }
        printf("dedo(s) da mão direita ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador1.dedosMaoD);
    }
    else if (maoJogador2=='d' && maoJogador1=='e'){
        jogador1.dedosMaoD+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador1.dedosMaoD);
    }
}

void ataque_a_jogador2(char maoJogador1,char maoJogador2){    //explica a decisão do jogador1 e verifica o numero de dedos da mão atacada
    if(maoJogador1=='e' && maoJogador2=='e'){
        jogador2.dedosMaoE+=jogador1.dedosMaoE;
        if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador2.dedosMaoE);
    }  
    else if(maoJogador1=='e' && maoJogador2=='d'){   
        jogador2.dedosMaoD+=jogador1.dedosMaoE;
       if(jogador2.dedosMaoD>5){
        jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoE>5){
        jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador2.dedosMaoD);
    }
    else if(maoJogador1=='d' && maoJogador2=='d'){
        jogador2.dedosMaoD+=jogador1.dedosMaoD;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        }
        printf("dedo(s) da mão direita ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador2.dedosMaoD);
    }
    else if (maoJogador1=='d' && maoJogador2=='e'){
        jogador2.dedosMaoE+=jogador1.dedosMaoD;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        } 
        printf("dedo(s) da mão direita ataca dedo(a) da mão esquerda, ficam %d dedos\n\n",jogador2.dedosMaoE);
    }
}

void IgualarJogador1(){
    if(jogador1.dedosMaoD!=0){
        jogador1.dedosMaoD=(jogador1.dedosMaoD/2);
        jogador1.dedosMaoE=jogador1.dedosMaoD;
        printf("divide os %d dedos pelas duas mãos\n\n", jogador1.dedosMaoD+jogador1.dedosMaoD);
    }
    else{
        jogador1.dedosMaoE=(jogador1.dedosMaoE/2);
        jogador1.dedosMaoD=jogador1.dedosMaoE;
        printf("divide os %d dedos pelas duas mãos\n\n", jogador1.dedosMaoE+jogador1.dedosMaoE);
    }
}

void IgualarJogador2(){
    if(jogador2.dedosMaoD!=0){
        jogador2.dedosMaoD=(jogador2.dedosMaoD/2);
        jogador2.dedosMaoE=jogador2.dedosMaoD;
          printf("divide os %d dedos pelas duas mãos\n\n", jogador2.dedosMaoD+jogador2.dedosMaoD);
    }
    else{
        jogador2.dedosMaoE=(jogador2.dedosMaoE/2);
        jogador2.dedosMaoD=jogador2.dedosMaoE;
        printf("divide os %d dedos pelas duas mãos\n\n", jogador2.dedosMaoE+jogador2.dedosMaoE);
    }
}

void jogadaJogador1(){
    char maoJogador1;
    char maoJogador2;
    char jogada[2];
    if(jogador1.dedosMaoD==0 && jogador1.dedosMaoE==0){
        printf("\n");
    }
    else{
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD);  
        printf("vez do %s 1: ",jogador1.nome);
        scanf("%s",jogada);
        maoJogador1=jogada[0];
        maoJogador2=jogada[1];
        if(maoJogador1=='.' || maoJogador2=='.'){
            printf("O %s ganhou o jogo por desistência do jogador %s !\n",jogador2.nome,jogador1.nome);
            jogador1.dedosMaoD=0;
            jogador1.dedosMaoE=0;
        }
        else if((maoJogador1=='e' || maoJogador1=='d') && (maoJogador2=='e' || maoJogador2=='d')){ 
                ataque_a_jogador2(maoJogador1,maoJogador2);
        }
        else if(maoJogador1=='=' || maoJogador2=='='){
                if(jogador1.dedosMaoD==0 && jogador1.dedosMaoE%2==0 || jogador1.dedosMaoE==0 && jogador1.dedosMaoD%2==0){
                    IgualarJogador1();
                }
                else{
                printf("Jogada Inválida\n\n");
                    jogadaJogador1();
                }  
        }
        else{
            printf("Jogada Inválida\n\n");
            jogadaJogador1();
        }
    }
}

void jogadaJogador2(){
    char maoJogador1;
    char maoJogador2;
    char jogada[2];
    if(jogador2.dedosMaoD==0 && jogador2.dedosMaoE==0){
        printf("\n");
    }
    else{
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        scanf("%s",jogada);
        maoJogador1=jogada[0];
        maoJogador2=jogada[1];
        if(maoJogador1=='.' || maoJogador2=='.'){
            printf("O %s ganhou o jogo por desistência do jogador %s !\n",jogador1.nome,jogador2.nome);
            jogador2.dedosMaoD=0;
            jogador2.dedosMaoE=0;
        }    
        else if((maoJogador1=='e' || maoJogador1=='d') && (maoJogador2=='e' || maoJogador2=='d')){
            ataque_a_jogador1(maoJogador1,maoJogador2);
        }
        else if(maoJogador1=='=' || maoJogador2=='='){
            if(jogador2.dedosMaoD==0 && jogador2.dedosMaoE%2==0 || jogador2.dedosMaoE==0 && jogador2.dedosMaoD%2==0){
                IgualarJogador2();
            }    
            else{
                printf("Jogada Inválida\n");
                jogadaJogador2();
            }  
        }
        else{
            printf("Jogada Inválida\n");
            jogadaJogador2();
        }
    }            
}          

void ataqueChico(){
    if(jogador1.dedosMaoD>jogador1.dedosMaoE && jogador2.dedosMaoD>jogador2.dedosMaoE && jogador2.dedosMaoE!=0){ //ataca com o maior número de dedos contra o menor número de dedos portanto de
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoE+=jogador1.dedosMaoD;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        } 
        printf("dedo(s) da mão direita ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador2.dedosMaoE);
    }
    else if(jogador1.dedosMaoD>jogador1.dedosMaoE && jogador2.dedosMaoD>jogador2.dedosMaoE && jogador2.dedosMaoE==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoD+=jogador1.dedosMaoD;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
            else if(jogador2.dedosMaoD==5){
                jogador2.dedosMaoD=jogador2.dedosMaoD-5;
            }
            printf("dedo(s) da mão direita ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador2.dedosMaoD);
    }
    
    else if(jogador1.dedosMaoD>jogador1.dedosMaoE && jogador2.dedosMaoE>jogador2.dedosMaoD && jogador2.dedosMaoD!=0){  //dd
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoD+=jogador1.dedosMaoD;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        }
        printf("dedo(s) da mão direita ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador2.dedosMaoD);
    }
    else if(jogador1.dedosMaoD>jogador1.dedosMaoE && jogador2.dedosMaoE>jogador2.dedosMaoD && jogador2.dedosMaoD==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoE+=jogador1.dedosMaoD;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        } 
        printf("dedo(s) da mão direita ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador2.dedosMaoE);
    }
    else if(jogador1.dedosMaoD==jogador1.dedosMaoE && jogador2.dedosMaoD>jogador2.dedosMaoE && jogador2.dedosMaoE!=0){ //ee
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoE+=jogador1.dedosMaoE;
        if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador2.dedosMaoE);
    }
    else if(jogador1.dedosMaoD==jogador1.dedosMaoE && jogador2.dedosMaoD>jogador2.dedosMaoE && jogador2.dedosMaoE==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoD+=jogador1.dedosMaoE;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        } 
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador2.dedosMaoD);
    }
    else if(jogador1.dedosMaoD==jogador1.dedosMaoE && jogador2.dedosMaoD==jogador2.dedosMaoE){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoE+=jogador1.dedosMaoE;
        if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador2.dedosMaoE);
    }
    else if(jogador1.dedosMaoD==jogador1.dedosMaoE && jogador2.dedosMaoE>jogador2.dedosMaoD && jogador2.dedosMaoD!=0){ //ed
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoD+=jogador1.dedosMaoE;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        } 
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador2.dedosMaoD);
    }
    else if(jogador1.dedosMaoD==jogador1.dedosMaoE && jogador2.dedosMaoE>jogador2.dedosMaoD && jogador2.dedosMaoD==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoE+=jogador1.dedosMaoE;
        if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador2.dedosMaoE);
    }
    else if(jogador1.dedosMaoD<jogador1.dedosMaoE && jogador2.dedosMaoD>jogador2.dedosMaoE && jogador2.dedosMaoE!=0){ //ee
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoE+=jogador1.dedosMaoE;
        if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador2.dedosMaoE);
    }
    else if(jogador1.dedosMaoD<jogador1.dedosMaoE && jogador2.dedosMaoD>jogador2.dedosMaoE && jogador2.dedosMaoE==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoD+=jogador1.dedosMaoE;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        } 
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador2.dedosMaoD);
    }
    else if(jogador1.dedosMaoD<jogador1.dedosMaoE && jogador2.dedosMaoE>jogador2.dedosMaoD && jogador2.dedosMaoD!=0){ //ed
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoD+=jogador1.dedosMaoE;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        } 
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador2.dedosMaoD);
    }
    else if(jogador1.dedosMaoD<jogador1.dedosMaoE && jogador2.dedosMaoE>jogador2.dedosMaoD && jogador2.dedosMaoD==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoE+=jogador1.dedosMaoE;
        if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador2.dedosMaoE); 
    }
    else if(jogador1.dedosMaoD<jogador1.dedosMaoE && jogador2.dedosMaoE==0 && jogador2.dedosMaoD>0){//dd
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        jogador2.dedosMaoD+=jogador1.dedosMaoD;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        }
        printf("dedo(s) da mão direita ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador2.dedosMaoD);
    }
    jogadaJogador2();    
}

void ataqueChico2(){
    jogadaJogador1();
    if(jogador2.dedosMaoD>jogador2.dedosMaoE && jogador1.dedosMaoD>jogador1.dedosMaoE && jogador1.dedosMaoE!=0){ //ataca com o maior número de dedos contra o menor número de dedos
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoE+=jogador2.dedosMaoD;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        } 
        printf("dedo(s) da mão direita ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador1.dedosMaoE);
    }
    else if(jogador2.dedosMaoD>jogador2.dedosMaoE && jogador1.dedosMaoD>jogador1.dedosMaoE && jogador1.dedosMaoE==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoD+=jogador2.dedosMaoD;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
            else if(jogador1.dedosMaoD==5){
                jogador1.dedosMaoD=jogador1.dedosMaoD-5;
            }
            printf("dedo(s) da mão direita ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador1.dedosMaoD);
    }
    
    else if(jogador2.dedosMaoD>jogador2.dedosMaoE && jogador1.dedosMaoE>jogador1.dedosMaoD && jogador1.dedosMaoD!=0){  //dd
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoD+=jogador2.dedosMaoD;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        }
        printf("dedo(s) da mão direita ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador1.dedosMaoD);
    }
    else if(jogador2.dedosMaoD>jogador2.dedosMaoE && jogador1.dedosMaoE>jogador1.dedosMaoD && jogador1.dedosMaoD==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoE+=jogador2.dedosMaoD;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        } 
        printf("dedo(s) da mão direita ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador1.dedosMaoE);
    }
    else if(jogador2.dedosMaoD==jogador2.dedosMaoE && jogador1.dedosMaoD>jogador1.dedosMaoE && jogador1.dedosMaoE!=0){ //ee
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoE+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador1.dedosMaoE);
    }
    else if(jogador2.dedosMaoD==jogador2.dedosMaoE && jogador1.dedosMaoD>jogador1.dedosMaoE && jogador1.dedosMaoE==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoD+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        } 
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador1.dedosMaoD);
    }
    else if(jogador2.dedosMaoD==jogador2.dedosMaoE && jogador1.dedosMaoD==jogador1.dedosMaoE){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoE+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador1.dedosMaoE);
    }
    else if(jogador2.dedosMaoD==jogador2.dedosMaoE && jogador1.dedosMaoE>jogador1.dedosMaoD && jogador1.dedosMaoD!=0){ //ed
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoD+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        } 
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador1.dedosMaoD);
    }
    else if(jogador2.dedosMaoD==jogador2.dedosMaoE && jogador1.dedosMaoE>jogador1.dedosMaoD && jogador1.dedosMaoD==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoE+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador1.dedosMaoE);
    }
    else if(jogador2.dedosMaoD<jogador2.dedosMaoE && jogador1.dedosMaoD>jogador1.dedosMaoE && jogador1.dedosMaoE!=0){ //ee
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoE+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador1.dedosMaoE);
    }
    else if(jogador2.dedosMaoD<jogador2.dedosMaoE && jogador1.dedosMaoD==jogador1.dedosMaoE && jogador1.dedosMaoE!=0){ //ee
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoE+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador1.dedosMaoE);
    }
    else if(jogador2.dedosMaoD>jogador2.dedosMaoE && jogador1.dedosMaoD==jogador1.dedosMaoE && jogador1.dedosMaoE!=0){ //de
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
       jogador1.dedosMaoE+=jogador2.dedosMaoD;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        } 
        printf("dedo(s) da mão direita ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador1.dedosMaoE);
    }
    else if(jogador2.dedosMaoD<jogador2.dedosMaoE && jogador1.dedosMaoD>jogador1.dedosMaoE && jogador1.dedosMaoE==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoD+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        } 
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador1.dedosMaoD);
    }
    else if(jogador2.dedosMaoD<jogador2.dedosMaoE && jogador1.dedosMaoE>jogador1.dedosMaoD && jogador1.dedosMaoD!=0){ //ed
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoD+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        } 
        printf("dedo da mão esquerda ataca dedo da mão direita, ficam %d dedos\n\n",jogador1.dedosMaoD);
    }
    else if(jogador2.dedosMaoD<jogador2.dedosMaoE && jogador1.dedosMaoE>jogador1.dedosMaoD && jogador1.dedosMaoD==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoE+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador1.dedosMaoE); 
    }
}   


void ataqueCalhas1(){
    int num=rand()%5;
    if(num==0){
        jogador2.dedosMaoE+=jogador1.dedosMaoE;
        if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos(s)\n\n",jogador2.dedosMaoE);
    }
    else if(num==1){
        jogador2.dedosMaoD+=jogador1.dedosMaoE;
       if(jogador2.dedosMaoD>5){
        jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoE>5){
        jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador2.dedosMaoD);
    }
    else if(num==2){
        jogador2.dedosMaoD+=jogador1.dedosMaoD;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        }
        printf("dedo(s) da mão direita ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador2.dedosMaoD);
    }
    else if(num==3){
        jogador2.dedosMaoE+=jogador1.dedosMaoD;
        if(jogador2.dedosMaoD>5){
            jogador2.dedosMaoD=jogador2.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoE>5){
            jogador2.dedosMaoE=jogador2.dedosMaoE%5;
        }
        else if(jogador2.dedosMaoE==5){
            jogador2.dedosMaoE=jogador2.dedosMaoE-5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador2.dedosMaoD=jogador2.dedosMaoD-5;
        } 
        printf("dedo(s) da mão direita ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador2.dedosMaoE);
    }
    else if(num==4){
         if(jogador1.dedosMaoD==0 && jogador1.dedosMaoE%2==0 || jogador1.dedosMaoE==0 && jogador1.dedosMaoD%2==0){
                IgualarJogador1();
        }
        else{
            printf("Jogada Inválida\n");
            ataqueCalhas1();
        }  
    }
    jogadaJogador2();  
}

void ataqueCalhas2(){
    jogadaJogador1();
    int num=rand()%5; 
    if(num==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoE+=jogador2.dedosMaoE;
        if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão esquerda, ficam %d dedos(s)\n\n",jogador1.dedosMaoE);
    }
    else if(num==1){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoD+=jogador2.dedosMaoE;
       if(jogador1.dedosMaoD>5){
        jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoE>5){
        jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        }
        printf("dedo(s) da mão esquerda ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador1.dedosMaoD);
    }
    else if(num==2){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoD+=jogador2.dedosMaoD;
        if(jogador1.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador2.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        }
        printf("dedo(s) da mão direita ataca dedo(s) da mão direita, ficam %d dedos\n\n",jogador1.dedosMaoD);
    }
    else if(num==3){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
        jogador1.dedosMaoE+=jogador2.dedosMaoD;
        if(jogador2.dedosMaoD>5){
            jogador1.dedosMaoD=jogador1.dedosMaoD%5;
        }
        else if(jogador1.dedosMaoE>5){
            jogador1.dedosMaoE=jogador1.dedosMaoE%5;
        }
        else if(jogador1.dedosMaoE==5){
            jogador1.dedosMaoE=jogador1.dedosMaoE-5;
        }
        else if(jogador1.dedosMaoD==5){
            jogador1.dedosMaoD=jogador1.dedosMaoD-5;
        } 
        printf("dedo(s) da mão direita ataca dedo(s) da mão esquerda, ficam %d dedos\n\n",jogador1.dedosMaoE);
    }
    else if(num==4){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 2: ",jogador2.nome);
         if(jogador2.dedosMaoD==0 && jogador2.dedosMaoE%2==0 || jogador2.dedosMaoE==0 && jogador2.dedosMaoD%2==0){
            IgualarJogador2();
        }
        else{
            printf("Jogada Inválida\n");
            ataqueCalhas2();
        }  
    } 
}

void jogadaChico1(){
    char maoJogador1;
    char maoJogador2;
    char jogada[2];
    if(jogador2.dedosMaoD==0 && jogador2.dedosMaoE==0){ 
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD);
        printf("O %s é o vencedor !\n",jogador1.nome);
    }
    else if(jogador1.dedosMaoD==0 && jogador1.dedosMaoE==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("O %s é o vencedor !\n", jogador2.nome);
    }
    else{
        ataqueChico();
    }
}

void jogadaChico2(){
    char maoJogador1;
    char maoJogador2;
    char jogada[2];
    if(jogador1.dedosMaoD==0 && jogador1.dedosMaoE==0){ 
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("O %s é o vencedor !\n",jogador2.nome);
    }
    else if(jogador2.dedosMaoD==0 && jogador2.dedosMaoE==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("O %s é o vencedor !\n", jogador1.nome);
    }
    else{
        ataqueChico2();
    }
}

void jogadaCalhas1(){
    char maoJogador1;
    char maoJogador2;
    char jogada[2];
    if(jogador2.dedosMaoD==0 && jogador2.dedosMaoE==0){ 
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("O %s é o vencedor !\n",jogador1.nome);
    }
    else{
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("vez do %s 1: ",jogador1.nome);
        ataqueCalhas1();
    }
}

void jogadaCalhas2(){
    char maoJogador1;
    char maoJogador2;
    char jogada[2];
    if(jogador1.dedosMaoD==0 && jogador1.dedosMaoE==0){ 
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("O %s é o vencedor !\n",jogador2.nome);
    }
    else if(jogador2.dedosMaoD==0 && jogador2.dedosMaoE==0){
        printf("O %s é o vencedor !\n", jogador1.nome);
    }
    else{
        ataqueCalhas2();
    }
}


void jogoNormal(){
    char maoJogador1;
    char maoJogador2;
    char jogada[2];
    while((jogador1.dedosMaoD!=0 || jogador1.dedosMaoE!=0 )&&(jogador2.dedosMaoD!=0 || jogador2.dedosMaoE!=0)){
        jogadaJogador1();
        if ((jogador1.dedosMaoD!=0 || jogador1.dedosMaoE!=0 )&&(jogador2.dedosMaoD!=0 || jogador2.dedosMaoE!=0)){
        jogadaJogador2();
        }
    }
    if(jogador2.dedosMaoD==0 && jogador2.dedosMaoE==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("O %s é o vencedor !\n\n", jogador1.nome);
    }
    else if(jogador1.dedosMaoD==0 && jogador1.dedosMaoE==0){
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD); 
        printf("O %s é o vencedor !\n\n", jogador2.nome);
    }
}   

void jogoChico(){
        char maoJogador1;
        char maoJogador2;
        char jogada[2];
        while((jogador2.dedosMaoD!=0 || jogador2.dedosMaoE!=0 )&&(jogador2.dedosMaoD!=0 || jogador2.dedosMaoE!=0)){
            if((strcmp(jogador1.nome, "chico-esperto"))==0){
                jogadaChico1();
            }
            else if((strcmp(jogador1.nome, "chico-esperto"))!=0){
                if((jogador1.dedosMaoD!=0 || jogador1.dedosMaoE!=0 )&&(jogador1.dedosMaoD!=0 || jogador1.dedosMaoE!=0)){
                    jogadaJogador1();
                }
            }           
        } 
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD);
        printf("O %s é o vencedor !\n\n",jogador1.nome);
}    

void jogoChico2(){
        char maoJogador1;
        char maoJogador2;
        char jogada[2];
        while((jogador2.dedosMaoD!=0 || jogador2.dedosMaoE!=0 )&&(jogador1.dedosMaoD!=0 || jogador1.dedosMaoE!=0)){
            if((strcmp(jogador2.nome, "chico-esperto"))==0){
                jogadaChico2();
            }
            else if((strcmp(jogador2.nome, "chico-esperto"))!=0){
                if((jogador2.dedosMaoD!=0 || jogador2.dedosMaoE!=0 )&&(jogador1.dedosMaoD!=0 || jogador1.dedosMaoE!=0)){
                    jogadaJogador2();
                }
            }           
        }   
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD);
        printf("O %s é o vencedor !\n\n",jogador1.nome);
}   

void jogoCalhas(){
        char maoJogador1;
        char maoJogador2;
        char jogada[2];
        while((jogador2.dedosMaoD!=0 || jogador2.dedosMaoE!=0 )&&(jogador1.dedosMaoD!=0 || jogador1.dedosMaoE!=0)){
            if((strcmp(jogador1.nome, "ao-calhas"))==0){
                jogadaCalhas1();
            }
            else if((strcmp(jogador1.nome, "ao-calhas"))!=0){
                if((jogador1.dedosMaoD!=0 || jogador1.dedosMaoE!=0 )&&(jogador2.dedosMaoD!=0 || jogador2.dedosMaoE!=0)){
                    jogadaJogador2();
                }
            }           
        }  
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD);
        printf("O %s é o vencedor !\n\n",jogador2.nome);
}

void jogoCalhas2(){
        char maoJogador1;
        char maoJogador2;
        char jogada[2];
        while((jogador2.dedosMaoD!=0 || jogador2.dedosMaoE!=0 )&&(jogador1.dedosMaoD!=0 || jogador1.dedosMaoE!=0)){
            if((strcmp(jogador2.nome, "ao-calhas"))==0){
                jogadaCalhas2();
            }
            else if((strcmp(jogador2.nome, "ao-calhas"))!=0){
                if((jogador1.dedosMaoD!=0 || jogador1.dedosMaoE!=0 )&&(jogador2.dedosMaoD!=0 || jogador2.dedosMaoE!=0)){
                    jogadaJogador1();
                }
            }           
        } 
        printf("%s 1: %d, %d\n",jogador1.nome,jogador1.dedosMaoE,jogador1.dedosMaoD);
        printf("%s 2: %d, %d\n\n",jogador2.nome,jogador2.dedosMaoE,jogador2.dedosMaoD);
        printf("O %s é o vencedor !\n\n",jogador1.nome);  
}


void seletorDeTatica(){
    printf("Jogo dos dedos - %s vs %s\n\n",jogador1.nome,jogador2.nome);
        if((strcmp(jogador1.nome, "chico-esperto"))==0){
            jogoChico();
        }
        else if((strcmp(jogador2.nome, "chico-esperto"))==0){
            jogoChico2();
        }
        else if((strcmp(jogador1.nome, "ao-calhas"))==0){
           jogoCalhas();
        }
        else if((strcmp(jogador2.nome, "ao-calhas"))==0){
           jogoCalhas2();
        }
        else{
           jogoNormal();
        }
}

int main(int argc , char*argv[]){

    if(argc<3){
        printf("Erro! Para iniciar o jogo Introduza este comando: ./dedos nome1 nome2\n");
    }
    else{
        jogador1.dedosMaoD=1;
        jogador1.dedosMaoE=1;
        jogador2.dedosMaoD=1;
        jogador2.dedosMaoE=1;

        jogador1.nome=argv[1];
        jogador2.nome=argv[2]; 
        
        seletorDeTatica();
    }
    return 0;
    }