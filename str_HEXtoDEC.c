#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long str_hextodec(char *str);

int main(int argc,char *argv[])
{
	int ret=-1;
	int i=0;
	long result=0;
	
	if(argc<2){
		printf("example:%s hex/dec\n",argv[0]);
		return -1;
	}
	for(i=argc-1;i>0;i--){
		if(argv[1][1] == 'x'||'X' ==argv[1][1]){
			result=str_hextodec(&argv[1][2]);	
		}
		else
			result=atoi((const char*)&argv[1]);
	}
	printf("%ld \n",result);

	return ret;
}

long str_hextodec(char *str)
{
	int i=0;
	long temp=0;
	if(!str)return -1;
	for(i=strlen(str)-1;i>=0;i--){
		switch(*str++){
		case '0':temp+=0*(1<<(i<<2));break;
		case '1':temp+=1*(1<<(i<<2));break;
		case '2':temp+=2*(1<<(i<<2));break;
		case '3':temp+=3*(1<<(i<<2));break;
		case '4':temp+=4*(1<<(i<<2));break;
		case '5':temp+=5*(1<<(i<<2));break;
		case '6':temp+=6*(1<<(i<<2));break;
		case '7':temp+=7*(1<<(i<<2));break;
		case '8':temp+=8*(1<<(i<<2));break;
		case '9':temp+=9*(1<<(i<<2));break;
		case 'A':
		case 'a':temp+=10*(1<<(i<<2));break;
		case 'B':
		case 'b':temp+=11*(1<<(i<<2));break;
		case 'C':
		case 'c':temp+=12*(1<<(i<<2));break;
		case 'D':
		case 'd':temp+=13*(1<<(i<<2));break;
		case 'E':
		case 'e':temp+=14*(1<<(i<<2));break;
		case 'F':
		case 'f':temp+=15*(1<<(i<<2));break;
		default:break;
		}
	}

	return temp;
}
