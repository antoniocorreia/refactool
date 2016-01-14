#include<stdio.h>
#define VAR 64
 
main()
{
	int status;
	char file_name[25];
 
			printf("Enter the name of file you wish to delete\n");
			gets(file_name);
 
			status = remove(file_name);
 
	int var8bc3f29435f44d30bddaca8cbc9b80d4 = ( status == 0 );
	#ifdef VAR == 2
		if(var8bc3f29435f44d30bddaca8cbc9b80d4){
			printf("%s file deleted successfully.\n",file_name);
		}
		var8bc3f29435f44d30bddaca8cbc9b80d4 = !(var8bc3f29435f44d30bddaca8cbc9b80d4);
	#else
		var8bc3f29435f44d30bddaca8cbc9b80d4 = 1;
	#endif
	if(var8bc3f29435f44d30bddaca8cbc9b80d4){
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
	
	int varec3dc5949c324b109271703273a2ec26 = 1;
	#ifdef VAR == 1
		varec3dc5949c324b109271703273a2ec26 =  (x == 1);
	#endif
	if (varec3dc5949c324b109271703273a2ec26) {
		x++; 
	}
	
	#ifdef VAR == 1
		return x && y;
	#else
		return x && z;
	#endif
	
	
}
