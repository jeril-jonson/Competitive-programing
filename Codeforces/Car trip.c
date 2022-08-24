#include <stdio.h>

int main(void) {
   int t,i=0,x;
   scanf("%d",&t);
   while(i<t)
   {
       scanf("%d",&x);
       if(x<300)
       {
           printf("\n3000");
       }
       if(x==300)
       {
           printf("\n3000");
       }
       if(x>300)
       {
           printf("\n%d",10*x);
       }
       i++;
   }
	return 0;
}

