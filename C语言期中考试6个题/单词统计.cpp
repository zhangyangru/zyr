#include <stdio.h>
int main()
{
	char c[80];
	int i,n=0,word=0;
    while(gets(c)!=NULL)//ĩβ�Զ���һ��'\0'
{
	n=0;//ע�⽫n��0
	word=0;
	for(i=0;c[i];i++)
	{
	  if(c[i]==' ')
	  {
	    n=0;
	    if(c[i+1]>=97)
	    c[i+1]=c[i+1]-32;
      }
	    else if(n==0)
    	{
		n=1;
		    if(c[i]>='A'&&c[i]<='Z')
            word++;//Ϊʲôif�ĳ�(c[i]>'A')�Ͳ�����һ�������ˣ�
	    }
    }
    printf("%d words. ",word);
    puts(c);
}
    return 0;
}//��ͬ������˳�򣬽����ͬ��
