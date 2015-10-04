#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int square3_3(int );
int row(int );
int column(int );
int a[9][9];
int main(int argc, char *argv[]) 
{
	int i,j,k,w,m,n,h;
	
	while(scanf("%d",&a[0][0])!=EOF)
	{
		for(i=0;i<9;i++)
		{
			if(i==0)
			{
				for(j=1;j<9;j++)
				{
					scanf("%d",&a[i][j]);
				}	
			}
			else
			{
				for(j=0;j<9;j++)
				{
					scanf("%d",&a[i][j]);
				}
			}
		}
		
		h=0;
		h=square3_3(h);
		h=row(h);
		h=column(h);

		if(h>0)
		{
			printf("no\n");
		}
		else
		{
			printf("yes\n");
		}
		
	}
	return 0;
}
int square3_3(int h)
{
	int i,j,k,w,m,n;
	for(k=0;k<7;k+=3)
	{
		for(w=0;w<7;w+=3)
		{
			for(i=k;i<k+3;i++)
			{
				for(j=w;j<w+3;j++)
				{
					for(m=k;m<k+3;m++)
					{
						for(n=w;n<w+3;n++)
						{
							if(a[i][j]==a[m][n]&&(i!=m||j!=n))
							{
								h++;
							}
						}
						if(h>0)
						{
							break;
						}
					}
					if(h>0)
					{
						break;
					}
				}
				if(h>0)
				{
					break;
				}
			}
			if(h>0)
			{
				break;
			}
		}
		if(h>0)
		{
			break;
		}
	}
	return h;	
}
int row(int h)
{
	int i,j,k,w,m,n;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			for(n=j;n<9;n++)
			{
				if(a[i][j]==a[i][n]&&j!=n)
				{
					h++;
				}
			}
			if(h>0)
			{
				break;
			}
		}
		if(h>0)
		{
			break;
		}
	}
	return h;
}
int column(int h)
{
	int i,j,k,w,m,n;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			for(n=j;n<9;n++)
			{
				if(a[j][i]==a[n][i]&&j!=n)
				{
					h++;
				}
			}
			if(h>0)
			{
				break;
			}
		}
		if(h>0)
		{
			break;
		}
	}
	return h;
}
