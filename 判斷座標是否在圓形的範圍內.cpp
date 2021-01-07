#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;
int main(){
    int a=0,b=0;
    while(scanf("%d %d",&a,&b)!=EOF){
        int dis=0;
        dis=sqrt(a*a+b*b);
        if(dis<=200){
            printf("inside\n");
        }
        else{
            printf("outside\n");
        }
    }
    return 0;
}
