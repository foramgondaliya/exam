#include<iostream>
using namespace std;

class movie
{
	public:
		int year;
		string title,genre;
		
	setData()
	{
		cout<<"Enter the released year=";
		cin>>year;
		cout<<"Enter the title=";
		cin>>title;
		cout<<"Enter the genre=";
		cin>>genre;
	}	
	getData()
	{
		cout<<"released year:"<<year<<endl;
		cout<<"title:"<<title<<endl;
		cout<<"genre:"<<genre<<endl;
	}
};


int main()
{
	int i;
	movie m1;
	
	m1.setData();
	m1.getData();
	
	return 0;
	
}
