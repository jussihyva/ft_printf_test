/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkauppi <jkauppi@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:13:58 by jkauppi           #+#    #+#             */
/*   Updated: 2020/06/25 14:41:03 by jkauppi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int		ft_printf(const char *format, ...);
int		ft_dprintf(int fd, const char *format, ...);
int		ft_sprintf(char *str, const char *format, ...);

int			main()
{
	char			*format;
	char			char1;
	char			char2;
	char			*string1;
	char			*string2;
	char			*pointer1;
	int				int1;
//	long long		long1;
	unsigned int	unsigned_int1;
	double			double1;
	double			double2;
	double			double3;

	printf("%p\\n", &ft_printf);
	ft_printf("%p\\n", &ft_printf);

	format = "%#.3Lf\n";
	double1 = 123456789123456789.1269;
	printf("%s\n", "double1");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%.5Lf\n";
	double1 = -0.0;
	printf("%s\n", "Octal U");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%.5Lf\n";
	double1 = -0.0;
	printf("%s\n", "Octal U");
	printf(format, double1);
	ft_printf(format, double1);

	ft_printf("\\n");
	ft_printf("%%\\n");
	ft_printf("%d\\n", 42);
	ft_printf("%d%d\\n", 42, 41);
	ft_printf("%d%d%d\\n", 42, 43, 44);
	ft_printf("%ld\\n", 2147483647);
	ft_printf("%lld\\n", 9223372036854775807);
	ft_printf("%x\\n", 505);
	ft_printf("%X\\n", 505);
	ft_printf("%p\\n", &ft_printf);
	ft_printf("%20.15d\\n", 54321);
	ft_printf("%-10d\\n", 3);
	ft_printf("% d\\n", 3);
	ft_printf("%+d\\n", 3);
	ft_printf("%010d\\n", 1);
	ft_printf("%hhd\\n", 0);
	ft_printf("%jd\\n", 9223372036854775807);
	ft_printf("%zd\\n", 4294967295);
	ft_printf("%\\n");
	ft_printf("%U\\n", 4294967295);
	ft_printf("%u\\n", 4294967295);
	ft_printf("%o\\n", 40);
	ft_printf("%%#08x\\n", 42);
	ft_printf("%x\\n", 1000);
	ft_printf("%#X\\n", 1000);
	ft_printf("%s\\n", NULL);
	ft_printf("%S\\n", L"ݗݜशব");
	ft_printf("%s%s\\n", "test", "test");
	ft_printf("%s%s%s\\n", "test", "test", "test");
	ft_printf("%C\\n", 15000);


	format = "%s\n";
	string1 = "42";
	printf("%s\n", "Percentage A");
	printf(format, string1);
	ft_printf(format, string1);

	format = "%.3o\n";
	int1 = 42;
	printf("%s\n", "Octal U");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+14.3i\n";
	int1 = 56;
	printf("%s\n", "Integer K");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%0 42li\n";
	int1 = 5656;
	printf("%s\n", "Integer P");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%s %s\n";
	string1 = "String K";
	printf("%s\n", string1);
	double1 = 30.35;
	printf(format, double1, string1);
	ft_printf(format, double1, string1);

	// format = "%s\n";
	// string1 = "String K";
	// printf("%s\n", string1);
	// double1 = 30.35;
	// printf(format, double1);
//	ft_printf(format, double1);

	format = "% 05.6f\n";
	double1 = 7.3;
	printf("%s\n", "Float x");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%#041o\n";
	int1 = 20;
	printf("%s\n", "Octal D");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%\n";
//	printf(format);
	ft_printf(format);

	format = "%05.0f\n";
	double1 = -7.3;
	printf("%s\n", "Float U");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%f\n";
	double1 = -3.85;
	printf("%s\n", "Float U");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%f\n";
	double1 = 573.924;
	printf("%s\n", "Float U");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%.1f\n";
	double1 = -3.85;
	printf("%s\n", "Float U");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%.1f\n";
	double1 = -3.65;
	printf("%s\n", "Float U");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%lo, %lo\n";
	printf(format, 0ul, ULONG_MAX);
	ft_printf(format, 0ul, ULONG_MAX);

	format = "111%s333%s555%saaa%sccc",
	printf(format, "222", "444", "666", "bbb");
	printf("\n");
	ft_printf(format, "222", "444", "666", "bbb");
	printf("\n");

	format = "%.u, %.0uXXXX\n";
	printf("%s\n", "Unsigned int NULL");
	printf(format, NULL);
	ft_printf(format, NULL);

	format = "%2c\n";
//	char1 = NULL;
	printf("%s\n", "Character NULL");
	printf(format, NULL);
	ft_printf(format, NULL);

	printf("/* Print unsigned int */\n");
	format = "%+u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer A");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+042u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer B");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+052.42u\n";
	int1 = -56;
	printf("%s\n", "Unsigned Integer C");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%4u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer D");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%4.u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer E");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%4.4u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer F");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%14.9u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer G");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%14.2u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer H");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%14.3u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer I");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+14.2u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer J");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+14.3u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer K");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+42u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer L");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+ 42u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer M");
	printf(format, int1);
	ft_printf(format, int1);

	format = "% 42u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer N");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%0 42u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer O");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%0 42hhu\n";
	int1 = 5656;
	printf("%s\n", "Unsigned Integer P");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%-0 42u %u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer Q");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "%-042u %u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer R");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "% +u %u\n";
	int1 = 56;
	printf("%s\n", "Unsigned Integer S");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "% u %u\n";
	int1 = -56;
	printf("%s\n", "Unsigned Integer T");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

