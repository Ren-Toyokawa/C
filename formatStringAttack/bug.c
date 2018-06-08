#include <stdio.h>
#include <string.h>

char target[] = "test";

int main()
{
    char buf[1024];
    fgets(buf, sizeof buf, stdin);
    printf(buf);

    printf("%p: %s\n", target, target);

    return 0;
}
