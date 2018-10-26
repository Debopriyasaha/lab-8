// Write a program to find sum of all elements of an array. (Use functions)
#include<iostream>
using namespace std;

void f1 (int arr[], int x){
	for (int i =0; i<=x; i++){
		arr[i] = i;}
}


int f2  (int arr[], int x){
int sum = 0;
	for (int i=0;i<=x;i++){
		sum = sum + arr[i];}
return sum;
}

int main(){

int x;
cout << "Till where do you want to find the sum?" << endl;
cin >> x; 

int arr [x];

// Putting the values in array
f1 (arr, x);

// Adding the values in array
int r = f2 (arr,x);

// Printing the sum
cout << "The sum is " << r << endl;

return 0;
}
