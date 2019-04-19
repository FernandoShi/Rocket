int getmq(){
	dspmq();
	strmq();
	int err = endmq();
	if(err == 0)
		return 0;
	else
		return -1;
}
