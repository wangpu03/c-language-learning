#include <stdio.h>

struct str{
	int len;
	char s[0];
};

struct foo{
	struct str *a;
};

int main(int argc, char const *argv[])
{
	struct foo f = {0};
	if (f.a->s)	{
		printf("%s\n", f.a->s);
	}
	return 0;
}