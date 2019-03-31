#include <iostream>
#include <vector>

void swap(int *xp, int *yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = tmp;
}

std::vector<int> bubbleSort(std::vector<int> v) {
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < v.size() - 1; ++i)
		{
			if (v[i] != -1)
			{
				if(v[j] > v[j+1]) 
				{
					swap(&v[j],&v[j+1]);
				}
			}
		}
	}
	return v;
}
std::vector<int> sortByHeight(std::vector<int> a) {
	return bubbleSort(v);
}

void print_v_int(std::vector<int> v) {
	for (int i = 0; i < v.size(); ++i)
	{
		std::cout<<v[i]<<" ";
	}
	std::cout<<std::endl;
}

int main() {

    std::vector<int> v{1,2,45,98,-1,876,-1,908,3,1,45,6,-1,89,0};
    
    print_v_int(v);
    
    sortByHeight(v);
    
    print_v_int(v);

	return 0;
}