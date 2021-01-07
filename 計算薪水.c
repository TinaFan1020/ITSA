#include<stdio.h>
int main(){
    int hr=0,num=0;
    while(scanf("%d %d",&hr,&num)!=EOF){
        if(hr<=60){
            printf("%.1f\n",num*hr);
        }
        else if(hr<=120){
            printf("%.1f\n",num*60+num*(hr-60)*1.33);
        }
        else{
            printf("%.1f\n",num*60+num*60*1.33+num*(hr-120)*1.66);
        }
    }
    return 0;
}
