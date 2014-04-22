function get_time(C, F, X) {
	if (X <= C) {
		return X/2;
	}

	var s = X/2, i = 1, pre_time = 0, ret;
	while(true){
		pre_time = pre_time + C / (2 + (i - 1) * F);
		ret = pre_time + X / (2 + i * F);
		if(ret < s){
			s = ret;
			i++;
			continue;
		}
		return s;
	}
}

console.log(get_time(37,7,54500000000));