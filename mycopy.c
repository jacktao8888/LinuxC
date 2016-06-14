#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#define null 0

int main(int argc,char *argv[])
{

    FILE *fp1=fopen(argv[1],"r");
    FILE *fp2=fopen(argv[2],"w+"); 
    int ch=0;
    char* cp=null;

    while((ch=fgetc(fp1))!=EOF)
    {
        fputc(ch,fp2);
    }

    while(fgets(cp,5,fp2)!=null)
        puts(cp);   //这里没能输出到标准输出（终端显示）上

    fclose(fp1);
    fclose(fp2);

    return 0; 
}
