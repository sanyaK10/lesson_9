#include <iostream>
//void printArr(const int arr[], int size);
//void printArr(const double arr[], int size);
//void printArr(const char arr[], int size);
using namespace std;
template<typename T>
void printArr(const T arr[], int size); 
void printArr(const bool arr[], int size);

void someFunction(int i = 0) {
	if (i == 0)return;

	cout << i << '\n'; 
}

inline int add(int a, int b) {
	return a + b;
}

int factorial(int n) {
	if (n == 1 || n == 0)return 1;
	else return n * factorial(n - 1);
}

void recursion(int i) {
	cout << ++i << '\n';
	recursion(i);
}


int main()
{	
	recursion(1);
	//cout << factorial(5) << '\n';
	////cout << 10 + 12 << '\n';
	//cout<< add(10, 12)<< '\n';

	//cout << someFunction << '\n';

	//const int SIZE = 5;
	//int arr[SIZE] = { 1, 2, 3, 4, 5 };
	//printArr(arr, SIZE);

	//const int SIZE_2 = 3;
	//int arr2[SIZE_2] = { 10.5, 20.5, 30.5 };
	//printArr(arr2, SIZE_2);

	//const int SIZE_3 = 5;
	//char arr3[SIZE_3] = { 'a', 'b', 'c', 'd', 'e' };
	//printArr(arr3, SIZE_3);

	//const int SIZE_4 = 5;
	//bool arrB[SIZE_4] = { true, false, true, false, true };
	//printArr(arrB, SIZE_4);
}
//void printArr(const int arr[], int size){
//	cout << "{ ";
//	for (int i = 0; i < size; ++i)
//	{
//		if (i == size - 1) {
//			cout << arr[i];
//		}
//		else {
//			cout << arr[i] << ", ";
//		}
//	}
//	cout<<" }";
//}
//
//void printArr(const double arr[], int size) {
//	cout << "{ ";
//	for (int i = 0; i < size; ++i)
//	{
//		if (i == size - 1) {
//			cout << arr[i];
//		}
//		else {
//			cout << arr[i] << ", ";
//		}
//	}
//	cout << " }";
//}
template<typename T>
void printArr(const T arr[], int size) {
	cout << "{ ";
	for (int i = 0; i < size; ++i)
	{
		if (i == size - 1) {
			cout << arr[i];
		}
		else {
			cout << arr[i] << ", ";
		}
	}
	cout << " }";
}

void printArr(const bool arr[], int size) {
	cout << "{ ";
	for (int i = 0; i < size; ++i)
	{
		if (i == size - 1) {
			cout << (arr[i] ? "true" : "false");
		}
		else {
			cout << (arr[i] ? "true" : "false") << ", ";
		}
	}
	cout << " }";
}