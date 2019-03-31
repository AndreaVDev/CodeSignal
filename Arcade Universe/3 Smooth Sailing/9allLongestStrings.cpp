std::vector<int> strings_length(std::vector<std::string> input_array) {
	std::vector<int> lenghts;
	for (int i = 0; i < input_array.size(); i++)
	{
		lenghts.push_back(input_array[i].length());
	}

	return lenghts;
}

std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
	std::vector<int> lenghts = strings_length(inputArray);
	int max_lenght = 0;
	for (int i = 0; i < lenghts.size(); i++)
	{
		if (lenghts[i] > max_lenght) {
			max_lenght = lenghts[i];
		}
	}

	std::vector<std::string> result;

	for (int i = 0; i < inputArray.size(); i++)
	{
		if (inputArray[i].length() == max_lenght) {
			result.push_back(inputArray[i]);
		}
	}

	return result;
}