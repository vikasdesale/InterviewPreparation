#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void switch_triangle(triangle *tr1, triangle *tr2) {
  triangle temp;
  temp = *tr1;
  *tr1 = *tr2;
  *tr2 = temp;
}
double area(triangle tr) {
  double p1=0;
  p1 = (tr.a + tr.b + tr.c) / 2.0;
  return sqrt(p1 * ((p1 - tr.a) * (p1 - tr.b) * (p1 - tr.c)));
}
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/   
        for (int i = 0; i < n; i++) {
          for (int j = i + 1; j < n; j++) {
            if (area(tr[i]) > area(tr[j])) {
              switch_triangle(&tr[i], &tr[j]);
            }
          }
        }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
} 
