#include<stdio.h>
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF){
        int sum=1;
        printf("1");
        for(int i=2;i<=n;i++){
            printf(" + ");
            printf("%d",i);
            sum+=i;
        }
        printf(" = ");
        printf("%d\n",sum);
    }
    return 0;
}
