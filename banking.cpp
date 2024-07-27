#include<iostream>
#include<conio.h>
using namespace std;


class bank
{
	char name[20];
	int accno;
	char acctype[20];
	int bal;
public:
	void openbal(void);
	void deposit(void);
	void withdraw(void);
	void display(void);
};

	void bank :: openbal(void)
	{
		cout<<endl<<endl;
		cout<<"enter name:\t";
		cin>>name;
		cout<<"enter account number:\t";
		cin>>accno;
		cout<<"enter account type:\t";
		cin>>acctype;
		cout<<"enter opening balance:\t";
		cin>>bal;
	}
	
		void bank :: deposit(void)
	{
		int deposit=0;
		cout<<"enter deposit amount:\t";
		cin>>deposit;
		bal=deposit+bal;
		cout<<"\n deposit balance=\t"<<bal;
	}
	
	void bank :: withdraw(void)
	{
		int withdraw;
		cout<<"\n balance amount=\t\t"<<bal;
		cout<<"\n enter withdraw amount ;\t";
		cin>>withdraw;
		
			if(bal>withdraw)
			{
				bal=bal-withdraw;
				cout<<"\n After withdraw, balance is =\t"<<bal;
			}
			else
			{
				cout<<"\n\t Not enough balance!";
			}
	}
	
	void bank :: display(void)
	{
		
		cout<<endl<<endl<<endl;
		cout<<"DETAILS"<<endl;
		cout<<"name"<<name<<endl;
		cout<<"account number"<<accno<<endl;
		cout<<"account type"<<acctype<<endl;
		cout<<"Balance"<<bal<<endl;
	}
	
int main()
{
	bank o1;
	int choice;
	
	do
	{
		cout<<"\n\n\n\t Banking System Program";
		cout<<"\n\n Choice List\n\n";
		cout<<"1) To assign initial value\n";
		cout<<"2) To deposit\n";
		cout<<"3) To withdraw\n";
		cout<<"4) To display all details\n";
		cout<<"5) Exit\n";
		cout<<"Enter your choice:";
		cin>>choice;

		switch(choice)
		{
			case 1: o1.openbal();
			break;
			
			case 2: o1.deposit();
			break;
			
			case 3: o1.withdraw();
			break;
			
			case 4: o1.display();
			break;
			
			case 5: goto end;
			
			default: cout<<"\n Invalid option!";
		}
	}
	while(1);
	
	end:
	return 0;
}

