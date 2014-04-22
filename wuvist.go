package main

import "time"

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
	startingTime := time.Now().UTC()

	get_time(37, 7, 54500000000)
	endingTime := time.Now().UTC()
	var duration time.Duration = endingTime.Sub(startingTime)
	print(duration)
}
