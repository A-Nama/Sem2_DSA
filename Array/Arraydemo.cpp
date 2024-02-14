#include "Array.cpp"

int main(){
	Array<int> myArray;
	myArray.insert_at_end(2);
	myArray.insert_at_end(4);
	myArray.insert_at_end(6);
	myArray.insert_at_begin(9);
	cout<<myArray;
	myArray.quicksort(myArray.LB, myArray.UB);
	cout<<myArray;
	
	Array<float> myfArray;
	myfArray.insert_at_end(2.5);
	myfArray.insert_at_end(4.5);
	myfArray.insert_at_end(6.5);
	cout<<myfArray;
	myfArray.insert_at_end(2.5);
	myfArray.generateFrequencyTable();
    myfArray.rotateClockwise(1);
	cout<<myfArray;
	myfArray.printDistinctElements();
	
	return 0;
}