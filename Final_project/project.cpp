#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <cstdlib>
#include <map>

using namespace std;

class Account
{
    //Data required
    private:
        long Account_no;
        string first_name;
        string last_name;
        double balance;
        static long Next_Account_no;
    public:
    //Constructor
        Account(){}
        Account(string fname, string lname,double bal)
        {
            first_name = fname;
            last_name = lname;
            balance = bal;
            Next_Account_no ++;
            Account_no = Next_Account_no;
        }
    //Memeber Function
        void set_first_name(string fname)
        {
            first_name = fname;
        }
        void set_last_name(string lname)
        {
            last_name = lname;
        }
        string getFirstName()
		{
			return first_name;
		}
		string getLastName()
		{
			return last_name;
		}
        double get_balance()
        {
            return balance;
        }
        void deposit(double Amount)
        {
            balance += Amount;
        }
        void withdraw(double Amount)
        {
            if (balance - Amount < 0)
            {
                cout<<"Insufficient Money\n";
            }
            else
            {
                balance -= Amount;
            }

        }
		long getAccNo()
		{
			return Account_no;
		}
		void set_last_account_no (long account_number)
		{
			Next_Account_no = account_number;
		}
		long get_last_account_no ()
		{
			return Next_Account_no;
		}
        // friend functions
        friend ostream & operator<<(ostream & os,  Account& B);
		friend ofstream &operator<<(ofstream &ofs , Account& B);
		friend ifstream & operator>>(ifstream &ifs , Account& B);

};
long Account::Next_Account_no = 0;
ostream &operator<<(ostream &os, Account& B)
{
    os<<"First Name: "<<B.getFirstName()<<endl;
    os<<"Last Name: "<<B.getLastName()<<endl;
    os<<"Account Number: "<<B.getAccNo()<<endl;
	os<<"Balance: "<<B.get_balance()<<endl;
    os<<B.balance<<endl;
    return os;
}

ofstream &operator<<(ofstream &ofs,Account &B)
{
	ofs<<B.Account_no<<endl;
    ofs<<B.first_name<<endl;
    ofs<<B.last_name<<endl;
    ofs<<B.balance<<endl;
    return ofs;
}

ifstream &operator>>(ifstream &ifs ,Account &B)
{
	ifs>>B.Account_no;
    ifs>>B.first_name;
    ifs>>B.last_name;
    ifs>>B.balance;
    return ifs;
}

class Bank
{
	private:
		map<long,Account> accounts;
	public:
		Bank();
		Account OpenAccount(string fname,string lname,double balance);
		Account BalanceEnquiry(long accountnumber);
		Account Deposit(long accountnumber, double amount);
		Account withdraw(long accountnumber, double amount);
		void CloseAccount(long accountnumber);
		void ShowAllAccount();
	
	
};
Bank::Bank()
{
	Account account;
	ifstream infile;
	infile.open("Bank.data");
	if (!infile)
	{
		cout<<"Error in opening\nFile not found\n";
		return ;
	}
	while(!infile.eof())
	{
		infile>>account;
		accounts.insert(pair<long,Account>(account.getAccNo(),account));
		infile.close();
	}
	
}
Account Bank::OpenAccount(string fname,string lname,double bal)
{
	ofstream outfile;
	Account account(fname,lname,bal);
	accounts.insert(pair<long,Account>(account.getAccNo(),account));
	
	outfile.open("Bank.data",ios::trunc);
	map<long,Account>::iterator itr;
	for(itr=accounts.begin();itr!=accounts.end();itr++)
	{
		outfile<<itr->second;
	}
	outfile.close();
	return account;
}
Account Bank::BalanceEnquiry(long accountnumber)
{
	map<long,Account>::iterator itr=accounts.find(accountnumber);
	return itr->second;
}

Account Bank::Deposit(long accountnumber, double amount)
{
	map<long,Account>::iterator itr=accounts.find(accountnumber);
	itr->second.deposit(amount);
	return itr->second;
}

Account Bank::withdraw(long accountnumber, double amount)
{
	map<long,Account>::iterator itr = accounts.find(accountnumber);
	itr->second.withdraw(amount);
	return itr->second;
}

void Bank::CloseAccount(long accountnumber)
{
	map<long,Account>::iterator itr = accounts.find(accountnumber);
	cout<<"Account Deleterd\n"<<itr->second;
	accounts.erase(accountnumber);
}
void Bank::ShowAllAccount()
{
	map<long,Account>::iterator itr;
	for(itr=accounts.begin();itr!=accounts.end();itr++)
	{
		cout<<"Account: "<<itr->first<<endl<<itr->second;
	}
}


int main()
{
    int choice; 
    string fname,lname;
    double bal;  
	long Accountno;
	Account acc;
	Bank b;
	cout<<"**********BANKING SYSTEM ***************\n";
    do
    {
        cout<<"Please Enter Number from 1 to 7 to select from the following\n";
        cout<<"\t 1. Create new Account\n";
        cout<<"\t 2. Balance Enquiry\n";
        cout<<"\t 3. Deposit\n";
        cout<<"\t 4. Withdrawal\n";
        cout<<"\t 5. Close an account\n";
        cout<<"\t 6. Show all Accounts\n";
        cout<<"\t 7. Quit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"Your first name: \n";
                cin>>fname;
                cout<<"Your last name: \n";
                cin>>lname;
                cout<<"Enter your inital balance \n";
                cin>>bal;
                acc = b.OpenAccount(fname,lname,bal);
                cout<<endl<<"Account has been created\n";
                cout<<acc;
                break;
            }
                
            case 2:
            {
                cout <<"Enter your Account number"<<endl;
				cin>>Accountno;
				acc = b.BalanceEnquiry(Accountno);
				cout<<"Your Account details\n";
				cout<<acc;
				break;
            }
			case 3:
			{
				cout <<"Enter your Account number"<<endl;
				cin>>Accountno;
				cout <<"Enter Balance"<<endl;
				cin>>bal;
				acc = b.Deposit(Accountno,bal);
				cout<<"Your Account details\n";
				cout<<acc;
				break;
			}
			case 4:
			{
				cout <<"Enter your Account number"<<endl;
				cin>>Accountno;
				cout <<"Enter Balance"<<endl;
				cin>>bal;
				acc = b.withdraw(Accountno,bal);
				cout<<"Your Account details\n";
				cout<<acc;
				break;
			}
			case 5:
			{
				cout <<"Enter your Account number"<<endl;
				cin>>Accountno;
				b.CloseAccount(Accountno);
				cout<<"Account is closed\n";
				break;

			}
			case 6 :
			{
				b.ShowAllAccount();
				break;
			}
			case 7 :
			{
				break;
			}
            default:
                cout<<"Error Number\n";
        }
    }
    while(choice !=7);   
  
    return 0;

}