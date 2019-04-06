//Practicing better understanding of mergesort
//by tracing java example in 
//Algorithms, Sedgewick and Wayne


#include <iostream>
#include <vector>
#include <cstdlib>


void merge(std::vector<int>& a, std::vector<int>& aux, int lo, int mid, int hi){
	int i = lo;
	int j = mid+1;

	for (int k = lo; k<=hi; k++){
		aux[k] = a[k];
	}

	for (int k = lo; k<=hi; k++){
		if (i > mid){
			a[k] = aux[j];
			j++;
		}
		else if (j>hi){
			a[k] = aux[i];
			i++;
		}
		else if (a[i]<a[j]){
			a[k] = a[i];
			i++;
		}
		else{
			a[k] = a[j];
			j++;
		}
	}
}


void mergeSort(std::vector<int>& a, std::vector<int>& aux, int lo, int hi){
	if (hi <= lo)
		return;

	int mid = lo + (hi - lo)/2;
	mergeSort(a,aux,lo,mid);
	mergeSort(a,aux,mid+1,hi);
	merge(a,aux,lo,mid,hi);
}

void mergeSort(std::vector<int>& a){
	int c = a.size();
	std::vector<int> aux(c);
	mergeSort(a,aux,0,(a.size() - 1));
}

int main(){
	std::vector<int> unsorted;

	for (int i = 0; i<10; i++){
		unsorted.push_back(rand() % 100);
	}

	for (auto i : unsorted){
		std::cout << "[" << i << "]";
	}

	mergeSort(unsorted);
	
	std::cout << std::endl << "Displaying sorted array \n";

	for (auto i : unsorted){
		std::cout << "[" << i << "]";
	}
}
