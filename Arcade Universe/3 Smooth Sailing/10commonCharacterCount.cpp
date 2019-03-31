std::vector<char> alphabet{ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
const int DIM = 26;

int commonCharacterCount(std::string s1, std::string s2) {

	int sum = 0;
	int letter_frequence1[DIM] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int letter_frequence2[DIM] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

	for (int i = 0; i < s1.length(); ++i) {
		for (int j = 0; j < DIM; ++j)
		{
			if (s1[i] == alphabet[j]) {
				letter_frequence1[j]++;
			}
		}
	}

	for (int i = 0; i < s2.length(); ++i) {
		for (int j = 0; j < DIM; ++j)
		{
			if (s2[i] == alphabet[j]) {
				letter_frequence2[j]++;
			}
		}
	}
	
	for (int i = 0; i < DIM; i++)
	{
		if (letter_frequence1[i] > 0 && letter_frequence2[i] > 0) {
			if (letter_frequence1[i] > letter_frequence2[i]) {
				sum +=  letter_frequence2[i];
			}
			else if (letter_frequence1[i] == letter_frequence2[i]) {
				sum += letter_frequence1[i];
			}
			else if (letter_frequence1[i] < letter_frequence2[i]) {
				sum +=  letter_frequence1[i];
			}
		}

	}

	return sum;
}