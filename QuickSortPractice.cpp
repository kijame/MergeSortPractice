//Practicing better understanding of quickSort
//by tracing java example in 
//Algorithms, Sedgewick and Wayne
//tracing algorithm that uses single partition value for whatever values in index
//low of the subarray everytime

#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>

void quickSort(std::vector<int>& a);

void quickSort(std::vector<int>& a, int lo, int hi);

int partition(std::vector<int>& a, int lo, int hi);

int main(){
	std::vector<int> unsorted;
	
	for (int i = 0; i<21; i++){
		unsorted.push_back(rand() % 100);
	}

	for (auto i : unsorted){
		std::cout << "[" << i << "]";
	}

	std::cout << std::endl << std::endl;

	quickSort(unsorted);
	
	std::cout << std::endl << "Displaying sorted array \n";

	for (auto i : unsorted){
		std::cout << "[" << i << "]";
	}

	std::cout << std::endl;

}

void quickSort(std::vector<int>& a){
	quickSort(a,0,a.size() - 1);
}

void quickSort(std::vector<int>& a, int lo, int hi){
	if (hi <= lo){
		return;
	}
	int j = partition(a,lo,hi);
	quickSort(a,lo,j-1);
	quickSort(a,j+1,hi);
}

int partition(std::vector<int>& a, int lo, int hi){
	int i = lo;
	int j = hi + 1;
	int hold = a[lo];

	while (true){
		while (a[++i]<hold){
			if (i == hi)	break;
		}
		
		while (hold<a[--j]){
			if (j == lo)	break;
		}

		if (i>=j)  break;

		std::swap(a[i],a[j]);
	}

	std::swap(a[lo],a[j]);
	return j;
}
		
//note













