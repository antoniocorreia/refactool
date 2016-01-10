#include<stdio.h>
#define SIZE 64
 
main()
{
	int status;
	char file_name[25];
 
			printf("Enter the name of file you wish to delete\n");
			gets(file_name);
 
			status = remove(file_name);
 
	int var1348254 = ( status == 0 );
	#ifdef  SIZE == 2
		if(var1348254){

			printf("%s file deleted successfully.\n",file_name);
		
		}
		var1348254 = !(var1348254);
	#else
		var1348254 = 1;
	#endif
	if(var1348254){

			printf("Unable to delete the file\n");
			perror("Error");
		
	}

 
	return 0;
	
	
	int numb1, numb2;
	
		printf("Enter two integers to check\n");
		scanf("%d %d",&numb1,&numb2); 
	 
		int var1317002 = (numb1==numb2);
	if (var1317002){
 //checking whether two integers are equal.
			pr#ifdef SIZE == 1				 			
		 if(!(var1317002) && (numb1>numb2)){
 //checking whether numb1 is greater than numb2. 
				printf("Result: %d > %d",numb1,numb2); 
			
		}
	#endif
			else 
					printf("Result: %d > %d",numb2,numb1); 
			
		
	return 0; 
	
	
	#define PARAM1348254 int x = 1;
	int y = 2;
	
	int var0133263 = 1;
	#ifdef SIZE == 1
		var0133263 =  (x == 1);
	
#else
	#define PARAM1348254 ""
#endif
int f(PARAM1348254){
	
		x++; 
	
	
}


	
	#ifdef SIZE ==1
		return x &&  y;
	#else
		return x &&  z;
	#endif
}