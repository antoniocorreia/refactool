#include<stdio.h>
#define SIZE 64
 
main()
{
	int status;
	char file_name[25];
 
			printf("Enter the name of file you wish to delete\n");
			gets(file_name);
 
			status = remove(file_name);
 
	#ifdef SIZE == 2
		if( status == 0 ){
			printf("%s file deleted successfully.\n",file_name);
		}else
	#endif
		{
			printf("Unable to delete the file\n");
			perror("Error");
		}
 
	return 0;
	
	
	int numb1, numb2;
	
		printf("Enter two integers to check\n");
		scanf("%d %d",&numb1,&numb2); 
	 
		int var4933039 = (numb1==numb2);
	if (var4933039){
 //checking whether two integers are equal.
			printf("Result: %d = %d",numb1,numb2); 
	
		
	}
	#ifdef SIZE == 1				 			
		 if(!(var4933039) && (numb1>numb2)){
 //checking whether numb1 is greater than numb2. 
				printf("Result: %d > %d",numb1,numb2); 
			
		}
	#endif
			else 
					printf("Result: %d > %d",numb2,numb1); 
			
		
	return 0; 
	
	int x = 1;
	int y = 2;
	
	int var4979905 = 1;
	#ifdef SIZE == 1
		var4979905 =  (x == 1);
	#endif
	if (var4979905) {
		x++; 
	
	}

	
	return x
	#ifdef SIZE ==1
		&& y
	#else
		&& z
	#endif
	;
}