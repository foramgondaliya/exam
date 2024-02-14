#include<iostream>
using namespace std;

class Bankaccount{
	private:
		int x;
		
	public:
		void setData(int i)
		{
			this->x=i;
		}
		Bankaccount operator+(Bankaccount n)
		{
			Bankaccount sum;
			
			sum.x=this->x+n.x;
			
			return sum;
		}
		getData()
		{
			cout<<"addition is="<<this->x;
		}
};
int main()
{
	Bankaccount b1,b2,b3;
	
	b1.setData(5000);
	b2.setData(8000);
	
	b3=b1+b2;
	
	b3.getData();
	
	return 0;
}
