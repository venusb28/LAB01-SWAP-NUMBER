#include <iostream>
using namespace std;

void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	
	int x =10;
	int y =20;
	cout << "before swapping: x " << x << ", y = " << y << endl;
	
	//call the swapping function
	void swap(int x, int y);
	
	//display the value after swapping
	cout << "\nafter swapping: x " << y << ", y = " << x << endl;
	
	return 0;
}