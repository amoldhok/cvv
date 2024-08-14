#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	int main()
	{
		int *ptr,i,size,temp,j,flag;
			printf("enter the size of array:");
			scanf("%d",&size);
			
			ptr=(int*)malloc(sizeof(int)*size);
			
				printf("enter the values in array:\n");
					for(i=0;i<size;i++)
					{
						scanf("%d",&ptr[i]);
					}
				printf("values in array:\n");
					for(i=0;i<size;i++)
					{
						printf("%d\n",ptr[i]);
					}
				printf("sorting of array:\n");
					for(i=0;i<size;i++)
					{
						for(j=0;j<size;j++)
						{
							if(ptr[i]<ptr[j])
							{
								temp=ptr[i];
								ptr[i]=ptr[j];
								ptr[j]=temp;
							}
						}
					}
				printf("array after sorting:\n");
					for(i=0;i<size;i++)
					{
						printf("%d\n",ptr[i]);
					}
	        	printf("occurance of the element:\n");
	            	int counter=1;
		    		for(i=0;i<size;i++)
		    		{
		    			if(ptr[i]==ptr[i+1])
		    			{
		    				counter++;
						}
						else
						{
								if(counter > (size/2))
							{
							printf(" majority element is %d\t --> %d\n",ptr[i],counter);
						}
							counter=1;
						}
					}
					
					for(i=0;i<size;i++)
					{
						if(ptr[i]== size)
						{
							counter++;
						}
						else
						{
							if(counter > (size/2))
							{
								flag = 1;
								break;
							}
							counter = 1;
						}
					}
					
					if(flag == 0)
					{
						printf("\n no of mejority element:");
					}
					else
					{
						printf("\n mejority element:%d",ptr[i]);
					}
	}
	

