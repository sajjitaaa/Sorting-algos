//insertion sort
#include<stdio.h>

void insertSort(int arr[],int n){

    int i,key,j; 
    for (i=1; i<n; i++) { 
        key = arr[i];         
        j = i-1; 
  
        while (j>=0 && arr[j]>key) {    
            arr[j+1] = arr[j]; 
            j = j-1; 
        } 
        arr[j+1] = key; 
    } 

}

void printArray(int arr[],int n){
	
	int i;
	printf("The sorted array is: ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
}

int main(){
	int arr[10];
	int i,n;

	printf("Enter no. of terms: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++){
		scanf("%d ",&arr[i]);
	}

	insertSort(arr,n);
	printArray(arr,n);
	return 0;
}













