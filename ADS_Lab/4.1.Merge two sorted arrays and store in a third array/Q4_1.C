#include <stdio.h>
#include<conio.h>
int main()
{
    int a1[10],a2[10],res[20],resfinal[20];
    int m,n,i,j,k,temp;
    clrscr();
    printf("\n enter the limit of array 1: ");
    scanf("%d",&m);
    printf("\nEnter the sorted array 1 : \n");
    for(i=0;i<m;i++)
    {
	scanf("%d",&a1[i]);
    }
    printf("\n enter the limit of array 2: ");
    scanf("%d",&n);
    printf("\nEnter the sorted array 2 : \n");
    for(j=0;j<n;j++)
    {
	scanf("%d",&a2[j]);
    }
    i=j=k=0;
    while(i<m && j<n)
    {
    if(a1[i]<a2[j])
    {
	res[k]=a1[i];
	i++;
	k++;
    }
    else
    {
	res[k]=a2[j];
	j++;
	k++;
    }
    }
    while(i<m)
    {
	res[k]=a1[i];
	i++;
	k++;
    }
    while(j<n)
    {
	res[k]=a2[j];
	j++;
	k++;
    }
    printf("\n Array after merging  : \n");
    for(k=0;k<m+n;k++)
    {
	    printf(" %d ", res[k]);
    }
    getch();
    return 0;
}