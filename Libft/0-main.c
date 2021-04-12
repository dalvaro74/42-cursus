#include "libft.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main (void)
{
	
	// ----- FT_ATOI -----

	//char num[] = "9223372036854775807";
	//int max_int = 2147483647;
	//Range 64 bit sined:: -9223372036854775808 to 9223372036854775807
	//Estos eran los numeros a partir de los cuales daban cosas distintas el atoi y mi funcionu
	// char num[] = "-2147483650";
	// printf("%d\n", ft_atoi(num));
	// printf("%d\n", atoi(num));
	
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

	// char dst[] = "abcdefgh";
	// char src[] = "123466666666666";
	// printf("%s\n", memcpy(dst, src, 6));
	// printf("%s\n", ft_memcpy(dst, src, 6));


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
	
	char h[] = "zzz bbb kkk";
	char p[] = "aaa bbb kkk";
	printf("%d\n", memcmp(h, p, 9));
	printf("%d\n", ft_memcmp(h, p, 9));
	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf("%d\n", memcmp(s2, s3, 3));
	printf("%d\n", ft_memcmp(s2, s3, 3));
	

	// ----- FT_STRLEN -----

	// printf("%lu\n", strlen(""));
	// printf("%lu\n", ft_strlen(""));


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

	// printf("%p\n", strchr("HAOLAOXXX", '\0'));
	// printf("%p\n", ft_strchr("HAOLAOXXX", '\0'));
	// printf("%p\n", strchr("HAOLAOXXX", ' '));
	// printf("%p\n", ft_strchr("HAOLAOXXX", ' '));
	// printf("%s\n", strchr("bonjour", 'b'));
	// printf("%s\n", ft_strchr("bonjour", 'b'));
	// printf("%s\n", strchr("HAOLAOXXX", 'O'));
	// printf("%s\n", ft_strchr("HAOLAOXXX", 'O'));
	// printf("%p\n", strchr("tripouille", 372));
	// printf("%p\n", ft_strchr("tripouille", 372));
	// printf("%c\n", 256);


	// ----- FT_STRRCHR -----
	// printf("%p\n", strrchr("HAOLAOXXX", '\0'));
	// printf("%p\n", ft_strrchr("HAOLAOXXX", '\0'));
	// printf("%p\n", strrchr("HAOLAOXXX", ' '));
	// printf("%p\n", ft_strrchr("HAOLAOXXX", ' '));
	// printf("%s\n", strrchr("HAOLAOXXX", 'O'));
	// printf("%s\n", ft_strrchr("HAOLAOXXX", 'O'));
	// printf("%s\n", strrchr("bonjour", 'b'));
	// printf("%s\n", ft_strrchr("bonjour", 'b'));


	// ----- FT_STRNSTR -----

	// char	*largestring = "Foo Bar Baz";
	// char	*smallstring = "Bar";
	// printf("%s\n", strnstr(largestring, smallstring, 3));
	// printf("%p\n", ft_strnstr(largestring, smallstring, 3));
	// printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", " ", 30));
	// printf("%p\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	
	

	// ----- FT_STRNCMP -----

	// char h[] = "test\200";
	// char p[] = "test\0";
	// printf("%d\n", strncmp(h, p, 6));
	// printf("%d\n", ft_strncmp(h, p, 6));
	
	
	// ***** FT_ISALPHA -----

	// printf("%i\n", isalpha(100));	
	// printf("%i\n", ft_isalpha(100));


	// ----- FT_ISDIGIT -----
	
	// printf("%d\n", isdigit('9'));	
	// printf("%d\n", ft_isdigit('9'));


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

	// printf("%c\n", toupper('@'));	
	// printf("%c\n", ft_toupper('@'));

	
	// ----- FT_TOLOWER -----

// 	printf("%c\n", tolower('Z'));	
// 	printf("%c\n", ft_tolower('Z'));		
}