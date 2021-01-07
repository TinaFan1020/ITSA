#include<stdio.h>
int main(){
    float n=0;
    while(scanf("%f",&n)!=EOF){
        n=n*1.8+32;
        printf("%.1f\n",n);
    }
    return 0;
}
