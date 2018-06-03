#include<stdio.h>//ÓĞ´íÎó
int main()
{
	enum Color{red,yellow,blue,white,black};
	enum Color i,j,k,pri;
	int n,loop;
	n=0;
	for(i=red;i<=black;i++)
    	for(j=red;j<=black;j++)
	  if(i!=j)
	  {
	  	for(k=red;k<=black;k++)
	  	if((k!=i)&&(k!=j))
	  	{
	  	n=n+1;
	  	printf("%d\n",n);
	  	for(loop=1;loop<=3;loop++)
	  	{
		  switch(loop)
		  {
		  	case 1:pri=i;break;
		  	case 2:pri=j;break;
		  	case 3:pri=k;break;
		  }
		  switch(pri)
		  {
		  	case red:printf("%s","red");break;
		  	case yellow:printf("%s","yellow");break;
	  		case blue:printf("%s","blue");break;
 			case white:printf("%s","white");break;
			case black:printf("%s","black");break;
		  }
        }
	    }
	  }
}
