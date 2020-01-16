#include<stdio.h>
int main(){
    //宣告變數
    int n;
    double n1;
    //讀取資料直到檔案結尾
    while(scanf("%d",&n)!=EOF){
        //將英里轉公里
        n1=(double)n*1.6;
        //印出
        printf("%.1lf\n",n1);
    }
    return 0;
}
