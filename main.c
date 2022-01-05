#include <unistd.h>
int main()
{
	write(1, 72, 1);
	write(1, 101, 1);
	write(1, 108, 1);
	write(1, 108, 1);
	write(1, 111, 1);
	write(1, 32, 1);
	write(1, 119, 1);
	write(1, 111, 1);
	write(1, 114, 1);
	write(1, 101, 1);
	write(1, 100, 1);
	write(1, "\n<=======3\n", 11);
	return(0);
}