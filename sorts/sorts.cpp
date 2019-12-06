#include <stdio.h>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)

int main()
{
	int a[10] = { 3, 4, 2, 6, 7, 8, 3, 4, 1, 5 };
	int n = 10;

	for (int i = 0; i < n - 1;i++)
	{
		for (int j=n-1;j>i;j--)
		{
			if (a[j - 1] > a[j])
				swap(int, a[j - 1], a[j]);
		}
	}

	for (int i = 0; i < n;i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
}