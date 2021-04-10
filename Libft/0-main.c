#include "libft.h"
#include <stdlib.h>

int main (void)
{
	
	// ----- FT_ATOI -----

	//char num[] = "9223372036854775807";
	//int max_int = 2147483647;
	//Range 64 bit sined:: -9223372036854775808 to 9223372036854775807
	//Estos eran los numeros a partir de los cuales daban cosas distintas el atoi y mi funcionu
	char num[] = "-2147483650";
	printf("%d\n", ft_atoi(num));
	printf("%d\n", atoi(num));
	
	// ----- FT_MEMSET -----
	
	// char	ptr[] = "hola pepito";
	// printf("%s\n", (char*)memset(ptr, 65, 5));
	// printf("%s\n", (char*)ft_memset(ptr, 65, 5));


	// ----- FT_BZERO -----

	// char	ptr[] = "hola pepito";
	// ft_bzero(ptr+2,3);
	// printf("%s\n", ptr);
	// char	ptr2[] = "hola pepito";
	// bzero(ptr2+2,3);
	// printf("%s\n", ptr2);

	// ----- FT_MEMCPY -----

	// char a[] = "Hello World";
	// char b[] = "World";
	// printf("%s\n", memcpy(a, b, 8));
	// printf("%s\n", ft_memcpy(a, b, 8));


	// ----- FT_MEMCCPY -----

	// char a[] = "Hello World";
	// char b[] = "Goodbye World";
	// printf("%s\n", memccpy(a, b, 'd', 8));
	// printf("%s\n", ft_memccpy(a, b, 'd', 8));


	// ----- FT_MEMMOVE -----

	// char c[] = "Hello World";
	// char d[] = "World";
	// printf("%s\n", memmove(c, d, 8));
	// printf("%s\n", ft_memmove(c, d, 8));

	// char str[] = "memmove can be very useful......";
    // char *str2 = str + 15;
   	// ft_memcpy(str+20, str2, 11);
    // printf ("%s\n", str);


	// ----- FT_MEMCHR -----

	// printf("%s\n", memchr("Hello World", 'l', 3));
	// printf("%s\n", ft_memchr("Hello World", 'l', 3));


	// ----- FT_MEMCMP -----
	
	// char h[] = "zzz bbb kkk";
	// char p[] = "aaa bbb kkk";
	// printf("%d\n", memcmp(h, p, 9));
	// printf("%d\n", ft_memcmp(h, p, 9));
	

	// ----- FT_STRLEN -----

	// printf("%lu\n", strlen("HOLA"));
	// printf("%lu\n", ft_strlen("HOLA"));


	// ----- FT_STRLCPY -----
	
	// char dest[10] = "hola";
	// char src[] = "Ho6yt543trtete";
	// printf("función original: %lu\n", strlcpy(dest, src, 5)); 
	// printf("función mía: %lu\n", ft_strlcpy(dest, src, 5));
	

	// ----- FT_STRLCAT -----

	// char dest[100] = "";
    // char src[] = "A";
	// printf("longitud función original: %lu\n", strlcat(dest, src, 100));
	// printf("longitud función mía: %lu\n", ft_strlcat(dest, src, 0));
	// printf("%s\n", dest);


	// ----- FT_STRCHR -----

	// printf("%s\n", strchr("HAOLA", 65));
	// printf("%s\n", ft_strchr("HAOLA", 65));


	// ----- FT_STRRCHR -----

	// printf("%s\n", strrchr("AHOLA", 65));
	// printf("%s\n", ft_strrchr("AHOLA", 65));


	// ----- FT_STRNSTR -----

	// char	*largestring = "Foo Bar Baz";
	// char	*smallstring = "Bar";
	// printf("%s\n", strnstr(largestring, smallstring, 3));
	// printf("%s\n", ft_strnstr(largestring, smallstring, 3));
	

	// ----- FT_STRNCMP -----

	// char h[] = "aaa bbb kkk";
	// char p[] = "aaa zzz kkk";
	// printf("%d\n", strncmp(h, p, 9));
	// printf("%d\n", ft_strncmp(h, p, 9));
	
	
	// ***** FT_ISALPHA -----

	// printf("%d\n", isalpha(122));	
	// printf("%d\n", ft_isalpha(122));


	// ----- FT_ISDIGIT -----
	
	// printf("%d\n", isdigit('e'));	
	// printf("%d\n", ft_isdigit('e'));


	// ----- FT_ISALNUM -----

	// printf("%d\n", isalnum(' '));	
	// printf("%d\n", ft_isalnum(' '));


	// ----- FT_ISASCII -----

	// printf("%d\n", isascii('g'));	
	// printf("%d\n", ft_isascii('g'));


	// ----- FT_ISPRINT -----

	// printf("%d\n", isprint(127));	
	// printf("%d\n", ft_isprint(127));


	// ----- FT_TOUPPER -----

	// printf("%d\n", toupper('E'));	
	// printf("%d\n", ft_toupper('E'));

	
	// ----- FT_TOLOWER -----

	// printf("%d\n", tolower('Z'));	
	// printf("%d\n", ft_tolower('Z'));		
}