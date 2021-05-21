/*
norminette ft_*.c *.h
gcc -Wall -Werror -Wextra *.c
./a.out
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main()
{

	//---------------------------------------------------------------------------------
	//----------------- ft_strlen -----------------------------------------------------
	//---------------------------------------------------------------------------------

	char *s1 = "Hello amazing world!";
	char *s2 = "";

	// printf("Expected\tResult\tOk = 1\n");
	// printf("%zu\t\t%zu\t%d\n", strlen(s), ft_strlen(s), strlen(s) == ft_strlen(s));
	// printf("%zu\t\t%zu\t%d\n", strlen(s2), ft_strlen(s2), strlen(s2) == ft_strlen(s2));

	if (strlen(s1) == ft_strlen(s1) && strlen(s2) == ft_strlen(s2))
		printf("ft_strlen\t=>\tOK\n");

	//---------------------------------------------------------------------------------
	//----------------- ft_substr------------------------------------------------------
	//---------------------------------------------------------------------------------

	char *orig_str = "Hello amazing world!";
	char *sub1 = ft_substr(orig_str, 0, 5);
	char *sub2 = ft_substr(orig_str, 5, 30);
	char *sub3 = ft_substr(orig_str, 1, 1);
	char *sub4 = ft_substr(orig_str, 1, 0);

	int substr_01 = strcmp("Hello", sub1);
	int substr_02 = strcmp(" amazing world!", sub2);
	int substr_03 = strcmp("e", sub3);
	int substr_04 = strcmp("", sub4);

	// printf("Expected\t\tResult\t\t\tOk = 0\n");
	// printf("Hello\t\t\t%s\t\t\t%d\n", sub1, substr_01);
	// printf(" amazing world!\t\t%s\t\t%d\n", sub2, substr_02);
	// printf("e\t\t\t%s\t\t\t%d\n", sub3, substr_03);
	// printf("\t\t\t%s\t\t\t%d\n", sub4, substr_04);

	free(sub1);
	free(sub2);
	free(sub3);

	if (substr_01 == 0 && substr_02 == 0 && substr_03 == 0 && substr_04 == 0)
		printf("ft_substr\t=>\tOK\n");

	//---------------------------------------------------------------------------------
	//----------------- ft_strjoin ----------------------------------------------------
	//---------------------------------------------------------------------------------

	char	*s1j = "Hello ";
	char	*s2j = "World!";
	char	*s3j = "";

	char	*s1join = ft_strjoin(s1j, s2j);
	char	*s2join = ft_strjoin(s2j, s3j);
	char	*s3join = ft_strjoin(s3j, s3j);

	int		strjoin1 = strcmp("Hello World!", s1join);
	int		strjoin2 = strcmp("World!", s2join);
	int		strjoin3 = strcmp("", s3join);

	free(s1join);
	free(s2join);
	free(s3join);

	if (strjoin1 == 0 && strjoin2 == 0 && strjoin3 == 0)
		printf("ft_strjoin\t=>\tOK\n");


	//---------------------------------------------------------------------------------
	//----------------- ft_strtrim ----------------------------------------------------
	//---------------------------------------------------------------------------------

	char	*s1trim = "abbbba";
	char	*s2trim = "abbbb";
	char	*s3trim = "bbbba";
	char	*s4trim = "bbbbabc";
	char	*s5trim = "";

	char	*s1trimmed = ft_strtrim(s1trim, "a");
	char	*s2trimmed = ft_strtrim(s2trim, "a");
	char	*s3trimmed = ft_strtrim(s3trim, "a");
	char	*s4trimmed = ft_strtrim(s4trim, "abc");
	char	*s5trimmed = ft_strtrim(s4trim, "xx");
	char	*s6trimmed = ft_strtrim(s4trim, "");
	char	*s7trimmed = ft_strtrim(s4trim, "bbbbabc");
	char	*s8trimmed = ft_strtrim(s4trim, "bbbbab");
	char	*s9trimmed = ft_strtrim(s5trim, "a");

	int		check_strtrim_01 = strcmp("bbbb", s1trimmed);
	int		check_strtrim_02 = strcmp("bbbb", s2trimmed);
	int		check_strtrim_03 = strcmp("bbbb", s3trimmed);
	int		check_strtrim_04 = strcmp("bbbb", s4trimmed);
	int		check_strtrim_05 = strcmp("bbbbabc", s5trimmed);
	int		check_strtrim_06 = strcmp("bbbbabc", s6trimmed);
	int		check_strtrim_07 = strcmp("", s7trimmed);
	int		check_strtrim_08 = strcmp("c", s8trimmed);
	int		check_strtrim_09 = strcmp("", s9trimmed);

	printf("Expected\t\tResult\t\t\tOk = 0\n");
	printf("bbbb\t\t\t%s\t\t\t%d\n", s1trimmed, check_strtrim_01);
	printf("bbbb\t\t\t%s\t\t\t%d\n", s2trimmed, check_strtrim_02);
	printf("bbbb\t\t\t%s\t\t\t%d\n", s3trimmed, check_strtrim_03);
	printf("bbbb\t\t\t%s\t\t\t%d\n", s4trimmed, check_strtrim_04);
	printf("bbbbabc\t\t\t%s\t\t\t%d\n", s5trimmed, check_strtrim_05);
	printf("bbbbabc\t\t\t%s\t\t\t%d\n", s6trimmed, check_strtrim_06);
	printf("\t\t\t%s\t\t\t%d\n", s7trimmed, check_strtrim_07);
	printf("c\t\t\t%s\t\t\t%d\n", s8trimmed, check_strtrim_08);
	printf("\t\t\t%s\t\t\t%d\n", s9trimmed, check_strtrim_09);

	free(s1trimmed);
	free(s2trimmed);
	free(s3trimmed);
	free(s4trimmed);
	free(s5trimmed);
	free(s6trimmed);
	free(s7trimmed);
	free(s8trimmed);
	free(s9trimmed);

	if (check_strtrim_01 == 0 && check_strtrim_02 == 0 && check_strtrim_03 == 0 && check_strtrim_04 == 0 && check_strtrim_05 == 0 && check_strtrim_06 == 0 && check_strtrim_07 == 0 && check_strtrim_08 == 0 && check_strtrim_09 == 0)
		printf("ft_strtrim\t=>\tOK\n");

	return 0;
}
