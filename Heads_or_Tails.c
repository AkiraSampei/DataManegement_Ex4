#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){
    srand((unsigned int)time(NULL));

    char name[30];
    printf("Who are you?\n");
    scanf("%s",name);
    printf("Hello, %s!\n",name);

    int H,T;
    H=T=0;
    printf("Tossing a coin...\n");
    for(int i = 0; i < 3; i++) {
        int h,t;
        h=t=0;
        for(int j = 0; j < 5; j++){
            if(rand()%2)h++;
            else t++;
        }
        printf("Round %d: ",i+1);
        if(h>t){
            printf("Heads\n");
            H++;
        }
        else {
            printf("Tails\n");
            T++;
        }
    }
    printf("Heads: %d, Tails: %d\n",H,T);
    if(H>T)printf("%s won\n",name);
    else printf("%s lost\n",name);

    return 0;
}