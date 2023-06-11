#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>


using namespace std;

int main() {
	
srand(time(NULL));

vector<int>A;
vector<int>B;

for(int i=0; i<10;i++){
	int num= rand () % 100;
	A.push_back(num);
}	

for (int i=0;i<A.size();i++){
 if(A[i] % 2 == 0){
 	B.push_back(A[i]);
 }
}
 
 cout<<"Vector A: ";
 
 for(int i=0;i<A.size();i++){
 cout<<A[i]<<" ";
}
 cout<<endl;
 
 cout<<"Vector B (Numeros Pares de A): ";
 for(int i=0;i<B.size();i++){
 cout<<B[i]<<" ";
}
cout<<endl;
 	
	return 0;
}
