#include<stdio.h>
#include<string.h>
int main()
{
	char name[10][12];
	char str[12];//���δ��ʼ��Ϊ0���������е�Ԫ����δ֪�ġ� 
	int i,j,k;
	for(i=0;i<10;i++) 
	gets(name[i]);//��forѭ������ÿһ�е��ַ� 
	for(i=0;i<10;i++)
	{
		k=i;
    	for(j=i+1;j<10;j++)
    	{ 
	    if(strcmp(name[k],name[j])>0)
        	k=j;
        }
        if(k!=i)
        {
      	strcpy(str,name[i]);strcpy(name[i],name[k]);strcpy(name[k],str);
	    }
	   printf("%s\n",name[i]); //����ֱ��������ѭ����������� 
    }
   // printf("\n");
    //for(i=0;i<10;i++)
    //puts(name[i]);//�ڶ�������İ취 
    return 0;
}
