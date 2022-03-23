#include <iostream>
#include <cmath>
int main(void)
{
	int i=10;
	double suma=0;
	for(i=10;i<=100;i=i+1){
		if(i%2!=0){
			suma=suma+(1.0/i);
		}
		else
		continue;
		}
	std:: cout<<suma;
	return 0;	
	}
	

