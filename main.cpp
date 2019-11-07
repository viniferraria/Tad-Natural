#include <iostream>
#include "Natural.h"

Natural::Natural(int	v){
  value=v;
}

Natural::~Natural(){}

unsigned	int	Natural::getValue(){	
	return	value;
}

Natural	Natural::suc(){
	Natural	n(value+1);
	return	n;
}

Natural	Natural::soma(Natural	n){
	Natural	s(value+n.getValue());
	return	s;
}

Natural Natural::mult(Natural n){
  Natural a(value*n.getValue());
  return a;
}

Natural	Natural::minus(Natural	n){
	Natural	b(value-n.getValue());
	return	b;
}

int main(){
  Natural X(4);
  Natural Y(2);
  Natural res1 = X.suc().soma(Y);
  Natural res2 = X.soma(Y).suc();
  Natural res3 = X.mult(Y);
  Natural res4 = X.minus(Y).suc();
  Natural res5 = X.suc().minus(Y);
  std::cout << "X: " << X.getValue() << " Y: " << Y.getValue() << std::endl;
  std::cout << "X.suc + Y = " <<res1.getValue() << std::endl;
  std::cout << "X + Y.suc = " <<res2.getValue() << std::endl;
  std::cout << "X * Y = " << res3.getValue() << std::endl;
  std::cout << "X - Y.suc = " << res4.getValue() << std::endl;
  std::cout << "X.suc - Y = " << res5.getValue() <<std::endl;
  return 0;
}