#include<stdio.h>
//heap sort//
int main(){
	//initialize the largest element as the root//
	//int left=2*i+1;  this is the left child index//
	//int rigth=2*1+2;this is the write child index//
	//if the left child is larger than root(i) then (left < n && arr[left]>arr[largest] therefore largest =left//
		//if the right child is larger than root(i) then (right < n && arr[right]>arr[largest] therefore largest =right//
		//if the largest element in the array is not the root then swap arr[i] with arr[largest] and then heapify the affected sub tree which is heapify(arr ,n ,largest)//
	
	int arr[]= {7,2,1,6,8,5,3,4};
	//build the heap (rearrange the array) for (int i=n/2-1;i>=0;i--) heapify(arr, i, 0)//
	//extract each element from the heap one by one * for(int i=n-1;i>=0;i--)//
	//then move the current root or largest element to the end  *swap(& arr[0], &arr[i]);//
	//call heapify on the reduced heap * heapify(arr, i, 0);
	int n=(arr[0]);
	printf("sorted array....");
	//n is the size of the heap//
	//i is the root or index//
	for (int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		
	}
	printf("\n");
	return 0;
}