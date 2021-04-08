#include "libft.h"
#include <stdlib.h>

int main (void)
{	
	char str[] = "   \n \t-2147483610089";
	
	printf("%d\n",ft_atoi(str));
	printf("%d\n",atoi(str));
	
	return(0);
}