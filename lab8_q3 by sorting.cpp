// Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)

#include<iostream>
using namespace std;

void swap(int *xp,int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void sort(int arr[], int n){
	int i,j;
	for (i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if (arr[j] > arr[j+1]){ swap(&arr[j], &arr[j+1]);}
		}
	}
}


int main(){
int n;

// Forming an array
cout << "Let's form an array first." << endl;
cout << "How many elements you want?" << endl;
cin >> n;
int a[n-1];

cout << "Enter the elements for the array." << endl;
cout << "!!!!NOTE:- The elements should not be repeated!!!!!" << endl;
for(int i=0;i<n;i++){cin >> a[i];}


int k;
cout << "Which kth max and min value you wish to find?" << endl;
cin >> k;

// Sorting the array
sort(a,n);
// Finding the max
int r1=a[n-k];
cout << "Kth max element is " << r1 << endl;

// Finding the min
int r2=a[k-1];
cout << "Kth min element is " << r2 << endl;


return 0;
}
