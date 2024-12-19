#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*testin中的内容：
12345
67890	123
*/
extern int errno;

int main()
{
	FILE* fpin,* fpout,*fpout2;
	fpin = fopen("E:\\computer\\C\\test\\2024.12\\2024.12.10-file1\\testin.txt"," rt +" );
	fpout = fopen("E:\\computer\\C\\test\\2024.12\\2024.12.10-file1\\testout.txt", "wt+");
	fpout2 = fopen("E:\\computer\\C\\test\\2024.12\\2024.12.10-file1\\testout2.txt", "wt+");
	if (fpin && fpout)
	{
		//字符的读写
		while(1)
		{
			int c = fgetc(fpin);
			if(c==EOF) break;
			printf("%c",c);   //c为\n时实现换行
			fputc(c, fpout);
		}




		//读入字符串
		printf("\n");
		printf("____________________________________________________________________________________________________________________\n");
		rewind(fpin);  //重新指向文件开头
		char str[10]={0};
		while(!feof(fpin))
		{
			//printf("%d\n",strlen(str));      //第一次为6（12345\n(换行）），第二次为9（67890	123)
			if(str[0])    //加一个判断解决多打一个空行的情况
			puts(str);
			fgets(str,sizeof(str),fpin); 
			//先输出在读入，解决最后一行读入两次的情况       文件最后自动的结束符，由于第二次文件内容刚好是最大长度，结束符没有存入，读两次
			//printf("_____________\n");
		}
		rewind(fpin);
		//改进解决方案如下，通用，不会有最后一行不输出或最后一行输出两边的问题
		while(!feof(fpin))
		{
			if(fgets(str,sizeof(str),fpin)==NULL) continue;
			puts(str);
		}





		//输出到新文件中
		printf("________________________________________________________________________________________________________________\n");
		char str2[20]={0};
		rewind(fpin);
		while(!feof(fpin))
		{
			if(fgets(str2,sizeof(str2),fpin)==NULL) continue;
			fputs(str2,fpout2);
		}
		
		fclose(fpin);
		fclose(fpout);
		
	}
	else printf("error");

//读写数据块
	fpin = fopen("E:\\computer\\C\\test\\2024.12\\2024.12.10-file1\\testin2"," wb+" );
	if( fpin)
	{
		int a=1,b=5;
		fwrite(&a,sizeof(int),1,fpin);
		rewind(fpin);
		fread(&b,sizeof(int),1,fpin);
		printf("%d\n",b);
		int len=ftell(fpin);
		printf("%d\n",len);
		
		fclose(fpin);
	}
	else printf("error2");

	//printf
	fpin = fopen("E:\\computer\\C\\test\\2024.12\\2024.12.10-file1\\in","wt");
	if(fpin)
	{
		int rs=0;
		rs=fprintf(fpin,"%d",2);
		if (rs==1);
		else printf("errpr3");
		fclose(fpin);
	}

	printf("__________________________________________________\n");
	printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
	printf("%d\n",__LINE__);
	printf("%s\n",__FILE__);
	printf("%d\n",__STDC__);
	


	return 0;
}



