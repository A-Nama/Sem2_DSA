#include<iostream>
#include<ostream>
using namespace std;

template <class T>
class Array{
	public:
	int LB,UB;
	T A[100];
    

  	Array();
  	Array(int,int,T[]);
  	void insert_at_end(T);
	void insert_at_pos(T,int);
	void insert_at_begin(T);
	void delete_at_end();
	void delete_at_begin();
	void delete_at_pos(int);
	int linearsearch(T);
	int binarysearch(T, int, int);
	void selectionsort();
	void bubblesort();
	void insertionsort();
	void quicksort(int, int);
	void mergesort(T[], T[], T[], int, int,int,int);
	int partition(int, int);
	void rotateClockwise(int);
	void rotateAntiClockwise(int);
	void printDistinctElements();
	void generateFrequencyTable();
	/*int findmin();*/
	void swap(int,int);

 	template <class U>
  	friend ostream& operator<<(ostream&, Array<U> );
};