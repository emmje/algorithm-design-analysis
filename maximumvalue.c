
/** Psuedo code for finding the maximum element
MAX_ELEMENT(elements, n)
  max = elements[0]
  for i = 1 to n-1
    if elements[i] > max
      max = elements[i]
  return max
 **/
 #include <stdio.h>
int max_element(int elements[], int n) //  This is the function which takes two inputs: elements (the array) and n (the number of elements in the array)
{
  int max = elements[0]; //We initialize max to the first maximum element of the array 
  for (int i = 1; i < n; i++) { // We start a loop that will iterate from the second element of the array (i = 1) to the last element (n-1)
    if (elements[i] > max) {
      max = elements[i];
    }
  }
  return max;
}

int main() {
  int elements[] = {4, 2, 9, 6, 5, 12, 8, 3};
  int n = sizeof(elements) / sizeof(elements[0]);
  int max = max_element(elements, n);
  printf("Maximum element in the array is: %d\n", max);
  return 0;
}
