function get_time(C, F, X) {
	gap = X - C
	gapF = gap * F
	Xgap = X - gap

	speed = 2.0
	total = 0.0

	while(Xgap * speed < gapF) {
		total += C / speed
		speed += F		
	}

	total += X / speed
	return total
}

console.log(get_time(37,7,54500000000));