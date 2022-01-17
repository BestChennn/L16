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

void shuffle(int &w, int &x,int &y, int &z){
	int a[] ={50,100,500,1000};
	int e[] ={0,0,0,0};
	int i =0;

	while(i<4){
		bool state = false ;
		int rd=rand()%4;
		for(int j=0;j<i;j++){
			if(e[j] == rd ){
				state = true;break;
			}
		}
		if(!state){
			e[i] = rd;
			i++;
		}
	}
w = a[e[0]];
x = a[e[1]];
y = a[e[2]];
z = a[e[3]];





}
