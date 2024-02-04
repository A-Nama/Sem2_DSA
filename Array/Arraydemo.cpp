#include "Array.cpp"

int main(){
	Array<int> myArray;
	myArray.insert_at_end(2);
	myArray.insert_at_end(4);
	myArray.insert_at_end(6);
	myArray.insert_at_pos(3,2);
	myArray.insert_at_begin(1);
	cout<<myArray;
	myArray.delete_at_end();
	myArray.delete_at_begin();
	myArray.delete_at_pos(3);
	cout<<myArray;
	cout<<myArray.binarysearch(2);
	myArray.insert_at_begin(9);
	cout<<myArray;
	myArray.bubblesort();
	cout<<myArray;

	
	Array<float> myfArray;
	myfArray.insert_at_end(2.5);
	myfArray.insert_at_end(4.5);
	myfArray.insert_at_end(6.5);
	myfArray.insert_at_pos(3.2,2);
	myfArray.insert_at_begin(1.1);
	cout<<myfArray;
	myfArray.delete_at_end();
	cout<<myfArray;
    cout<<myfArray.linearsearch(3.2);
	myfArray.insert_at_begin(3.5);
	cout<<myfArray;
	myfArray.selectionsort();
	cout<<myfArray;

	return 0;
}