/*
	format = "%llu\n";
	long1 = 9223372036854775807;
	printf("%s\n", "Unsigned Integer U");
	printf(format, -9223372036854775808);
	ft_printf(format, -9223372036854775808);
*/
	format = "%u\n";
	unsigned_int1 = 3040506070;
	printf("%s\n", "Unsigned Integer V");
	printf(format, unsigned_int1);
	ft_printf(format, unsigned_int1);
/*
	format = "%tu\n";
	long1 = 9223372036854775807;
	printf("%s\n", "Unsigned Integer W");
	printf(format, -9223372036854775808);
	ft_printf(format, -9223372036854775808);

	format = "%zu\n";
	long1 = 9223372036854775807;
	printf("%s\n", "Unsigned Integer X");
	printf(format, -9223372036854775808);
	ft_printf(format, -9223372036854775808);
*/


	printf("/* Print octal */\n");
	format = "%o\n";
	int1 = 20;
	printf("%s\n", "Octal A");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%#o\n";
	int1 = 20;
	printf("%s\n", "Octal B");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%#41o\n";
	int1 = 20;
	printf("%s\n", "Octal C");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%#041o\n";
	int1 = 20;
	printf("%s\n", "Octal D");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%#41.o\n";
	int1 = 20;
	printf("%s\n", "Octal E");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%#41.1o\n";
	int1 = 20;
	printf("%s\n", "Octal F");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%41.1o\n";
	int1 = 20;
	printf("%s\n", "Octal G");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%-41.1o %o\n";
	int1 = 20;
	printf("%s\n", "Octal H");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "%-41.1o %o\n";
	int1 = 0;
	printf("%s\n", "Octal I");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "%-41.o %#.o\n";
	int1 = 0;
	printf("%s\n", "Octal J");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "%-.o %#.o\n";
	int1 = 0;
	printf("%s\n", "Octal K");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "%-41.1o %o\n";
	int1 = 1;
	printf("%s\n", "Octal L");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "%#.3o\n";
	int1 = 1;
	printf("%s\n", "Octal M");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%3o\n";
	int1 = 0;
	printf("%s\n", "Octal N");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%#o\n";
	int1 = 0;
	printf("%s\n", "Octal O");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%#o\n";
	int1 = 1;
	printf("%s\n", "Octal P");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%#.o\n";
	int1 = 42;
	printf("%s\n", "Octal Q");
	printf(format, int1);
	ft_printf(format, int1);

	printf("/* Print int with + */\n");
	format = "%+d\n";
	int1 = 56;
	printf("%s\n", "Integer A");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+042i\n";
	int1 = 56;
	printf("%s\n", "Integer B");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+052.42i\n";
	int1 = -56;
	printf("%s\n", "Integer C");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%4i\n";
	int1 = 56;
	printf("%s\n", "Integer D");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%4.i\n";
	int1 = 56;
	printf("%s\n", "Integer E");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%4.4i\n";
	int1 = 56;
	printf("%s\n", "Integer F");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%14.9i\n";
	int1 = 56;
	printf("%s\n", "Integer G");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%14.2i\n";
	int1 = 56;
	printf("%s\n", "Integer H");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%14.3i\n";
	int1 = 56;
	printf("%s\n", "Integer I");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+14.2i\n";
	int1 = 56;
	printf("%s\n", "Integer J");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+14.3i\n";
	int1 = 56;
	printf("%s\n", "Integer K");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+42i\n";
	int1 = 56;
	printf("%s\n", "Integer L");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%+ 42i\n";
	int1 = 56;
	printf("%s\n", "Integer M");
	printf(format, int1);
	ft_printf(format, int1);

	format = "% 42i\n";
	int1 = 56;
	printf("%s\n", "Integer N");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%0 42i\n";
	int1 = 56;
	printf("%s\n", "Integer O");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%0 42hhi\n";
	int1 = 5656;
	printf("%s\n", "Integer P");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%-0 42i %i\n";
	int1 = 56;
	printf("%s\n", "Integer Q");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "%-042i %i\n";
	int1 = 56;
	printf("%s\n", "Integer R");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "% +i %i\n";
	int1 = 56;
	printf("%s\n", "Integer S");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "% i %i\n";
	int1 = -56;
	printf("%s\n", "Integer T");
	printf(format, int1, int1);
	ft_printf(format, int1, int1);

	format = "%0 42hhi\n";
	int1 = -5656;
	printf("%s\n", "Integer U");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%i\n";
	int1 = 0;
	printf("%s\n", "Integer V");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%.i\n";
	int1 = 0;
	printf("%s\n", "Integer W");
	printf(format, int1);
	ft_printf(format, int1);

