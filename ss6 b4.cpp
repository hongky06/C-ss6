#include<stdio.h>
#include<math.h>
int main(){
int n1,n2,n3;
float nghiem1,nghiem2;
int denta;
   printf("hay nhap so thu nhat: ");
   scanf("%d",&n1);
   printf("hay nhap cos thu hai: ");
   scanf("%d",&n2);
   printf("hay nhap so thu ba: ");
   scanf("%d",&n3);
	
denta = n2 * n2 - (4 * n1*n3 );
if(denta > 0 ){
    nghiem1 = ((-b-sqrt(denta))/(2*a)))
	nghiem2 = ((-b+sqrt(denta))/(2*a)))
	printf ("X1 = %.1f",nghiem1);
	printf ("X2 = %.1f",nghiem2);

	
}else if(denta == 0 ){
	nghiem1 = -n2 / 2 * n1;
	nghiem2 = -n2 / 2 * n1;
	printf ("x1=x2= %.1f"nghiem1);
}else{
	printf("phuong trinh vo nghiem");
}
	
	return 0;
}

