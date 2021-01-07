#include<stdio.h>
int main(){
    int a=0;
    while(scanf("%d",&a)!=EOF){
        if(a>31){
            printf("Value of more than 31\n");
        }
        else{
            long int ans=1;
            for(int i=1;i<=a;i++){
                ans=2*ans;
            }
            printf("%ld\n",ans);
        }
    }
    return 0;
}
