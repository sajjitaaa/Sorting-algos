//recursive merge sort
#include<stdio.h>
#include<stdlib.h>

void merge(int arr[], int low, int mid, int high) {
	
	int i,j,k;
	//selecting the length of new arrays
	int l1= mid-low+1;                   
	int l2= high-mid;
	
	int A[l1],B[l2];
	
	//Creating two subarrays of above lengths

	for(i=0;i<l1;i++){
		
		A[i]= arr[low+i];
	}
	for(j=0;j<l2;j++){
		
		B[j]= arr[mid+1+j];
	}
	
	//comparing and merging
	i=0;
	j=0;
	k=low;
	while( i<l1 && j<l2 ){
		if(A[i]<=B[j]){
			arr[k] = A[i];
			i++;
		}
		else{
			arr[k] = B[j];
			j++;
		}
		k++;
	}
	
	//remaining elements in one of the arrays

	for( ; i<l1;i++){
		arr[k]= A[i];
		k++;
	}
	for( ; j<l2 ; j++){
		arr[k]= B[j];
		k++;  
	}
	//	while(i<l1){
//		arr[k]=A[i];
//		k++;i++;
//	}
//	while(j<l2){
//		arr[k]=A[j];
//		k++;j++;
//	}
	
}

void recMergeSort(int arr[],int lowerBound,int upperBound){
	
	if (lowerBound<upperBound){
		int mid;
		mid= (lowerBound+upperBound) /2;
		
		recMergeSort(arr,lowerBound,mid);
		recMergeSort(arr,mid+1,upperBound);
		
		merge(arr, lowerBound, mid, upperBound);
		
	}
}


void print(int arr[],int n ){
	int i;
	printf("\n The sorted array is: ");
	for(i=0;i<n;i++){
		printf(" %d",arr[i]);
	}
}

int main(){
	int arr[50];
	int n,i;
	printf("\n Enter the no. of elements in the array: ");
	scanf("%d",&n);
	
	printf("\n Enter the elements of the array: ");
	for(i=0;i<n;i++){
		
		scanf("%d",&arr[i]);
	}
	
	recMergeSort(arr,0,n-1);
	print(arr,n);
	
	return 0;
}
