/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleclet <aleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 10:55:18 by aleclet           #+#    #+#             */
/*   Updated: 2016/12/09 16:54:36 by aleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "ft_memccpy.c"
#include "ft_memchr.c"
#include "ft_strlen.c"
#include "ft_memcmp.c"
#include "ft_strcat.c"
#include "ft_strstr.c"
#include "ft_atoi.c"
#include "ft_strcmp.c"
#include "ft_strncmp.c"
#include "ft_strnstr.c"
#include "ft_strcpy.c"
#include "ft_strdup.c"
#include "ft_is_white_space.c"
#include "ft_isdigit.c"
#include "ft_tolower.c"
#include "ft_toupper.c"
#include "ft_strjoin.c"
#include "ft_strtrim.c"
#include "ft_strsplit.c"
#include "ft_str_count_word.c"

int		test_memccpy()
{
	char		*dest[40];
	const char	src[] = "the cake is\200a lie!";
	//uint8_t *src1 = (uint8_t *)"\xff\xaa\xde\x12";
	char		c;
	char		*p;
	char		*p2;

	c = '\200';
	p = ft_memccpy(dest, src, c, 10);
	printf("dest my : %s\nret : %s\n", (char*)dest, p);
	p2 = memccpy(dest, src, c, 10);
	printf("dest or : %s\nret : %s\n", (char*)dest, p);
	return (0);
}

int		test_memchr()
{
	char *src = "/|\x12\xff\x09\x42\2002\42|\\";
	int size = 10;
	if (memchr(src, '\200', size) == ft_memchr(src, '\200', size))
		printf("ok\n");
	else
		printf("fail\n my : {%s}\n or : {%s}", memchr(src, '\200', size), ft_memchr(src, '\200', size));
	return (0);
}

int		test_memcmp()
{

//	uint8_t *s1 = (uint8_t *)"\xff\xaa\xde\x12OLOL";
//
//	uint8_t *s2 = (uint8_t *)"\xff\xaa\xde\x12MACOSX";
	uint8_t *s1 = (uint8_t *)"\xff\xaa\xde\x12";
	uint8_t *s2 = (uint8_t *)"\xff\xaa\xde\x12MACOSAAAAA";
//	char	*s1 = "aaaads";
//	char	*s2 = "aabdfdch";
//	uint8_t *s1 = (uint8_t *)"\xff\xaa\xde\xffMACOSX\xff";
//
//	uint8_t *s2 = (uint8_t *)"\xff\xaa\xde\x02";
//	uint8_t *s1 = (uint8_t *)"\xff\xaa\xde\x12";
//
//	uint8_t *s2 = (uint8_t *)"\xff\xaa\xde\x12MACOSAAAAA";
	size_t	size;

	size = 8;
	printf("ft_memcmp : %d\n", ft_memcmp(s1, s2, size));
	printf("memcmp : %d\n", memcmp(s1, s2, size));
		
	return (0);
}

int		test_strcat()
{
	char s1[] = "the cake is a lie !\0I'm hidden lol\r\n";
	//char s1[] = " ";
	char s2[0xF00] = "there is no stars in the sky";

	printf("ft_strcat : %s\n", ft_strcat(s1, s2));
	//printf("strcat    : %s\n", strcat(s1, s2));

	return (0);
}

int		test_strstr()
{
	char *s1 = "this is a test\0";
	char *s2 = "a";
	printf("or: %s\n", strstr(s1, s2));
	printf("ft: %s\n", ft_strstr(s1, s2));
	return (0);
}

int		test_atoi()
{
	//char *s1 = "-234this is a test\0";
	//char *s1 = "            -234";
	//char *s1 = "\t\v\f\r\n \f-6050";
	char *s1 = "\t\v\f\r\n \f- \f\t\n\r    06050";
	printf("or: %d\n", atoi(s1));
	printf("ft: %d\n", ft_atoi(s1));
	return (0);
}

int		t(char *s1, char*s2)
{
	char *i1;
	char *i2;
	printf("test -> %s | %s\n", s1, s2);
	i1 = strnstr(s1, s2, 20);
	i2 = ft_strnstr(s1, s2, 20);
	printf("|%s|    |%s|\n", i1, i2);
	return (0);
}

int		test_strstr2()
{
	char *s1 = "aaabbbaaabbb";
	char *s2 = "abbaaab";
	t(s1, s2);
	s1 = "This is a fuck'in cake";
	s2 = "cake";
	t(s1, s2);
	s2 = "FF";
	s1 = "see F your F return FF now FF";
//	t(s1, s1);
	s1 = "MZIRIBMZIRIBMZE123";
	s2 = "MZIRIBMZE";
	t(s1, s1);
	t(s1, s2);
	return (0);
}

int		test_touplow()
{
	int i;

	i = 65;
		if (toupper(i) != ft_toupper(i))
			printf("up i:%d | %d ? %d\n", i, toupper(i), ft_toupper(i));
		if (tolower(i) != ft_tolower(i))
			printf("lo i:%d | %d ? %d\n", i, tolower(i), ft_tolower(i));
	return (0);
}

int		test_strjoin()
{
	printf("res : %s\n", ft_strjoin("my name is ", "alois"));	
	return (0);
}

int		test_strtrim()
{
	char const	*s;
//	s = "                \t \n        ";
	s = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	printf("|%s|\n", ft_strtrim(s));	
	return (0);
}

int		test_strsplit()
{
	char *s = "  split       this for   me  !  ";
	ft_strsplit(s, ' '); 

	return (0);		
}

int		main()
{
	test_strsplit();	
	return (0);
}



