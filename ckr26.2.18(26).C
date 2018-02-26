#include <stdio.h>

int a[10];

int b[10];

void merging(int low, int mid, int high) {

   int l1, l2, i;



   for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {

      if(a[l1] <= a[l2])

         b[i] = a[l1++];

      else

         b[i] = a[l2++];

   }
   getch();
   }
