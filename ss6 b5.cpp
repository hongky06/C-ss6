#include<stdio.h>
int main(){
	
	
	int month,year;
	
    printf("nhap thang: ");
    scanf("%d",&month);
	printf("nhap nam: "); 	
	scanf("%d",&year);
	
	
	

	switch(month){
		 case  1:
		printf("thang co 31 ngay \n");
		printf("%d \n",year);
		
		break;
	  case 2:
		printf("thang co 28 hoac 29 ngay \n");
		printf("%d \n",year);
		break;
	   case 3:
	  	printf("thang co 31 ngay \n");
		printf("%d \n",year);
	      break;
	     case 4:
	  	printf("thang co 30 ngay \n");
		printf("%d \n",year);
	      break;
	  
	     case 5:
	  	printf("thang co 31 ngay \n");
		printf("%d \n",year);
	      break;
	  
	     case 6:
	  	printf("thang co 30 ngay \n");
		printf("%d \n",year);
		  
	      break;
	     case 7:
	  	printf("thang co 31 ngay\n");
		printf("%d \n",year); 
		  
	      break;
	  
	     case 8:
	  	printf("thang co 31 ngay \n");
		printf("%d \n",year);
	      break;
	  
	     case 9:
	  	printf("thang co 30 ngay \n");
		printf("%d \n",year);
	      break;
	  
	     case 10:
	  	printf("thang co 31 ngay \n");
		printf("%d \n",year);
	      break;
	  
	     case 11:
	  	printf("thang co 30 ngay \n");
		printf("%d \n",year);
	      break;
	     case 12:
	  	printf("thang co 31 ngay \n");
		printf("%d \n",year);
	      break;
	     
	     default :	  
	    printf("khong hop le");
		printf("moi nhap lai");
	}
return 0;	
}
