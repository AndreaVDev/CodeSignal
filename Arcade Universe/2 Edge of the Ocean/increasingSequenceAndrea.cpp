#include <iostream>
#include <vector>

using namespace std;

bool almostIncreasingSequence(vector<int>);

bool checkSubSequence(vector<int>&);

int main() {
	vector<int> v1 = { 1,3,2,544 };
	bool result = almostIncreasingSequence(v1);
	cout << result << endl;
	return 0;
}

bool almostIncreasingSequence(vector<int> sequence) {

	vector<bool> valid;
	vector<int> subSequence;
	bool sequenzaValida = false;
	bool sequenzaTrovata = false;
	int cnt = 0;


	while (cnt < sequence.size())
	{
		for (int i = 0; i < sequence.size(); i++)
		{
			subSequence.push_back(sequence[i]);
		}		
		subSequence.erase(subSequence.begin() + cnt);
		sequenzaValida =  checkSubSequence(subSequence);
		valid.push_back(sequenzaValida);
		subSequence.erase(subSequence.begin(), subSequence.begin() + subSequence.size());
		cnt++;
	}

	for (int i = 0; i < valid.size(); i++)
	{
		if (valid[i] == true) {
			sequenzaTrovata = true;
			break;
		}
		else {
			sequenzaTrovata = false;
		}
	}
	return sequenzaTrovata;
}

bool checkSubSequence(vector<int> &subSequence) {
	
	bool valido = false;
	vector<int> s1;
	int inc = 1;

	for (int i = 0; i < subSequence.size(); ++i)
	{
		s1.push_back(subSequence[i]);
	}
	int i = 0;
	for (int j = 1; j < s1.size(); j++)
	{
		if (s1[i] < s1[j]) {
			inc++;
		}
		i++;
	}

	if (inc == subSequence.size())
	{
		valido = true;
		return valido;
	}

	else {
		valido = false;
		return valido;
	}

	valido = false;
	inc = 0;
}
