#include<stdio.h>
#define VAR 64
 
main()
{
	int status;
	char file_name[25];
 
			printf("Enter the name of file you wish to delete\n");
			gets(file_name);
 
			status = remove(file_name);
 
	#ifdef VAR == 2
		if( status == 0 ){
			printf("%s file deleted successfully.\n",file_name);
		}else
	#endif
		{
			printf("Unable to delete the file\n");
			perror("Error");
		}
 
	
	
	
	int numb1, numb2;
	
		printf("Enter two integers to check\n");
		scanf("%d %d",&numb1,&numb2); 
	 
		if(numb1==numb2){ //checking whether two integers are equal.
			printf("Result: %d = %d",numb1,numb2); 
	
		}
		#ifdef VAR == 1				 
			else if(numb1>numb2){ //checking whether numb1 is greater than numb2. 
				printf("Result: %d > %d",numb1,numb2); 
			}
		#endif
			else 
					printf("Result: %d > %d",numb2,numb1); 
			
		
	
	
	int x = 0;
	int y = 0;
	
	#ifdef VAR == 1
		if (x == 1)
	#endif
	{
		x++; 
	}
	
	return x
	#ifdef VAR == 1
		&& y
	#else
		&& z
	#endif
	;
	
	
}