/*
	format = "%lld\n";
	long1 = 9223372036854775807;
	printf("%s\n", "Integer W");
	printf(format, -9223372036854775808);
	ft_printf(format, -9223372036854775808);
*/
	printf("/* Print Pointer */\n");
	format = "%p  %p\n";
	pointer1 = "Pointer A";
	printf("%s\n", pointer1);
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%11p  %22p\n";
	pointer1 = "Pointer B";
	printf("%s\n", pointer1);
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%11.6p  %22.11p\n";
	pointer1 = "Pointer C";
	printf("%s\n", pointer1);
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%11.p  %22.p\n";
	pointer1 = "Pointer D";
	printf("%s\n", pointer1);
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%15p  %022p\n";
	pointer1 = "Pointer E";
	printf("%s\n", pointer1);
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%15.p  %022.p\n";
	pointer1 = "Pointer F";
	printf("%s\n", pointer1);
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%015.22p  %022.44p\n";
	pointer1 = "Pointer G";
	printf("%s\n", pointer1);
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%0.5p  %0.22p\n";
	pointer1 = "Pointer H";
	printf("%s\n", pointer1);
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%p  %.9p\n";
	pointer1 = "Pointer I";
	printf("%s\n", pointer1);
	pointer1 = NULL;
	printf(format, pointer1, pointer1);
	ft_printf(format, pointer1, pointer1);

	format = "%p  %.1p\n";
	pointer1 = "Pointer J";
	printf("%s\n", pointer1);
	pointer1 = NULL;
	printf(format, pointer1, pointer1);
	ft_printf(format, pointer1, pointer1);

	format = "%p  %.p\n";
	pointer1 = "Pointer K";
	printf("%s\n", pointer1);
	pointer1 = NULL;
	printf(format, pointer1, pointer1);
	ft_printf(format, pointer1, pointer1);

	format = "%p  %44.p\n";
	pointer1 = "Pointer L";
	printf("%s\n", pointer1);
	pointer1 = NULL;
	printf(format, pointer1, pointer1);
	ft_printf(format, pointer1, pointer1);

	format = "%15.4p  %022.2p\n";
	pointer1 = "Pointer M";
	printf("%s\n", pointer1);
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%15.4p  %022.42p\n";
	pointer1 = "Pointer N";
	printf("%s\n", pointer1);
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%.0p, %.p\n";
	pointer1 = "Pointer O";
	printf("%s\n", pointer1);
	pointer1 = NULL;
	printf(format, pointer1, pointer1);
	ft_printf(format, pointer1, pointer1);

	format = "%-15p, %p\n";
	pointer1 = "Pointer P";
	printf("%s\n", pointer1);
	pointer1 = NULL;
	printf(format, pointer1, pointer1);
	ft_printf(format, pointer1, pointer1);

	printf("/* Print String */\n");
	format = "%s\n";
	string1 = "String A";
	printf(format, string1);
	ft_printf(format, string1);

	format = "%22s\n";
	string1 = "String B";
	printf(format, string1);
	ft_printf(format, string1);

	format = "%22.11s\n";
	string1 = "String C";
	printf(format, string1);
	ft_printf(format, string1);

	format = "%11.s\n";
	string1 = "String D";
	printf(format, string1);
	ft_printf(format, string1);

	format = "%011.s\n";
	string1 = "String E";
	printf(format, string1);
	ft_printf(format, string1);

	format = "%0.5s\n";
	string1 = "String F";
	printf(format, string1);
	ft_printf(format, string1);

	format = "%0.25s\n";
	string1 = "String F";
	printf(format, string1);
	ft_printf(format, string1);

	format = "%-011s\n";
	string1 = "String G";
	printf(format, string1);
	ft_printf(format, string1);

	format = "%+s\n";
	string1 = "String H";
	printf(format, string1);
	ft_printf(format, string1);

	format = "% s\n";
	string1 = "String I";
	printf(format, string1);
	ft_printf(format, string1);

	format = "%33s %s\n";
	string1 = "String J";
	printf("%s\n", string1);
	string1 = NULL;
	string2 = "1234567890";
	printf(format, string1, string2);
	ft_printf(format, string1, string2);

	format = "%%\n";
	string1 = "String K";
	printf("%s\n", string1);
	printf(format, string1);
	ft_printf(format, string1);

	format = "%.0%\n";
	string1 = "String L";
	printf("%s\n", string1);
	printf(format, string1);
	ft_printf(format, string1);

	format = "%.1%\n";
	string1 = "String M";
	printf("%s\n", string1);
	printf(format, string1);
	ft_printf(format, string1);

