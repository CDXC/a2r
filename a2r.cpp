#include <iostream>
#include <stdlib.h>
using namespace std;
void numeral(char m, int M){cout << string(M, m) ;}
int main(int argc, char* argv[]){
if(argc == 1){cout << "Usage:\n  a2r [number] \n";}else{

int input=strtol(argv[1], nullptr, 0);

	int M = input / 1000;
	int D = input % 1000 / 500;
	int C = input % 1000 % 500 / 100;
	int L = input % 1000 % 500 % 100 / 50;
	int X = input % 1000 % 500 % 100 % 50 / 10;
	int V = input % 1000 % 500 % 100 % 50 % 10 / 5;
	int I = input % 1000 % 500 % 100 % 50 % 10 % 5 / 1;


numeral('M', M);
//##//##//##//##//##//##//##//##//##//##//##
if(D < 1)
{
	if (C > 3)
	{ 
		cout << "CD";
	}
else
	{ 
		numeral('D', D);	
		numeral('C', C);	
	}
}
else if(C > 3)
	{ 
		cout << "CM";
	}
	else
	{
		numeral('D', D);
		numeral('C', C);
	}
//##//##//##//##//##//##//##//##//##//##//##
if(L < 1)
{
	if (X > 3)
	{ 
		cout << "XL";
	}
else
	{ 
		numeral('L', L);	
		numeral('X', X);	
	}
}
else if(X > 3)
	{ 
		cout << "XC";
	}
	else
	{
		numeral('L', L);
		numeral('X', X);
	}
//##//##//##//##//##//##//##//##//##//##//##
if(V < 1)
{
	if (I > 3)
	{ 
		cout << "IV";
	}
else
	{ 
		numeral('V', V);	
		numeral('I', I);	
	}
}
else if(I > 3)
	{ 
		cout << "IX";
	}
	else
	{
		numeral('V', V);
		numeral('I', I);
	}

cout << "\n";
return 0;
}
}
