#include <stdio.h>
#include <get-line.h>

int main(void)
{
	char s[8];

	get_line(s, sizeof s);
	puts(s);
}
