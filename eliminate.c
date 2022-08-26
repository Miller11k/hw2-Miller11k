/* You MUST modify this file */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
#include <string.h> 

#ifdef TEST_ELIMINATE
// 100% of the score
void eliminate(int n, int k)
{
  // allocate an arry of n elements
  int * arr = malloc(sizeof(* arr) * n);
  // check whether memory allocation succeeds.
  // if allocation fails, stop
  if (arr == NULL)
    {
      fprintf(stderr, "malloc fail\n");
      return;
    }
	
  // Note that from here on, you can access elements of the arr with
  // expressions like a[i]
	
  // initialize all elements
  int i;
  int j;
  int size_array = n;
  int target = k;
  int num_left = size_array;
  int count = 0;

 
  // counting to k,
  // mark the eliminated element
  // print the index of the marked element
  // repeat until only one element is unmarked

 for(i = 0; i < size_array; ++i)
  {
    arr[i] = 1;
  }

  for(i = 0; i <= size_array; ++i)
  {
    while (num_left != 1)
    {
      for(j = 0; j < size_array; ++j)
      {
        if (arr[j] !=0)
        {
          arr[j] = ++count;
          if (arr[j] == target)
          {
            count = 0;
            arr[j] = count;
            printf("%d\n", j);
            --num_left;
          }
        }
      }
      
    }
  }




  // print the last one
  for(i = 0; i < size_array; ++i)
  {
    if(arr[i] != 0)
    {
      printf("%d", i);
    }
  }



  // release the memory of the array
  free (arr);
}
#endif
