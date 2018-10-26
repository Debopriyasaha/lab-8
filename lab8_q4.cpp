// Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)

#include<iostream>
using namespace std;

int f1 (int arr[],int n){
	int max = arr [0];
	for (int i=0;i<=n;i++){
	if (max < arr[i]){max = arr[i];}}
return max;
}
	
int f2 (int arr[],int n){
	int min = arr [0];
	for (int i=0;i<=n;i++){
	if (min > arr[i]){min = arr[i];}}
return min;
}

int main(){

int n1,n2;
// Formation of 2 arrays
cout << "First, let's form 2 arrays." << endl;
cout << "How many elements should the first and second array have?" << endl;
cin >> n1>>n2;


int a1[n1-1];
int a2[n2-1];
cout << "Elements of array 1 plz." << endl;
for (int i =0;i<n1;i++){cin >> a1[i];}
cout << "Elements of array 1 are ";
for (int i=0;i<n1;i++){cout << a1[i]<< " ";}
cout << endl;

cout << "Elements of array 2 plz." << endl;
for (int i =0;i<n2;i++){cin >> a2[i];}
cout << "Elements of array 2 are ";
for (int i=0;i<n2;i++){cout << a2[i]<< " ";}
cout << endl;


// Forming a new combined array
int n = (n1+n2)-1;
int a3[n];
for (int i=0;i<n1;i++){a3[i]=a1[i];}

for (int i=n1;i<(n1+n2);i++){a3[i]=a2[(i-n1)];}

cout << "Elements of combined array are ";
for (int i=0;i<=n;i++){cout << a3[i]<< " ";}
cout << endl;

// Finding max
int r1 = f1(a3,n);
cout << "The max of elements is " << r1 << endl;

// Finding min
int r2 = f2(a3,n);
cout << "The min of elements is " << r2 << endl;

return 0;
}
