#include "libasm.h"

int main()
{
	char    *empty_str;
	char    *long_str;
	char    buf[100];
	int     fd;
	int     ft_fd;

	empty_str = "";
	long_str = "fakdjfjasdjfadjsfj;ldajs;lfkja;sdlkfja;lsdkfj;alsdkjf;asldkfj;asldkfja;sdlkfja;slkdfja;sdklfja;skdf";
	printf("Test ft_strlen:\n\n");
	printf("empty: >%lu<\n", strlen(empty_str));
	printf("empty: >%lu<\n", ft_strlen(empty_str));
	printf("long: >%lu<\n", strlen(long_str));
	printf("long: >%lu<\n\n", ft_strlen(long_str));

	printf("Test ft_strcpy:\n\n");
	printf("empty: >%s<\n", strcpy(buf, empty_str));
	printf("empty: >%s<\n", ft_strcpy(buf, empty_str));
	printf("long: >%s<\n", strcpy(buf, long_str));
	printf("long: >%s<\n\n", ft_strcpy(buf, long_str));

	printf("Test ft_strcmp:\n\n");
	printf("%d %d\n", strcmp("", ""), ft_strcmp("", ""));
	printf("%d %d\n", strcmp("", "abc"), ft_strcmp("", "abc"));
	printf("%d %d\n", strcmp("abc", ""), ft_strcmp("abc", ""));
	printf("%d %d\n", strcmp("abc", "cda"), ft_strcmp("abc", "cda"));
	printf("%d %d\n", strcmp("cda", "abc"), ft_strcmp("cda", "abc"));
	printf("%d %d\n", strcmp("abcd", "abc"), ft_strcmp("abcd", "abc"));
	printf("%d %d\n\n", strcmp("    ", " cda"), ft_strcmp("    ", " cda"));

	printf("%d %d\n", strcmp("\xff\x80", "\xff\x00"), ft_strcmp("\xff\x80", "\xff\x00"));
	printf("%d %d\n", strcmp("\xff\xfe", "\xff"), ft_strcmp("\xff\xfe", "\xff"));
	printf("%d %d\n\n", strcmp("\xff", "\xff\xfe"), ft_strcmp("\xff", "\xff\xfe"));

	printf("%d %d\n", strcmp("1", "2"), ft_strcmp("1", "2"));

	printf("Test ft_write:\n\n");
	char    *str = strdup("1234567");
	fd = open("text.txt", O_CREAT | O_RDWR, 0666);
	ft_fd = open("ft_text.txt",O_CREAT | O_RDWR, 0666);
	write(1, str, 7);
	printf("\n");
	ft_write(1, str, 7);
	printf("\n");
	write(fd, str, 7);
	ft_write(ft_fd, str, 7);
	printf(">>>> write file!\n");
	printf("error: %zd, %s\n", write(21, str, 7), strerror(errno));
	printf("error: %zd, %s\n\n", ft_write(21, str, 7), strerror(errno));
	close(fd);
	close(ft_fd);

	printf("Test ft_read\n\n");
	fd = open("text.txt", O_RDONLY);
	ft_fd = open("ft_text.txt", O_RDONLY);
	read(fd, buf, 7);
	printf(">%s<\n", buf);
	ft_read(ft_fd, buf, 7);
	printf(">%s<\n", buf);
	printf("error: %zd, %s\n", read(21, buf, 7), strerror(errno));
	printf("error: %zd, %s\n\n", ft_read(21, buf, 7), strerror(errno));

	printf("Test ft_strdup\n\n");
	printf("empty: >%s<\n", strdup(empty_str));
	printf("empty: >%s<\n", ft_strdup(empty_str));
	printf("long: >%s<\n", strdup(long_str));
	printf("long: >%s<\n", ft_strdup(long_str));


	printf("\n\n%d\n", '\x80');
	return (0);
}