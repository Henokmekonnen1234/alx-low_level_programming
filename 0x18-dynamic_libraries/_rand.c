int rand(void)
{
	static int num_idx = 0;
	int nums[] = {8, 8, 7, 9, 23, 74};
	int rand_num = nums[num_idx++];

	return (rand_num);
}
