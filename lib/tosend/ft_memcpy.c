#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dest, const void *src, size_t num)
{
    char *cdest = (char *) dest;
    char *csrc = (char *) src;
    size_t a;

    a = 0;
    while (a != num)
    {
        cdest[a] = csrc[a];
        a++;
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
  ft_memcpy((void *)&c_array[5], (void *)&c_array[3], 5); 
  print_elements(c_array, sizeof(c_array)); 
} 

/*
int main()
{
   char csrc[] = "GeeksforGeeks";
   char cdest[100];
   ft_memcpy(cdest, csrc, strlen(csrc)+1);
   printf("Copied string is %s", cdest);
  
   int isrc[] = {10, 20, 30, 40, 50};
   int n = sizeof(isrc)/sizeof(isrc[0]);
   int idest[n], i;
   ft_memcpy(idest, isrc,  sizeof(isrc));
   printf("\nCopied array is ");
   for (i=0; i<n; i++)
     printf("%d ", idest[i]);
   return 0;
}*/