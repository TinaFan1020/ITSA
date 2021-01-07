#include<stdio.h>
int isprime(int m){
    int n=1;
        for(int i=1;i<=m/2;i++){
            if(m%i==0){
                n=i;
            }
        }
        if(n==1){
            return 1;
        }
        else{
            return 0;
        }
}
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF){
        int sum=0,cnt=0;
        for(int i=2;i<=500;i++){
            if(isprime(i)&&cnt<n){
                printf("%d,",i);
                sum+=i;
                cnt++;
            }
        }
        printf("\n%d\n",sum);
    }
    return 0;
}
