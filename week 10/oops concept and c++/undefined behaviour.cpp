// Program 1 (Divide by 0)
int main()
{
    int x = 25, y = 0;
    int z = x / y;
    printf("Hello World!");
    return 0;
}

// Program 2 (Uninitialized variables)
int main()
{
    bool val;
    if (val)
        printf("TRUE");
    else
        printf("FALSE");
}

// Program 3 (Accessing value of NULL
// pointer)
int main()
{
   int *ptr = NULL;
   printf("%d", *ptr);
   return 0;
}

// Program 4 (Accessing out of bound)
int main()
{
   int arr[5];
  
   // We access arr[5] in last iteration.
   for (int i=0; i<=5; i++)
      printf("%d ", arr[i]);
}

// Program 5 (Going beyond limit of
// signed int)
int main()
{
   int x = INT_MAX;
   printf("%d", x+1);
   return 0;
}

// Program 6 (Trying to modify a string
// literal)
int main()
{
   char *s = "geeksforgeeks";
   s[0] = 'e';
   return 0;
}

// Program 7 (Modifying a variable
// multiple times before a defined
// sequence point)
// https://www.geeksforgeeks.org/sequence-points-in-c-set-1/
#include <stdio.h>
int main()
{
   int i = 8;
   int p = i++*i++;
   printf("%d\n", p);
}
