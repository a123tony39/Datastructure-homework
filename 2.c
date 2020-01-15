#include<stdio.h>
int main(){
    int n;
    double n1;
    while(scanf("%d",&n)!=EOF){
        n1=(double)n*1.6;
        printf("%.1lf\n",n1);
    }
    return 0;
}