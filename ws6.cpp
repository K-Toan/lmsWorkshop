#include<bits/stdc++.h>

void sortArrayAsc(float arr[], int n)
{
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			if(arr[i] > arr[j])
			{
				float temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
}

void sortArrayDesc(float arr[], int n)
{
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			if(arr[i] < arr[j])
			{
				float temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
}

void getArray(float arr[], int n)
{
	for(int i = 0; i < n; i++)
		scanf("%f", &arr[i]);
}

void display(float arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%.1f ", arr[i]);
	}
}

int main()
{
	float arr[100];
	int c, n; scanf("%d", &c);
	switch(c)
	{
		case 1:
			scanf("%d", &n);
			getArray(arr, n);
			printf("1. Read in an 8-element array of: 10.5 20.1 5.5 6.8 9.6 0.0 -1.5 -7.0, then print it out:\n");
			display(arr, n);
			break;
		case 2:
			scanf("%d", &n);
			getArray(arr, n);
			sortArrayAsc(arr, n);
			printf("2. Read in an 8-element array of: 10.5 20.1 5.5 6.8 9.6 0.0 -1.5 -7.0, then print out the sorted array in assending order:\n");
			display(arr, n);
			break;
		case 3:
			scanf("%d", &n);
			getArray(arr, n);
			float res; scanf("%f", &res);
			printf("3. Read in an 8-element array of: 10.5 20.1 5.5 6.8 9.6 0.0 -1.5 -7.0, and a number 6.8, print out the position of the element:\n");
			for(int i = 0; i < n; i ++)
				if(arr[i] == res)
					printf("element found: %dth", i + 1);
			break;
		case 4:
			scanf("%d", &n);
			getArray(arr, n);
			sortArrayDesc(arr, n);
			printf("4. Read in an 8-element array of: 10.5 20.1 5.5 6.8 9.6 0.0 -1.5 -7.0, then print out the sorted array in descending order:\n");
			display(arr, n);
			break;
		case 0:
			printf("5. Read in 0 then exit:\nExit");
			break;
	}
} 
