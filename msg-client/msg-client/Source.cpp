#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int j = 0;
	int i = 0;
	while (1)
	{
		FILE* fp = fopen("C:\\Users\\user\\Desktop\\stream.txt", "r");
		char input[100];
		while (1)
		while (fgets(input,100,fp))
		{
			
			printf("%s\n", input);
			FILE* _fp = fopen("C:\\Users\\user\\Desktop\\logfile.txt", "a");
			fprintf(_fp, "%s", input);
			fclose(_fp);
			
		}
		fclose(fp);
	}

}