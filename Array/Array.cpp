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
int Array<T>::binarysearch(T target, int LB, int UB) {

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
	for (int i=LB;i<UB;i++){
		for (int j=LB;j<=UB+LB-i-1;j++){
			if(A[j]>A[j+1]){
				swap(j,j+1);
			}
		}
	}
}

template <class T>
void Array<T>::insertionsort(){
	int n = (UB - LB) + 1;
	for(int i = 1; i< n; i++){
		T key = A[i];
		int j = i - 1;

		while(j >= 0 && A[j] > key){
			A[j + 1] = A[j];
			j = j - 1;
		}
		A[j + 1] = key;
	}
} 

template <class T>
int Array<T>::partition(int LB, int UB) {
    T pivot = A[UB];
    int i = LB - 1;

    for (int j = LB; j < UB; ++j) {
        if (A[j] < pivot) {
            ++i;
            swap(i, j);
        }
    }
    swap(i + 1, UB);
    return (i + 1);
}

template <class T>
void Array<T>::quicksort(int LB, int UB) {
    if (LB < UB) {
        int partition_index = partition(LB, UB);
        quicksort(LB, partition_index - 1);
        quicksort(partition_index + 1, UB);
    }
}
/*******************************************************************************************************************************/
template <class T>
void Array<T>::mergesort(T A[], T B[], T C[],int A_LB, int A_UB, int B_LB, int B_UB){
    int k = 0;
    int j = B_LB;
    int i = A_LB;
    for(; i<= A_UB && j<=B_UB; ++k){
        if(A[i]<B[j]){
            C[k] = A[i++];
        }
        else if (B[j]<A[i]){
            C[k] = B[j++];
        }
        else{
            C[k] = B[j++];
            C[++k] = A[i++];
        }
    }
    while (i<=A_UB){
        C[k++] = A[i++];
    }

    while (j<=B_UB){
        C[k++] = B[j++];
    }
}

template <class T>
void Array<T>::rotateClockwise(int k) {
    int n = UB - LB + 1;
    k = k % n;
    if (k < 0) {
        k += n; 
    }
    T* temp = new T[n];

    for (int i = 0; i < n; ++i) {
        temp[(i + k) % n] = A[i];
    }

    for (int i = 0; i < n; ++i) {
        A[i] = temp[i];
    }

    delete[] temp;
}

template <class T>
void Array<T>::rotateAntiClockwise(int k) {
    int n = UB - LB + 1;
    k = k % n;
    if (k < 0) {
        k += n; 
    }
    T* temp = new T[n];

    for (int i = 0; i < n; ++i) {
        temp[i] = A[(i + k) % n];
    }

    for (int i = 0; i < n; ++i) {
        A[i] = temp[i];
    }

    delete[] temp;
}

template <class T>
void Array<T>::printDistinctElements() {
    int n = UB - LB + 1 ;
    cout << "Distinct Elements: ";
    for (int i = 0; i < n; ++i) {
        bool isDistinct = true;
        for (int j = 0; j < i; ++j) {
            if (A[i] == A[j]) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct) {
            cout << A[i] << " ";
        }
    }
    cout << endl;
}

template <class T>
void Array<T>::generateFrequencyTable() {
    int n = UB - LB + 1 ;
    cout << "Frequency Table:" << endl;
    for (int i = 0; i < n; ++i) {
        int count = 1;
        for (int j = i + 1; j < n; ++j) {
            if (A[i] == A[j]) {
                ++count;
            }
        }
        bool isCounted = false;
        for (int k = 0; k < i; ++k) {
            if (A[i] == A[k]) {
                isCounted = true;
                break;
            }
        }
        if (!isCounted) {
            cout << A[i] << ": " << count << endl;
        }
    }
}

template <class U>
ostream&  operator << (ostream& os,Array<U> M){
	int i;
	os<<endl;
	for (i=M.LB;i<=M.UB;i++){
		os<<M.A[i]<<" ";
	}
	os<<endl;
	return os;
}