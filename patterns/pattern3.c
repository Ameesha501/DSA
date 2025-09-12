#include<stdio.h>

void alphatri(int n){
    int i,j;
    for(i = 1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
                printf(" %c ",'A'-1+j);
        }
        printf("\n");
    }
    printf("\n");
}
void alpharev(int n){
    int i,j;
    for(i = n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
                printf(" %c ",'A'-1+j);
        }
        printf("\n");
    }
    printf("\n");
}

void alphaset(int n){
    int i,j;
    for(i = 1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
                printf(" %c ",'A'-1+i);
        }
        printf("\n");
    }
    printf("\n");
}

void alphapyramid(int n){
    int i,j;
    for(i = 1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
                printf(" ");
        }
        char ch ='A';
        for(j=1;j<=i;j++)
        {
                printf("%c",ch);
                ch++;
        }
        ch--;
        for(j=i+1;j<=2*i-1;j++)
        {
                ch--;
                printf("%c",ch);
        }
        ch='A';
        printf("\n");
    }
}



int main(){
    alphatri(5);
    alpharev(5);
    alphaset(5);
    alphapyramid(4);
    }
