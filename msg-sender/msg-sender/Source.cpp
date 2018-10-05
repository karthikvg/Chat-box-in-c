#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	
	int pos = 0;

	FILE* _fp = fopen("C:\\Users\\user\\Desktop\\logfile.txt", "r");
	while (true)
	{
		char str[1000];
		scanf("%[^\n]s", str);
		fflush(stdin);
		FILE* fp = fopen("C:\\Users\\user\\Desktop\\stream.txt", "a");
		fprintf(fp, "%s\n", str);
		fclose(fp);
		while (true)
		{
			if (fgets(str, 100, _fp))
			{
				printf("\tmsg has been read>>>%s\n", str);
			}
			else
				break;
		}
	}

	fclose(_fp);
}