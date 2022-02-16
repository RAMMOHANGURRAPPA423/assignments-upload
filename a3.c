#include <stdio.h>
int main(){
    const int n=5;
    int i,j;
    for(i=n;i>=1;i--){
        for(j=n;j>=1;j--){
            if(i>=j)
            printf("*");
            else
            printf("__ ");
        }
        printf("\n");
    }
    return 0;
}
