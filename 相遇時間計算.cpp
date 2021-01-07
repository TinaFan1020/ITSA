#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;
int main(){
    int dis=0;
    while(scanf("%d",&dis)!=EOF){
        double time=0;
        dis=dis*100;
        time=dis/(100-30*2.54);
        time=ceil(time);
        printf("%d\n",(int)time);
    }
    return 0;
}
