#include<stdio.h>
int main(){
    int a=0,b=0,r=0;
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d-%d=%d\n",a,b,a-b);
    if(a%b<0&&b>0){
        r=a%b+b;
        printf("%d/%d=%d...%d\n",a,b,a/b-1,r);
    }
    else if(a%b<0&&b<0){
        r=a%b-b;
        printf("%d/%d=%d...%d\n",a,b,a/b+1,r);
    }
    else{
        printf("%d/%d=%d...%d\n",a,b,a/b,a%b);
    }
    return 0;
}
