#include<iostream>
#include<string.h>
using namespace std;


class bank
{
private:
        char *name;
		long accnumber;
		char acctype[50];
        float balance;

	public:
        
		int depo;
		int accno=0;
        bank(){   //default      
            char* name="defaultName";
            cout<<"\nCustomer Name:"<<name<<endl;
            long accnumber = 123456789012;
            cout<<"\nAccount_Number:"<<accnumber<<endl;
            char* acctype="Savings";
            cout<<"\nType_of_Account:"<<acctype<<endl;
            float balance=0;
            cout<<"\nAccount_Balance:"<<balance<<endl;
        }
        
        void getdetails()
		{
			name=new char[20];
			cout<<endl<<endl<<"**********Customer Details*********** "<<endl;
			cout<<"          -------- -------            "<<endl;
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter accnumber: ";
			cin>>accnumber;
			cout<<"Enter Acctype: ";
			cin>>acctype;
			cout<<"Enter deposit amount: ";
			cin>>depo;
			cout<<"______________________________________"<<endl<<endl;
		}	
		~bank(){
			
		}	
		void deposit();
		void withdrawal();
		void newaccount();
		void viewaccdetails();
};

void bank::withdrawal()
{
	long amtdrawn;
	cout<<"Enter amount to be withdrawn: ";
	cin>>amtdrawn;
	if(balance<amtdrawn)
		cout<<"\nInsufficient balance! "<<endl<<endl;
	else
		balance=balance-amtdrawn;

}
void bank::deposit()
{
	long dep;
	cout<<"Enter amount to be deposited: ";
	cin>>dep;
	balance+=dep;
}
void bank::newaccount()
{
	accno++;
	getdetails();
	balance=0;
}
void bank::viewaccdetails()
{
	cout<<endl<<endl<<"********* BANK ACCOUNT DETAILS*********"<<endl;
	cout<<"         --- ---- ------- -------         "<<endl;
	cout<<"Account no.: "<<accno<<endl;
	cout<<"Name: "<<name<<endl;
	cout<<"Acctype: "<<acctype<<endl;
	cout<<"Balance: "<<balance<<endl;
	cout<<"_________________________________________"<<endl;
   
}
char* newname;
void updateName(char *newname){
	 	cout<<"Do you want to change the Name? press Y/N"<<endl;
    	char cmd;
    	if(cmd=='Y'){
        
        cout<<"Enter the New name you want to update"<<endl;
        cin>>newname;
 		name = newname;
    	cout<<"\nUpdated Name is: "<<name<<endl;    }
   
}

int main()
{
	char ch;
	static int i=0;
	bank *a[10];
	int x,amt,k,j;
	do
	{
	cout<<endl<<endl<<"************MENU************"<<endl;
	cout<<"            ----            "<<endl;
	cout<<"1.Create new account\n2.Deposit\n3.Withdraw\n4.View account details\n\n";
	cout<<"Enter choice no.: ";
	cin>>x;
	switch(x)
	{
		case 1:
		{
			i++;
			a[i]=new bank;
			a[i]->newaccount();
			break;
		}
		case 2:
		{
			cout<<"Enter account no.: ";
			cin>>k;
			a[k]->deposit();
			break;
		}
		case 3:
		{
			cout<<"Enter account no.: ";
			cin>>k;
			a[k]->withdrawal();
			break;
		}
		case 4:
		{
			cout<<"Enter account no.: ";
			cin>>k;
			a[k]->viewaccdetails();
			break;
		}
	}cout<<"\nDo you wish to continue[Press 'Y' to continue or 'N' to exit menu]: ";
	cin>>ch;
}while(ch=='y'||ch=='Y');

}