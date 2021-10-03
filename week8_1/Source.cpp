#include<stdio.h>
void calculate(int x, int y) {
	if (x > y) {
		printf("%d have value more than %d", x, y);
	}
	else if (y > x) {
		printf("%d have value more than %d", y, x);
	}
	else printf("%d have value equal to %d", x, y);
}
int main() {
	int x, y;
	printf("Enter two number :");
	scanf_s("%d %d", &x, &y);
	calculate(x, y);
	return 0;
}