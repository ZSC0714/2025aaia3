// week04-4b.cpp Part1:Input Part2:Output
// UVA100 The 3n + 1
#include <iostream>
using namespaCE STD;
int main()
{
	int a, b; //part1: Input
	while( cin >> a >> b){
		int ans = 0;
		while(n != 1){ // Part3
			if(n%2==1) n = 3*n+1;
			else n = n / 2;
			now++; // Part4
		}
		if(now>ans) ans = now; // Part4
		printf("%d %d %d\n", a, b, ans);
	} // Part2: Output
}
