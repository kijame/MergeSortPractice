//Practicing better understanding of mergesort
//by tracing java example in 
//Algorithms, Sedgewick and Wayne


#include <iostream>
#include <vector>
#include <cstdlib>

void mergeSort(std::vector<int>& a){
	
}

int main(){
	std::vector<int> unsorted;

	for (int i = 0; i<20; i++){
		unsorted.push_back(rand() % 100);
	}

	for (auto i : unsorted){
		std::cout << "[" << i << "]";
	}

	mergeSort(unsorted);

	for (auto i : unsorted){
		std::cout << "[" << i << "]";
	}
}
