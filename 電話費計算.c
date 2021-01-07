#include<stdio.h>
int main(){
    int a=0;
    double ans=0.0;
    while(scanf("%d",&a)!=EOF){
        if(a<=800){
            printf("%.1f\n",a*0.9);
        }
        else if(a<1500){
            printf("%.1f\n",a*0.9*0.9);
        }
        else{
            printf("%.1f\n",a*0.9*0.79);
        }
    }
    return 0;
}
