#include<stdio.h>
void checkevenodd(int num){
if(num%2==0){
printf("%d is even\n",num);
}else{
printf("%d is odd\n",num);
}
}
int main(){
int num;
printf("enter a number;");
scanf("%d",&num);
checkevenodd(num);
return 0;
}
