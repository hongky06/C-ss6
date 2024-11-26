#include<stdio.h>
int main(){
int n1,n2,n3,n4,n5;
int sum1,sum2,sum3,sum4;
printf("hay nhap so thu nhat: ");
scanf("%d",&n1);
printf("hay nhap cos thu hai: ");
scanf("%d",&n2);
printf("hay nhap so thu ba: ");
scanf("%d",&n3);
printf("hay nhap cos thu tu: ");
scanf("%d",&n4);

if (n1 % 2 ==0 ){
	sum1 = 0;
	
       }else {
	sum1 = n1;
    }

    if (n2 % 2 ==0 ){
	sum2 = 0;
	
       }else {
	sum2 = n2;
    }
 
    if (n3 % 2 ==0 ){
	sum3 = 0;
	
    }else {
	sum3 = n3;
    }

    if (n4 % 2 ==0 ){
	sum4 = 0;
	
}else {
	sum4 = n4;
}

printf ("tong cua cac so le la: %d  ",sum1+sum2+sum3+sum4);

return 0;
}


