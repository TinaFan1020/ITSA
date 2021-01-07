#include<stdio.h>
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF){
        int tmp=n;
        int a=0,b=0,c=0;
        a=n/100;
        n=n%100;
        b=n/10;
        n=n%10;
        c=n;
        if((a*a*a+b*b*b+c*c*c)==tmp){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
