// program to solve 8 queens puzzle

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int p[8];
	int i,col=1,row=0,count=0;
	while (row>=0)
	{
		for (i=0;i<row;i++)
		{
			if (col==p[i] || row-i==col-p[i] || row-i==p[i]-col)
			       	break;
		}
		if (i==row)
		{
		       	p[row++]=col;
		       	if (row>=8 )
		       	{
			       	row--;
			       	printf("%2d: ",++count);
			       	for (i=0;i<8;i++)
				       	printf(" %d",p[i]);
			       	printf("\n");
		       	}
		       	else
			       	col=0;
	       	}
	       	col++;
	       	while (col>8)
	       	{
		       	row--;
		       	if (row>=0)
			       	col=p[row]+1;
		       	else
			       	break;
		}
       	}
}

