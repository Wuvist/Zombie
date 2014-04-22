function get_time(C, F, X) 
	gap = X - C
	gapF = gap * F
	Xgap = X - gap

	speed = 2.0
	total = 0.0

	while Xgap * speed < gapF do
		total = total + C / speed
		speed = speed + F
	end

	total = total + X / speed
	return total
end

print(get_time(37,7,54500000000))