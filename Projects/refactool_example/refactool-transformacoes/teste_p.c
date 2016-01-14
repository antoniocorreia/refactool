#include<stdio.h>
#define VAR 64
 
main()
{
	int status;
	char file_name[25];
 
			printf("Enter the name of file you wish to delete\n");
			gets(file_name);
 
			status = remove(file_name);
 
	int vara692941fb0374785a6d686add2eb3045 = ( status == 0 );
	#ifdef VAR == 2
		if(vara692941fb0374785a6d686add2eb3045){
			printf("%s file deleted successfully.\n",file_name);
		}
		vara692941fb0374785a6d686add2eb3045 = !(vara692941fb0374785a6d686add2eb3045);
	#else
		vara692941fb0374785a6d686add2eb3045 = 1;
	#endif
	if(vara692941fb0374785a6d686add2eb3045){
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
	
	int varc4b82e5f4a404f7cb8894b732bcdf2cb = 1;
	#ifdef VAR == 1
		varc4b82e5f4a404f7cb8894b732bcdf2cb =  (x == 1);
	#endif
	if (varc4b82e5f4a404f7cb8894b732bcdf2cb) {
		x++; 
	}
	
	#ifdef VAR == 1
		return x && y;
	#else
		return x && z;
	#endif
	
	
}
