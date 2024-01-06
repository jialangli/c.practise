#include<stdio.h>
// 递归
int gcd(int a,int b){
    return (b==0)?a:gcd(b,a%b); 
} 
int main(){
    int a=0,b=0;
    while(a==0&&b==0){
        printf("请输入a，b的值：");
        scanf("%d%d",&a,&b);
        printf("这两个数的公约数=%d\n",gcd(a,b)) ;
    }
    return 0;
}
