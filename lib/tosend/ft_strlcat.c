#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t num)
{
    size_t a;
    int b;
    b = 0;
    a = 0;

    while(a != num)
    {
        if (dst[a] == '\0')
        {
            dst[a + b] = src[b];
            b++;
        }
    a++;
    }
    return dst;
}

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}