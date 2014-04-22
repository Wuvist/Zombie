function get_time(C, F, X) {
	//总阳光还不如一朵花所需阳光的情况
	if (X <= C) {
		return X/2;
	}

	var s = X/2, i=1, pre_time=0;
	var get_single_time = function(n, C, F, X) {
		pre_time = pre_time + C / (2 + (n - 1) * F);
		return pre_time + X / (2 + n * F);
	}

	//本来这里想递归的，但是考虑到你等下给我100亿条数据
	//内存就爆了，所以还是老实循环吧~
	while(true){
		ret = get_single_time(i, C, F, X);
		if(ret >= s){
			return s;
		}
		s = ret;
		i++;
	}
}

console.log(get_time(37,7,54500000000));
