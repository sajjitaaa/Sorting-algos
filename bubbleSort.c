//bubble sort- fix last element - pair wise comparison
#include<stdio.h>

void bubbleSort(int arr[],int max){
	int i,j;
	for( i=0;i<max-1;i++){          //O(n)
		for( j=0;j<max-i-1;j++){      //O(n^2)
			if(arr[j]>arr[j+1]){    //O(1)
				Swap(j,arr);
			}
		}
	}
}

void Swap(int j,int arr[]){
	int temp;
	temp=arr[j];
	arr[j]=arr[j+1];
	arr[j+1]=temp;
	
}

void print(int arr[],int max){
	int i;
	printf("\n The sorted array is: ");
	for(i=0;i<max;i++){
		printf(" %d",arr[i]);
	}
}

int main(){
	int arr[10];
	int n,i;
	printf("\n Enter the no. of elements in the array: ");
	scanf("%d",&n);
	
	printf("\n Enter the elements of the array: ");
	for(i=0;i<n;i++){
		
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,n);
	print(arr,n);
	
	return 0;
}
