#include<stdio.h>
int main(){
 int pass = 2222;
 int mk;
 printf("nhap mat khau ");
 scanf("%d",&mk);
 
 while(mk!=pass){
  printf("sai mat khau roi \n");
  scanf("%d",&mk);
 }
 printf("mat khau dung roi \n");
 return 0;
}
