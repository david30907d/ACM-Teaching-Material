#include<iostream>
#include<algorithm>
using namespace std;

void msort(int so[],int a);
void mmsort(int so[],int v[],int w[],int x,int y);

int main()
{
	int a;
	while(cin>>a)
	{
		int so[a];
		for(int i=0;i<a;i++) cin>>so[i];
		msort(so,a);
		for(int i=0;i<a;i++)
		{
			cout<<so[i];
			if(i!=a-1)
		    	cout<<" ";
		 } 
		 cout<<endl;
	}
	return 0;
}

void msort(int so[],int a)
{
	if(a<=1) return;
	int  left=a/2,right=(a-a/2);
	int l[left],r[right];
	
	for(int i=0;i<left;i++) l[i]=so[i];
	for(int i=0;i<right;i++) r[i]=so[left+i];

	msort(l,left);
	msort(r,right);
	mmsort(so,l,r,left,right);
}

void mmsort(int so[],int v[],int w[],int x,int y)
{
	int m=0,n=0,i=0;
	for(i;i<(x+y)&&m<x&&n<y;i++)
	{
		if(v[m]<=w[n])
		{
			so[i]=v[m];
			m++;
		}
		else
		{
			so[i]=w[n];
			n++;
		}
	}
	while(m<x) so[i++]=v[m++];
	while(n<y) so[i++]=w[n++];
}

