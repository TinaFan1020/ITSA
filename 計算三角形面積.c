#include<stdio.h>
int main(){
    int a=0,b=0;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%.1f\n",(a*b)*0.5);
    }
    return 0;
}
