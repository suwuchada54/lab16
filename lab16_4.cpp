#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d){
	int A,B,C,D;
	int money[4]={1000,100,500,50};
		do{
		A = money[rand()%4];
		B = money[rand()%4];
		C = money[rand()%4];
		D = money[rand()%4];
		}while (A==B||A==C||A==D||B==C||B==D||C==D);
		a = A;
		b = B;
		c = C;
		d = D;
		
}