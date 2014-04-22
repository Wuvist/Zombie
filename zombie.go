package main

func get_time(C, F, X float64) float64 {
	gap := X - C
	gapF := gap * F
	Xgap := X - gap

	speed := 2.0
	total := 0.0

	for Xgap*speed < gapF {
		total += C / speed
		speed += F
	}

	total += X / speed
	return total

}

func main() {
	print(get_time(37, 7, 54500000000))
}
