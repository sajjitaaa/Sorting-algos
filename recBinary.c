//recursive binary search

#include<stdio.h>

int recBinSearch(int arr[50],int lowerBound,int upperBound,int key){
	
	int mid=(lowerBound+upperBound)/2;  
	
	//Trivial part
	if(lowerBound>=upperBound){
		if(arr[mid]==key){
			return mid+1;
		}
		else
			return 0;
	}
	
	//Non-trivial part
	else{
			
		if(arr[mid]==key){
			return mid+1;
		}
		else if(arr[mid]<key){
			recBinSearch(arr,mid+1,upperBound,key);     //key is present in second half
		}
	
		else
			recBinSearch(arr,lowerBound,mid-1,key);    //key is present in lower half
	
	}
	
}

void main(){
	
	int a[50],i,key,first,last,mid,n;
	
	printf("Enter size of the array: \n");
	scanf("%d",&n);
	printf("Enter a sorted array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter key: \n");
	scanf("%d",&key);
	
	first=0;
	last= n;
	int position= recBinSearch(a,first,last,key);
	if(position==0){
		printf("\nElement not found.");
	}
	else{
		printf("\nElement found at %d position! ",position);
	}
}
