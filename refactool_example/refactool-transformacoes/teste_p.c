#include<stdio.h>
#define VAR 64
 
main()
{
	int status;
	char file_name[25];
 
			printf("Enter the name of file you wish to delete\n");
			gets(file_name);
 
			status = remove(file_name);
 
	int var1399017 = ( status == 0 );
	#ifdef  VAR == 2
		if(var1399017){

			printf("%s file deleted successfully.\n",file_name);
		
		}
		var1399017 = !(var1399017);
	#else
		var1399017 = 1;
	#endif
	if(var1399017){

			printf("Unable to delete the file\n");
			perror("Error");
		
	}

 
	return 0;
	
	
	int numb1, numb2;
	
		printf("Enter two integers to check\n");
		scanf("%d %d",&numb1,&numb2); 
	 
		int var1367999 = (numb1==numb2);
	if (var1367999){
 //checking whether two integers are equal.
			pr#ifdef VAR == 1				 			
		 if(!(var1367999) && (numb1>numb2)){
 //checking whether numb1 is greater than numb2. 
				printf("Result: %d > %d",numb1,numb2); 
			
		}
	#endif
			else 
					printf("Result: %d > %d",numb2,numb1); 
			
		
	return 0; 
	
	
	#define PARAM1400018 int x = 1;
	int y = 2;
	
	int var1138901 = 1;
	#ifdef VAR == 1
		var1138901 =  (x == 1);
	
#else
	#define PARAM1400018 ""
#endif
int f(PARAM1400018){
	
		x++; 
	
	
}


	
	#ifdef VAR ==1
		return x &&  y;
	#else
		return x &&  z;
	#endif
}
