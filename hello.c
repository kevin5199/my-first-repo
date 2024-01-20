#include<stdio.h>
#include<conio.h>
int sum(int x,int y){
  int sum=x+y;
  return sum;
}
int main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    int Sum=sum(a,b);
    printf("sum of two number %d",Sum);
}