/*
	format = "%s\n";
	string1 = "String K";
	printf("%s\n", string1);
	double1 = 30.35;
	printf(format, double1);
	ft_printf(format, double1);
*/
	printf("/* Print Character */\n");
	format = "%c\n";
	char1 = 'A';
	printf(format, char1);
	ft_printf(format, char1);

	format = "%11c\n";
	char1 = 'B';
	printf(format, char1);
	ft_printf(format, char1);

	format = "%11.8c\n";
	char1 = 'C';
	printf(format, char1);
	ft_printf(format, char1);

	format = "%11.c\n";
	char1 = 'D';
	printf(format, char1);
	ft_printf(format, char1);

	format = "%011.c\n";
	char1 = 'E';
	printf(format, char1);
	ft_printf(format, char1);

	format = "%011.c\n";
	char1 = ' ';
	printf(format, char1);
	ft_printf(format, char1);

	format = "%0.11c\n";
	char1 = 'F';
	printf(format, char1);
	ft_printf(format, char1);

	format = "%-011c %c\n";
	char1 = 'G';
	printf(format, char1, char1);
	ft_printf(format, char1, char1);

	format = "%+c\n";
	char1 = 'H';
	printf(format, char1);
	ft_printf(format, char1);

	format = "% c\n";
	char1 = 'I';
	printf(format, char1);
	ft_printf(format, char1);

	format = "%011.5c\n";
	char1 = 'J';
	printf(format, char1);
	ft_printf(format, char1);

	format = "%011.c\n";
	char1 = 'K';
	printf(format, char1);
	ft_printf(format, char1);

	format = "%c\n";
	char1 = 0;
	printf(format, char1);
	ft_printf(format, char1);

	format = "%.2c\n";
	char1 = 0;
	printf(format, char1);
	ft_printf(format, char1);

	format = "%2.2c\n";
	char1 = 0;
	printf(format, char1);
	ft_printf(format, char1);

	format = "%-011c %c\n";
	char1 = 0;
	char2 = 'O';
	printf(format, char1, char2);
	ft_printf(format, char1, char2);

	/* Print unsigned int */
	format = "%u\n";
	unsigned_int1 = 3040506070;
	printf(format, unsigned_int1);
	ft_printf(format, unsigned_int1);

	/* Print hex */
	format = "%#x  %x\n";
	pointer1 = "Hex A";
	printf("%s\n", pointer1);
	pointer1 = NULL;
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%.0x, %.x\n";
	pointer1 = "Hex B";
	printf("%s\n", pointer1);
	pointer1 = NULL;
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%x\n";
	pointer1 = "Hex C";
	printf("%s\n", pointer1);
	pointer1 = 0;
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	format = "%#x\n";
	pointer1 = "Hex D";
	printf("%s\n", pointer1);
	int1 = 0;
	printf(format, int1);
	ft_printf(format, int1);

	format = "%#.0x\n";
	pointer1 = "Hex E";
	printf("%s\n", pointer1);
	int1 = 0;
	printf(format, int1);
	ft_printf(format, int1);

	format = "%#.0x\n";
	pointer1 = "Hex F";
	printf("%s\n", pointer1);
	int1 = 10;
	printf(format, int1);
	ft_printf(format, int1);

	/* Print HEX (upper case) */
	format = "MOI %#X  %X MOI\n";
	pointer1 = "Pointer 1";
	printf(format, pointer1, &pointer1);
	ft_printf(format, pointer1, &pointer1);

	/* Print string */
	format = "test";
	double1 = 20.2;
	printf(format, double1);
	printf("\n");
	ft_printf(format, double1);
	printf("\n");

	format = "111%s333%s555%saaa%sccc",
	printf(format, "222", "444", "666", "bbb");
	printf("\n");
	ft_printf(format, "222", "444", "666", "bbb");
	printf("\n");

	int1 = printf("JJ" "KK") + printf("YY\n");
	int1 = ft_printf("JJ" "KK") + ft_printf("YY\n");

	printf("Double:%2i\n", (int)sizeof(double));
	printf("Float: %2i\n", (int)sizeof(float));



	printf("/* Print float/\n");
	format = "%f %i\n";
	double1 = 55.95;
	int1 = 56;
	printf("%s\n", "Float A");
	printf(format, double1, int1);
	ft_printf(format, double1, int1);

	format = "%+f %i\n";
	string1 = "J";
	double1 = -0.012345;
	int1 = 56;
	printf("%s\n", "Float B");
	printf(format, double1, int1);
	ft_printf(format, double1, int1);

	format = "%+042f\n";
	double1 = 55.9999995;
	printf("%s\n", "Float C");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%+052.42f\n";
	double1 = 55.0999995;
	printf("%s\n", "Float D");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%#42.52f\n";
	double1 = 55.0999995;
	printf("%s\n", "Float E");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%4.4f\n";
	double1 = 56;
	printf("%s\n", "Float F");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%14.9f\n";
	double1 = 56;
	printf("%s\n", "Float G");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%14.2f\n";
	double1 = 56;
	printf("%s\n", "Float H");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%14.3f\n";
	double1 = 56;
	printf("%s\n", "Float I");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%+14.2f\n";
	double1 = 56;
	printf("%s\n", "Float J");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%+14.3f\n";
	double1 = 56;
	printf("%s\n", "Float K");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%-42fMOI\n";
	double1 = 56;
	printf("%s\n", "Float L");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%+ 42f\n";
	double1 = 56;
	printf("%s\n", "Float M");
	printf(format, double1);
	ft_printf(format, double1);

	format = "% 42f\n";
	double1 = 56;
	printf("%s\n", "Float N");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%0 42f\n";
	double1 = 56;
	printf("%s\n", "Float O");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%0 42hhf\n";
	double1 = 5656;
	printf("%s\n", "Float P");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%-0 42i %f\n";
	double1 = 56;
	printf("%s\n", "Float Q");
	printf(format, double1, double1);
	ft_printf(format, double1, double1);

	format = "%-042i %f\n";
	double1 = 56;
	printf("%s\n", "Float R");
	printf(format, double1, double1);
	ft_printf(format, double1, double1);

	format = "% +i %f\n";
	double1 = 56;
	printf("%s\n", "Float S");
	printf(format, double1, double1);
	ft_printf(format, double1, double1);

	format = "% i %f\n";
	double1 = -56;
	printf("%s\n", "Float T");
	printf(format, double1, double1);
	ft_printf(format, double1, double1);

	format = "%.1f\n";
	double1 = -3.65;
	printf("%s\n", "Float U");
	printf(format, double1);
	ft_printf(format, double1);

	format = "{%f}{%lf}{%Lf}\n";
	double1 = 1444565444646.6465424242242;
	double2 = 1444565444646.6465424242242;
	double3 = 1444565444646.6465424242242l;
	printf("%s\n", "Float V");
	printf(format, double1, double2, double3);
	ft_printf(format, double1, double2, double3);

	format = "%010o\n";
	int1 = 42;
	printf("%s\n", "Octal R");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%010.o\n";
	int1 = 42;
	printf("%s\n", "Octal S");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%010.3o\n";
	int1 = 42;
	printf("%s\n", "Octal T");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%.3o\n";
	int1 = 42;
	printf("%s\n", "Octal U");
	printf(format, int1);
	ft_printf(format, int1);

	format = "%.19Lf\n";
	double1 = 0.0;
	printf("%s\n", "Octal U");
	printf(format, -LDBL_MIN);
	ft_printf(format, -LDBL_MIN);

	format = "%.19Lf\n";
	double1 = -LDBL_MIN;
	printf("%s\n", "Octal U");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%.5Lf\n";
	double1 = -10.1;
	printf("%s\n", "Octal U");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%.5Lf\n";
	double1 = -0.0;
	printf("%s\n", "Octal U");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%-5c\n";
	char1 = 0;
	printf("%s\n", "Char");
	printf(format, char1);
	ft_printf(format, char1);

	format = "%s\n";
	string1 = "Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoir";
	printf("%s\n", "String");
	printf(format, string1);
	ft_printf(format, string1);

	format = "%#.17f\n";
	double1 = 123.00000128;
	printf("%s\n", "double1");
	printf(format, double1);
	ft_printf(format, double1);

	format = "%s\n";
	string1 = "Lesenfantsnesententpastrestresbonmaiscac'estparcequ'ilsfontcacadansleurculotteetquecen'estvraimentpastrestrespropreNonmongroscoupdecœurc'étaitunsoir";
	printf("%s\n", "String");
	printf(format, string1);
//	string2 = ft_strnew(60000);
//	*string2 = '\0';
//	ft_sprintf(string2, format, string1);
//	ft_putstr(string2);
//	*string2 = '\0';
//	ft_sprintf(string2, format, "string1");
//	ft_putstr(string2);
//	*string2 = '\0';
//	printf(format, string1);
//	ft_sprintf(string2, format, string1);
//	ft_putstr(string2);
//	ft_strdel(&string2);
//	while (1)
//		;
	printf("000 test 1\n");
	printf("A%cB\n", 0);
	printf("000 test 2\n");
	ft_printf("A%cB\n", 0);
	printf("000 test 3\n");
	printf("A%cB\n", -0);
	printf("000 test 4\n");
	ft_printf("A%cB\n", -0);
}
