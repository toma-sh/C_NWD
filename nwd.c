#include <stdio.h>		

int NWD(int a,int b);	

int main()				
{
	int a,b;			

	printf("Podaj dwie liczby calkowite oddzielone spacja: ");	
	scanf("%d%d",&a,&b);	
				
	NWD(a,b);							

    return 0;
}

int NWD(int a,int b)		
{
    int a1=a;int b1=b;
	while (a!=b)		
	{
		if (a>b)		
			a=a-b;

		else 			
			b=b-a;
	}

	printf("Najwiekszy wspolny dzielnik liczb %d i %d wynosi %d\n",a1,b1,a);
	
	return 0;	
}
