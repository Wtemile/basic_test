#include<stdio.h>
extern int errno;

int main()
{
	FILE* fpin, * fpout;
	fpin = fopen("testin.txt"," rt +" );
	fpout = fopen("testout.txt", "wt+");
	if (fpin && fpout)
	{
		while (!feof(fpin))
		{
			int c = fgetc(fpin);
			fputc(c, fpout);
		}
		fclose(fpin);
		fclose(fpout);
	}
	else printf("error");

	return 0;
}