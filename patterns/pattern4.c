#include<stdio.h>

void diamond(int n){
    int i ,j;

    for(i=0;i<n;i++){
       for(j = 0;j<n-i;j++){
                    printf("*");
        }
        for(j=0;j<(2*i);j++){
                printf(" ");
        }
        for(j = 0;j<n-i;j++){
                    printf("*");
        }
    printf("\n");
    }
    for(i=0;i<n;i++){
        for(j = 0;j<=i;j++){
                    printf("*");
        }
        for(j=1;j<(2*n-2*i)-1;j++){
                printf(" ");
        }
        for(j = 0;j<=i;j++){
                    printf("*");
        }
    printf("\n");
    }
printf("\n");
}
void butterfly(int n){
    int i ,j;

    for(i=0;i<n;i++){
        for(j = 0;j<=i;j++){
                    printf("*");
        }
        for(j=1;j<(2*n-2*i)-1;j++){
                printf(" ");
        }
        for(j = 0;j<=i;j++){
                    printf("*");
        }
    printf("\n");
    }
    for(i=1;i<n;i++){
       for(j = 0;j<n-i;j++){
                    printf("*");
        }
        for(j=0;j<(2*i);j++){
                printf(" ");
        }
        for(j = 0;j<n-i;j++){
                    printf("*");
        }
    printf("\n");
    }
printf("\n");

}

void rect(int n){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
        {
            if(i==0||j==0||j==n-1||i==n-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
  printf("\n");
}
void numrect(int n){
    int i,j;
    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
            int top = i;
            int bottom =j;
            int right = (2*n-2)-j;
            int left = (2*n-2)-i;
            int min1 = top<bottom ? top:bottom;
            int min2 = left<right ? left:right;
            int mindist = min1<min2?min1:min2;
            int minimum = n-mindist;
            printf(" %d ",minimum);
        }
        printf("\n");
    }
}
int main(){
 diamond(5);
 butterfly(5);
 rect(6);
 numrect(5);
 }
