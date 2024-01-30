#include "Array.cpp"

int main(){
	Array<int> myArray;
	myArray.insert_at_end(2);
	myArray.insert_at_end(4);
	myArray.insert_at_end(6);
	cout<<myArray;
	
	Array<float> myfArray;
	myfArray.insert_at_end(2.5);
	myfArray.insert_at_end(4.5);
	myfArray.insert_at_end(6.5);
	cout<<myfArray;
    
	return 0;
}