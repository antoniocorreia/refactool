#include <stdio.h>
#define VAR 64

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
   	int varcaf6406b9e5e4a5ea6dd27cacfb9c70e = (j < m && k < n);
	if (varcaf6406b9e5e4a5ea6dd27cacfb9c70e){
		if (a[j] < b[k]) {
			sorted[i] = a[j];
			j++;
		}
		else {
			sorted[i] = b[k];
			k++;
		}
		i++;
    }
	#ifdef VAR == 1	
		if(!(varcaf6406b9e5e4a5ea6dd27cacfb9c70e) &&  (j == m) ){
			for (; i < m + n;) {
				sorted[i] = b[k];
				k++;
				i++;
			}
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
