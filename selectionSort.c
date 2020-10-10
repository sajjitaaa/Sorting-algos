//selection sort - fix min. element
#include<stdio.h>


void selectSort(int arr[],int n){
	int i,j,key;
	for(i=0;i<n-1;i++){                    //c1= n-1 =O(n)
		
		
		for(j=i+1;j<n;j++){             //c2= (n+(n-1)+(n-2)+..)= n(n-1)/2 =O(n^2)
			int min_index=i;
			if(arr[j]<arr[min_index]){     //c3= 1 =O(1)
				
				swap(arr,j,min_index);    //O(c1+c2+c3) = O(n^2)-Worst case
				
			}
		}
	}

}
void swap(int arr[],int j,int min_index){
	
	 	int temp= arr[min_index];
		arr[min_index]=arr[j];
		arr[j]=temp;
				
	
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
	int n,key;
	
	int i;
	printf("Enter no. of terms: ");
		scanf("%d",&n);
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	selectSort(arr,n);
	printArray(arr,n);
	return 0;
}













