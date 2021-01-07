#include<stdio.h>
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF){
        int max=1;
        for(int i=2;i<n;i++){
            int flag=0;
            for(int j=2;j<=i/2;j++ ){
                if(i%j==0){
                    flag=1;
                }
            }
            if(flag==0){
                if(max<i){
                    max=i;
                }
            }
        }
        printf("%d\n",max);
    }
    return 0;
}
