bool isLucky(int n) {
	std::vector<int> v;

	int cnt = 0;

	do {
		v.push_back( n % 10);
	} while (n /= 10);
	
	std::reverse(v.begin(), v.end());

	int half = (v.size()) / 2;

	int sumLeft = 0;
	int sumRight = 0;

	for (int i = 0; i < half; i++)
	{
		sumLeft += v[i];
	}

	for (int i = half; i < v.size(); i++)
	{
		sumRight += v[i];
	}

	if (sumLeft == sumRight) {
		return true;
	}
	else {
		return false;
	}

}