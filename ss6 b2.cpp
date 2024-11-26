#include<stdio.h>
int main(){
int n1=0,n2=0,n3=0,n4=0,n5=0;
int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
printf("hay nhap so thu nhat: ");
scanf("%d",&n1);
printf("hay nhap cos thu hai: ");
scanf("%d",&n2);
printf("hay nhap so thu ba: ");
scanf("%d",&n3);
printf("hay nhap cos thu tu : ");
scanf("%d",&n4);
printf("hay nhap cos thu nam : ");
scanf("%d",&n5);

if (n1 % 2 == 0){
	n1 = 1;
	sum1 = 0;
    }else {
	sum1 = 1;
	n1 = 0;
    }

if (n2 % 2 == 0){
	n2 =1;
	sum2 = 0; 
	
    }else {
	sum2 = 1;
	n2 =0;
	
    }

if (n3 % 2 == 0){
	n3 = 1;
	sum3 = 0; 
	
    }else {
	sum3 = 1;
	n3 =0;
	
    }

if (n4 % 2 == 0){
	n4 = 1;
	sum4 = 0;
	  
    }else {
	sum4 = 1;
	n4=0; 
	
    }
if (n5 % 2 == 0){
	n5 = 1;
	sum5=0;
	 
    }else {
	sum5 = 1;
	n5 = 0; 
    }
printf("tong cac so le la: %d \n",sum1+sum2+sum3+sum4+sum5);
printf("tong cac so chan la: %d \n ",n1+n2+n3+n4+n5);

return 0;
}
