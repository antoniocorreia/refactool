void main()
{
	int x = 1;
	int y = 2;
	
	#ifdef x == 1
		if (x == 1)
	#endif
	{
		x++; 
	}
	
	#ifdef x == 1
		if (x == 1){
	#else
		if (x == 2){
	#endif
		x++; 
	}
	
	#ifdef x ==1
		return x &&  y;
	#else
		return x &&  z;
	#endif
}

