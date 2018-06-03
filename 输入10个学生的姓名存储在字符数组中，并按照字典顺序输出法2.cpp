#include<stdio.h>
#include<string.h>
int main()
{
	char name[10][12];
	char str[12];//如果未初始化为0，则数组中的元素是未知的。 
	int i,j,k;
	for(i=0;i<10;i++) 
	gets(name[i]);//用for循环处理每一行的字符 
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
	   printf("%s\n",name[i]); //可以直接在排序循环中输出名字 
    }
   // printf("\n");
    //for(i=0;i<10;i++)
    //puts(name[i]);//第二种输出的办法 
    return 0;
}
