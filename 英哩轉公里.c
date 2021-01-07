#include<stdio.h>
int main(){
    int dis=0;
    double ans=0.0;
    while(scanf("%d",&dis)!=EOF){
        ans=dis*1.6;
        printf("%.1f\n",ans);
    }
    return 0;
}
