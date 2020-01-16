#include<stdio.h>
int main(){
    //宣告變數
    int n;
    //讀取資料直到檔案結尾
    while(scanf("%d",&n)!=EOF){
        //若在各自的月份則印出
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
