//Practicing better understanding of quickSort
//by tracing java example in 
//Algorithms, Sedgewick and Wayne
//tracing algorithm that uses single partition value for whatever values in index
//low of the subarray everytime

#include <iostream>
#include <vector>
#include <cstdlib>


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
