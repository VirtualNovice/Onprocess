#include <stdio.h>
#include <stdlib.h>

void    *ft_memmove(void *dest, const void *src, size_t num)
{
    char *cdest; 
    char *csrc;
    size_t a;

    cdest = (char *) dest;
    csrc = (char *) src;
    if (dest < src)
    {
        a = 0;
        while (a != num)
        {
            cdest[a] = csrc[a];
            a++;
        }
    }
    else
    {
        a = num - 1;
        while (a > 0)
        {
            cdest[a] = csrc[a];
            a--;
        }
    }
    return dest;
}

void print_elements(char *array, int size) 
{ 
  int i; 
  printf ("Elements : "); 
  for (i = 0; i < size; i++) { 
    printf ("%c, ", array[i]); 
  } 
  printf (" "); 
} 
int main(int argc, char* argv[]) 
{ 
  char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'}; 
  print_elements(c_array, sizeof(c_array)); 
  printf("After memcpy()\n"); 
  ft_memmove((void *)&c_array[5], (void *)&c_array[3], 5); 
  print_elements(c_array, sizeof(c_array)); 
} 