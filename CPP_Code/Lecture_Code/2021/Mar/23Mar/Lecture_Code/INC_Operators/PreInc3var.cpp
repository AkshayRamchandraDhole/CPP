#include<iostream>
int main(){

	int x = 20 ;
	int ans ;
	ans = ++x + ++x + ++x ;
	std::cout<<ans<<std::endl;
	std::cout<<x<<std::endl;
	return 0;
}
