#include <iostream>
using namespace std;

int main() {
	
	int  testCases = 0;
	int x; //Target score
	int y; //current score
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >>x >>y;
	    cout <<(x - y) <<endl;
	}
	return 0;
}
