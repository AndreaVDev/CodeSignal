#include <iostream>
#include <vector>
#include <algorithm>

bool isStrictlyIncreasing(std::vector<int>& sequence) {
	return (std::adjacent_find(sequence.begin(), sequence.end(), 
		std::greater_equal<int>()) == sequence.end()) ? true : false;
}

bool almostIncreasingSequence(vector<int> sequence) {

    std::vector<int> copied_sequence;

	for (size_t i = 0; i < sequence.size(); ++i) {
		copied_sequence = sequence;
		copied_sequence.erase(copied_sequence.begin() + i);

		if (isStrictlyIncreasing(copied_sequence)) {
			return true;
		} else {
			return false;
		}
	}
}

int main()
{
	std::vector<int> sequence { 1, 4, 3, 5 }, copied_sequence {};

	for (size_t i = 0; i < sequence.size(); ++i) {
		copied_sequence = sequence;
		copied_sequence.erase(copied_sequence.begin() + i);

		if (isStrictlyIncreasing(copied_sequence)) {
			std::cout << "By removing " << sequence[i] << " the sequence is strictly increasing.\n";
		} else {
			std::cout << "By removing " << sequence[i] << " the sequence is not strictly increasing.\n";
		}
	}
	return 0;
}