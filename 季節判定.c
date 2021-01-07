#include<stdio.h>
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF){
        if(n<=5&&n>2){
            printf("Spring\n");
        }
        else if(n<=8&&n>5){
            printf("Summer\n");
        }
        else if(n<=11&&n>8){
            printf("Autumn\n");
        }
        else {
            printf("Winter\n");
        }
    }
    return 0;
}
