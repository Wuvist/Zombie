using System;

class wuvist {
	public static double get_time(double C, double F, double X) {
		double gap = X - C;
		double gapF = gap * F;
		double Xgap = X - gap;
		double speed = 2.0;
		double total = 0.0;
		while (Xgap*speed < gapF) {
			total += C / speed;
			speed += F;
		}
		total += X / speed;
		return total;
	}
	public static void Main() {
		Console.WriteLine(get_time(37, 7, 54500000000.0));
	}
}
