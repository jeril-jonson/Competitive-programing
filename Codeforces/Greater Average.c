//#https://www.codechef.com/START53D/problems/AVGPROBLEM

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i=0,a,b,c,s,d;
	scanf("%d",&t);
	while(i<t)
	{
	    scanf("%d%d%d",&a,&b,&c);
	    s=a+b;
	    d=2*c;
	    if(d<s)
	    {
	        printf("\nYES");
	    }
	    else{
	        printf("\nNO");
	    }
	    i++;
	}
	return 0;
}

