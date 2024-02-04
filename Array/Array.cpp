#include"Array.h"

template <class T>
Array<T>::Array(){
	LB=1;
	UB=0;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[]){
	int i=LB;
	while(i<=UB){
		A[i] = x[i];
		i++;
		}
}

template <class T>
void Array<T>::insert_at_end(T key){
	UB=UB+1;
	A[UB]=key;
}

template <class T>
void Array<T>::insert_at_pos(T key, int pos){
	UB=UB+1;
	int i=UB-1;
	while (i>=pos){
		A[i+1] = A[i];
		i = i-1;
	}
	A[pos] = key;
}

template<class T>
void Array<T>::insert_at_begin(T key)
{
	UB+=1;
	int k=UB-1;
	while (k>=LB)
	{
		A[k+1]=A[k];
		k-=1;
	}
	A[LB]=key;
}

template <class T>
void Array<T>::delete_at_end(){
    if (UB >= LB) { 
        UB = UB - 1; 
    }
    else {
        cout << "Array is empty. No element to delete." << endl;
    }
}

template <class T>
void Array<T>::delete_at_begin(){
    if (UB >= LB) { 
        for (int i = LB + 1; i <= UB; ++i) {
            A[i - 1] = A[i]; 
        }
        UB = UB - 1; 
    }
    else {
        cout << "Array is empty. No element to delete." << endl;
    }
}

template <class T>
void Array<T>::delete_at_pos(int pos){
    if (pos < LB || pos > UB) { \
        cout << "Invalid position. Element deletion failed." << endl;
        return;
    }

    for (int i = pos; i < UB; ++i) {
        A[i] = A[i + 1]; 
    }

    UB = UB - 1;
}

template <class T>
int Array<T>::linearsearch(T target) {
    for (int i = 0; i < UB; ++i) {
        if (A[i] == target) {
            return i; 
        }
    }
    return -1; 
}

template <class T>
int Array<T>::binarysearch(T target) {

    while (LB < UB) {
        int mid = (LB + UB) / 2;
        if (A[mid] == target) {
            return mid; 
        } else if (A[mid] < target) {
            LB = mid + 1; 
        } else if (A[mid] > target) {
            UB = mid - 1; 
        }
    }
	return -1;
}

/* template <class T>
int Array<T>::findmin() {
    int min = LB; 
    for (int j = LB + 1; j <= UB; j++) { 
        if (A[j] < A[min]) {
            min = j; 
        }
    }
    return min;
}*/

template <class T>
void Array<T>::swap(int p,int q){
	T temp=A[p];
	A[p]=A[q];
	A[q]=temp;
}
template<class T>
void Array<T>::selectionsort(){
	int i,j;
	for (i=LB;i<UB;i++){
		int min=i;
		for (j=i+1;j<=UB;j++){
			if (A[j]<A[min]){
				min=j;
			}
		}
		if (min!=i){
			swap(i,min);
		}
	}	
}

template <class T>
void Array<T>::bubblesort(){
	int i,j;
	for (i=LB;i<UB;i++){
		for (j=LB;j<=UB+LB-i-1;j++){
			if(A[j]>A[j+1]){
				swap(j,j+1);
			}
		}
	}
}

template <class U>
ostream& operator << (ostream& os,Array<U> M){
	int i;
	os<<endl;
	for (i=M.LB;i<=M.UB;i++){
		os<<M.A[i]<<" ";
	}
	os<<endl;
	return os;
}