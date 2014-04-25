#include <iostream>


// template <int dummy>
// struct Zombie
// {
// 	static constexpr double get_time(double total, double speed, double c, double f, double x) {
// 		double gap = x - c;
// 		double gapf = gap * f;
// 		double xgap = x - gap;

// 		if (xgap*speed >= gapf) {
// 			return total + x / speed;

// 		}

// 		return get_time(total + c / speed, speed + f, c, f, x);
// 	}

//     static constexpr double VALUE = get_time(0, 2.0, 37, 7, 54500000000);
// };

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

int main()
{
    std::cout << get_time(37, 7, 54500000000) << std::endl;
}
