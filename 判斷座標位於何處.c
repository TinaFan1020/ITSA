#include<stdio.h>
int main(){
    int x=0,y=0;
    while(scanf("%d %d",&x,&y)!=EOF){
        if(x==0&&y==0){
            printf("Origin\n");
        }
        else if(x==0&&y!=0){
            printf("y-axis\n");
        }
        else if(x!=0&&y==0){
            printf("x-axis\n");
        }
        else if(x>0&&y>0){
            printf("1st Quadrant\n");
        }
        else if(x>0&&y<0){
            printf("4st Quadrant\n");
        }
        else if(x<0&&y>0){
            printf("2nd Quadrant\n");
        }
        else if(x<0&&y<0){
            printf("3rd Quadrant\n");
        }
    }
    return 0;
}
