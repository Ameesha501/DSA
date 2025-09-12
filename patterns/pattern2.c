#include<stdio.h>

void triangle(int n){
    int i ,j;
    for(i=0;i<=n-1;i++){
        for(j=0;j<=n-i-1;j++){
                printf(" ");
        }
        for(j = 0;j<(2*i+1);j++){
                    printf("*");
        }
         for(j=0;j<=n-i-1;j++){
                printf(" ");
        }
    printf("\n");
    }
printf("\n");
}

void reverse(int n){
    int i ,j;
    for(i=n;i>=1;i--){
        for(j=0;j<n-i;j++){
                printf(" ");
        }
        for(j = 0;j<(2*i-1);j++){
                    printf("*");
        }
        for(j=0;j<n-i;j++){
                printf(" ");
        }
    printf("\n");
    }
printf("\n");
}

void diamond(int n){
    int i ,j;
    for(i=0;i<=n-1;i++){
        for(j=1;j<=n-i-1;j++){
                printf(" ");
        }
        for(j = 0;j<(2*i+1);j++){
                    printf("*");
        }
        for(j=1;j<=n-i-1;j++){
                printf(" ");
        }
    printf("\n");
    }
    for(i=n;i>=0;i--){
        for(j=0;j<n-i;j++){
                printf(" ");
        }
        for(j = 0;j<(2*i-1);j++){
                    printf("*");
        }
        for(j=0;j<n-i;j++){
                printf(" ");
        }
    printf("\n");
    }
printf("\n");
    }

void halfdiamond(int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<=i;j++){
            printf(" * ");
        }
        printf("\n");
    }
    for(i=n;i>=0;i--){
        for(j=0;j<=i;j++){
            printf(" * ");

        }
        printf("\n");
    }
}

int main(){
    triangle(5);
    reverse(5);
    diamond(5);
    halfdiamond(5);

}
