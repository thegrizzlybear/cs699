#include <stdio.h>
#include "module.h"

void Foo();

int main(int argc, char ** argv)
{
	if (argc == 1 )
	{
		myprint("No cmd args, so I print Hello, world ");
		myprint("\n");
		Foo() ;
	}
	else
	{	
		printf("The new string is %s\n",argv[1]) ;
	}
	return 0;
}


void Foo()
{
	printf("Some random function") ;
}
