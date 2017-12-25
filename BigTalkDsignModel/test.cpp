#include <iostream>
#include <stdio.h>

class test{
	public:
		test()
		{
			a = 100;
			printf("test ------1\n");
			b = new int(10000);
		}

		test(int _b, int _c = 0)
		{
			a = 200;
			b = new int(20000);
			printf("test ------2 b[%d] c[%d]\n", _b, _c);
		}

		void print()
		{
			printf("T ---- a[%d]  ad[%p]  b[%d] ad[%p]\n",a,&a,*b,b);
		}
		
	private:
		int a;
		int *b;
};

int main()
{
	test T;
	T.print();

	test T1 = test(1);
	T  = T1;
	
	T.print();
}

