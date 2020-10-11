#include <stdio.h> 
#include <time.h> 
int main(void) 
{ 
	struct tm *ptr,*ptr1; 
	time_t lt; 
	lt = time(NULL); 
	ptr = localtime(&lt);
	ptr1=gmtime(&lt); 
	printf("%s", asctime(ptr));
	printf("%s", asctime(ptr1)); 
	return 0; 
} 
