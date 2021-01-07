#include<stdio.h>
int main(){
    int a=0,b=0,h=0;
    while(scanf("%d %d %d",&a,&b,&h)!=EOF){
        printf("Trapezoid area:%.1f\n",(a+b)*h*0.5);
    }
    return 0;
}
