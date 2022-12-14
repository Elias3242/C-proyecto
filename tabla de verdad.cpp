#include <iostream>

using namespace std;

int main () {
	int p[4] = {1,1,0,0};
	int q[4] = {1,0,1,0};
	
	int limite=sizeof(p)/sizeof(p[0]);
	for (int c=0; c<limite; c++ ) {
			if (p[c] & q[c] ){cout<< "1" <<endl;
			} else { cout<< "0" <<endl;
			}
	}
		 
			
}
