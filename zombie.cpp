#include <iostream>


template <int dummy>
struct Zombie
{
	static constexpr double get_time(double total, double speed, double c, double f, double x) {
		double gap = x - c;
		double gapf = gap * f;
		double xgap = x - gap;

		if (xgap*speed >= gapf) {
			return total + x / speed;
			
		}
		
		return get_time(total + c / speed, speed + f, c, f, x);
	}

    static constexpr double VALUE = get_time(0, 2.0, 37, 7, 54500000000);
};

int main()
{
    std::cout << Zombie<1>::VALUE << std::endl;
}