#include <stdio.h>
void pattern1(int n){
     for(int i = 1; i <=n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
void pattern2(int n){
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n-i+1; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
void pattern3(int n){
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        for(int l = 1; l <= n-i; l++){
            printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    pattern3(n);
    return 0;
}