/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief I am a Computer Science Engineer
 *
 * <Add Extended Description Here>
 *
 * @author ARBAAZ MAKANDAR
 * @date 20 Jan 2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
  
        /* Move elements of arr[0..i-1], 
           that are greater than key, 
           to one position ahead of 
           their current position */
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
  

void print_array(int test[], int SIZE) {
  // -  Given an array of data and a length, prints the array to the screen
for (int i = 0; i < SIZE; ++i) {
    printf("%d  ", test[i]);
  }
  printf("\n");
}

void find_median(int test[], int SIZE, int max, int min) {
  //- Given an array of data and a length, returns the median value
  insertionSort(test,SIZE);
  int median = (test[19]+test[20])/2;
   printf("Median is %d\n.", median);
  }


void find_mean(int test[], int SIZE) {
//-  Given an array of data and a length, returns the mean
int sum = 0;
for(int i=0;i<SIZE;i++){
    sum += test[i];
  }
  printf("Mean is %d\n.", sum/SIZE);

}


int find_maximum(int test[], int SIZE)
// -  Given an array of data and a length, returns the maximum
{
  int max = -2147483648;
  for(int i=0;i<SIZE;i++){
    if(test[i]>max) max = test[i];

  }

  printf("Maximum is %d\n.", max);
return max;

}

int find_minimum(int test[], int SIZE) 
//-  Given an array of data and a length, returns the minimum
{
  int min = 2147483647;
  for(int i=0;i<SIZE;i++){
    if(test[i]<min) min = test[i];

  }
  printf("Minimum is is %d\n.", min);

    return min;
}

void sort_array(int test[], int SIZE, int max, int min) 
//- Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
{
  
  insertionSort(test,SIZE);
  print_array(test,SIZE);

}
void print_statistics(int test[], int SIZE) {
  //- A function that pri{nts the statistics of an array including minimum, maximum, mean, and median.
  print_array(test,SIZE);
  find_mean(test,SIZE);
  int max = find_maximum(test, SIZE);
  int min = find_minimum(test, SIZE);

  
  find_median(test,SIZE,max,min);
  sort_array(test,SIZE, max, min);
}

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
