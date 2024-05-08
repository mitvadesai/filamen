#include<stdio.h>
 main()
{
	char a[100];
	int i,length=0,cmp=0;
	
	printf("Enter any string : x");
	scanf("%s",&a);
	
	for(i=0;a[i]!=0;i++)
	{
		length++;
	}
	for(i=0;i<length;i++)
	{
		if(a[i] == a[length-i-1])
		{
			cmp=1;
		}
		else{
			cmp=0;
		}
	}
	if(cmp==1){
		printf("Given string is palindrom");
	}
	else{
		printf("Given string is not palindrom");
	}

}