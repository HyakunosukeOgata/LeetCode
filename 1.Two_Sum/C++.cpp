#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()  
{  
    int ptr1[5] = {3,1,2,6,9}; // integer array declaration  
    int *p;
    p = &ptr1[0];
	cout << &ptr1[0] << endl;
	cout << &ptr1[1] << endl; 
	cout << &ptr1[2] << endl;  
	for (int i = 0; i < 5; i++){
		cout << *p++ << endl;
	}
}  