#include <stdio.h>
#include <stdlib.h>




int main() 
{
    char c[10000];
    int a,m=0,l=0;

   fgets(c,10000,stdin);
   a=sizeof(c);

  while(m<=a)

{
   
   if(c[m-3]=='s' && c[m-2]=='t' && c[m-1]=='o' && c[m]=='p')
 	{

      		for(l=0;l<m-3;l++) {
     			if(c[l]<='z' && c[l]>='a')
    			{
    		  		c[l]=c[l]-32;
	       		 }

                       printf("%c",c[l]);
    
              	}
  	 }
   
   
  m++;
   
 }
                                                                                                                                                                                                                                                                                            return 0; 
}

