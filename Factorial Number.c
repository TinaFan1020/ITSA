#include<stdio.h>
int main(){
    int cnt=0;
    scanf("%d",&cnt);
    for(int i=0;i<cnt;i++){
        int n=0,sum=1;
        scanf("%d",&n);
        while(n>1){
            sum=sum*n;
            n--;
        }
        printf("%d\n",sum);
    }
    return 0;
}
