#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n>2&&n<6){
            printf("Spring\n");
        }
        else if(n>5&&n<9){
            printf("Summer\n");
        }
        else if(n>8&&n<12){
            printf("Autumn\n");
        }
        else if(n>11||n<3){
            printf("Winter\n");
        }
    }
    return 0;
}