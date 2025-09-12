#include<stdio.h>

void star(int n){
    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            printf("* ");
        }
    printf("\n");
}
printf("\n");
}

void triangle(int n){
    int i ,j;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("* ");
        }
    printf("\n");
    }
printf("\n");
}

void number(int n){
    int i ,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
    printf("\n");
    }
printf("\n");
}

void trinum(int n){
    int i ,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
    printf("\n");
    }
printf("\n");
}

int main(){
     star(5);
     triangle(5);
     number(5);
     trinum(5);
}
