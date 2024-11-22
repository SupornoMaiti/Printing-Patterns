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
void pattern4(int n){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            printf(" ");
        }
        for(int k=0;k<2*n-(2*i+1);k++){
            printf("*");
        }
        for(int l = 0; l<i; l++){
            printf(" ");
        }
        printf("\n");
    }
    
}
void pattern5(int n){
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
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i; j++){
            printf(" ");                 
        }
        for(int k=0;k<2*n-(2*i+1);k++){
            printf("*");
        }
        for(int l = 0; l<i; l++){
            printf(" ");
        }
        printf("\n");
    }
}
void pattern6(int n){
    for (int i = 1; i <= 2 * n - 1; i++) {
        if (i <= n) { // Upper part of the triangle
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
        } else { // Lower part of the triangle
            for (int j = 1; j <= 2 * n - i; j++) {
                printf("*");
            }
        }
        printf("\n");
    }
}
void pattern7(int n){
    int start = 0;
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            start = 0;
        }
        else start = 1;
    for(int j = 0;j <= i; j++){
        printf("%d ",start);
        start = 1-start;
    }
printf("\n");
  } 
}
void pattern8(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d",j);
        }
        for(int j = 1; j <= 2*(n-i); j++){
            printf(" ");
        }
        for(int k = i; k >= 1; k-- ){
            printf("%d",k);
        }
    printf("\n");    
    }        
}
void pattern9(int n){
    int p = 1;
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= i; j++){
            printf("%d ",p);
            p++;
        }
        printf("\n");
    }
}
void pattern10(int n){
    for(int i = 0; i < n; i++){
        for(char j = 'A';j <= 'A'+i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}
int main(){
    int n=10;
   // rintf("enter a number : ");
    //scanf("%d",&n);
    pattern10(n);
    return 0;
}
