
/** 
MAX_ELEMENT(elements, n)
  max = elements[0]
  for i = 1 to n-1
    if elements[i] > max
      max = elements[i]
  return max
 **/
 #include <stdio.h>
int max_element(int elements[], int n) {
  int max = elements[0];
  for (int i = 1; i < n; i++) {
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