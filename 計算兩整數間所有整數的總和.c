#include<stdio.h>
int main(){
    long int a=0,b=0;
    while(scanf("%ld %ld",&a,&b)!=EOF){
        long int ans=0;
        if(a>b){
           long int tmp=0;
           tmp=a;
           a=b;
           b=a;
        }
        for(int i=a;i<=b;i++){
            ans+=i;
        }
        printf("%ld\n",ans);
    }
    return 0;
}
