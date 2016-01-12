#include <stdio.h>
#define SIZE 64

//C programming code to merge two sorted arrays
 
void merge(int [], int, int [], int, int []);
 
int main() {
  int a[100], b[100], m, n, c, sorted[200];
 
  printf("Input number of elements in first array\n");
  scanf("%d", &m);
 
  printf("Input %d integers\n", m);
  for (c = 0; c < m; c++) {
    scanf("%d", &a[c]);
  }
 
  printf("Input number of elements in second array\n");
  scanf("%d", &n);
 
  printf("Input %d integers\n", n);
  for (c = 0; c < n; c++) {
    scanf("%d", &b[c]);
  }
 
  merge(a, m, b, n, sorted);
 
  printf("Sorted array:\n");
 
  for (c = 0; c < m + n; c++) {
    printf("%d\n", sorted[c]);
  }
 
  return 0;
}
 
void merge(int a[], int m, int b[], int n, int sorted[]) {
  int i, j, k;
 
  j = k = 0;
 
	for (i = 0; i < m + n;) {
   	if (j < m && k < n) {
		int var7744669 =  (a[j] < b[k]) ;
	if (var7744669){

			sorted[i] = a[j];
			j++;
		
	}
	#ifdef SIZE == 1			
		 if(!(var7744669) &&  (j == m) ){

			for (; i < m + n;) {
				sorted[i] = b[k];
				k++;
				i++;
			
		}
	#endif
		else {
			for (; i < m + n;) {
				sorted[i] = a[j];
				j++;
				i++;
			}
		}
	}
}