#ifndef NATURAL_H
#define NATURAL_H


class	Natural{
	private:
		unsigned	int	value;
									
	public:
		Natural(int	v);
		~Natural();
		Natural	suc();
		Natural	soma(Natural	n);
    Natural mult(Natural n);
    Natural minus(Natural n);
     unsigned	int	getValue();
};

#endif