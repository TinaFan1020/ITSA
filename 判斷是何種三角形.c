#include<stdio.h>
int main(){
    int a=0,b=0,c=0;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        int num[4]={0};
        if(a>=b&&a>=c){
            num[2]=a;
            num[0]=b;
            num[1]=c;
        }
        else if(b>=a&&b>=c){
            num[2]=b;
            num[0]=a;
            num[1]=c;
        }
        else if(c>=a&&c>=b){
            num[2]=c;
            num[0]=a;
            num[1]=b;
        }
        if(num[0]+num[1]<=num[2]){
            printf("Not Triangle\n");
        }
        else if((num[0]*num[0]+num[1]*num[1])==num[2]*num[2]){
            printf("Right Triangle\n");
        }
        else if((num[0]*num[0]+num[1]*num[1])>num[2]*num[2]){
            printf("Acute Triangle\n");
        }
        else if((num[0]*num[0]+num[1]*num[1])<num[2]*num[2]){
            printf("Obtuse Triangle\n");
        }
    }
    return 0;
}
