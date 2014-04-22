<?php

function get_time($C, $F, $X) {
	$gap = $X - $C;
	$gapF = $gap * $F;
	$Xgap = $X - $gap;
	$speed = 2.0;
	$total = 0.0;
	while ($Xgap*$speed < $gapF) {
		$total += $C / $speed;
		$speed += $F;
	}
	$total += $X / $speed;
	return $total;
}

echo get_time(37.0, 7.0, 54500000000.0);