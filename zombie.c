
double get_time(double total, double speed, double c, double f, double x) {
	double gap = x - c;
	double gapf = gap * f;
	double xgap = x - gap;

	if (xgap*speed >= gapf) {
		return total + x / speed;
		
	}
	
	return get_time(total + c / speed, speed + f, c, f, x);
}

int main(void) {
	get_time(0, 2,37, 7, 54500000000.0);
	return 0;
}
