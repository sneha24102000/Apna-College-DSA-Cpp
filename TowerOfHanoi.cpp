//Tower Of Hanoi



#include<iostream>
using namespace std;



void TowerOfHanoi(int n, char src, char dest, char help)//n=no.of blocks,src=source,dest=destination,help=helper
{   

    if(n==0)
{
	return;
}
	TowerOfHanoi(n-1,src,help,dest);
	cout<<"Move from "<<src<<"to"<<dest<<endl;
	TowerOfHanoi(n-1,src,help,dest);
}



int main()
{
	TowerOfHanoi(3,'A','C','B');
	return 0;
}
