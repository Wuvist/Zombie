#include <stdio.h>

double get_time(double c, double f, double x) {
	double gap = x - c;
	double gapf = gap * f;
	double xgap = x - gap;

    double total = 0.0;
    double speed = 2.0;

    while(xgap * speed < gapf) {
        total += c / speed;
        speed += f;
    }
    total += x / speed;
    return total;
}

int main(void) {
    printf("%e\n", get_time(37, 7, 54500000000.0));
	return 0;
}
