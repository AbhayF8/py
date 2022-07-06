#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);	
	for (int i = 0; i < t; i++)
	{
		int r,c,rowshape=0,columnshape=0,temp=0;
		scanf("%d",&r);
		scanf("%d",&c);
		char array[r][c];
		for (int j = 0; j < r; j++)
		{
			scanf("%s",array[j]);
		}
		// Row search
		for (int j = 0; j < r; j++)
		{
			for (int k = 0; k < c; k++)
			{
				if (array[j][k]=='#')
				{
					rowshape++;
					if (array[j][k+1]=='.')
					{
						if (rowshape>temp)
						{
							temp=rowshape;
						}
						rowshape=0;
					}
				}
			}
			if (rowshape>temp)
			{
				temp=rowshape;
			}
			rowshape=0;
		}
		if (temp>rowshape)
		{
			rowshape=temp;
		}
		temp=0;
		// Column Search
		for (int j = 0; j < r; j++)
		{
			for (int k = 0; k < c; k++)
			{
				if (array[k][j]=='#')
				{
					columnshape++;
					if (array[k+1][j]=='.')
					{
						if (columnshape>temp)
						{
							temp=columnshape;
						}
						columnshape=0;
					}
				}
			}
			if (temp<columnshape)
			{
				temp=columnshape;
			}
			columnshape=0;
		}	
		if (temp>columnshape)
		{
			columnshape=temp;
		}
		temp=0;
		
		// Compare row and column shape
		if (rowshape>columnshape)
		{
			printf("%d\n",rowshape);
		}
		else
		{
			printf("%d\n",columnshape);
		}
	}
	return 0;
}
