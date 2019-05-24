#include <stdio.h>

void main()
{
    printf("123\\456\\\\78\n");   // 123\456\\78  >>>>notice the amount of slashes needed
   
	printf("123\"456\"78\n");       //  123"456"78
  
	printf("The score of 80%%\n");   // The score of 80%, notice the double %%
    
	printf("To print a \" type \\\"\n");   // To print a " type \"    << black slash placement
    
	
}