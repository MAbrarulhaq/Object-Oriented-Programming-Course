#include <iostream>
#include <iomanip>

using namespace std;



class BankAccount{
		public:
			BankAccount(double);
			void credit(double);
			bool debit(double); 
			double getBalance();

		protected:
			double accounttBalance;
	};



BankAccount::BankAccount(double openingDeposit){
		if (openingDeposit < 0.0)
  		{		
		cout << " Invalid entry" << endl;
		accounttBalance = 0.0;
		}
	else
			accounttBalance = openingDeposit;
}



			void BankAccount::credit(double deposit)
	{
			accounttBalance += deposit;

			cout << setw(16) << setw(20) << "credit to account" << right
			<< setw(15) << deposit;
}



bool BankAccount::debit(double withdrawal) 
{
if (withdrawal > accounttBalance)
{
cout << " Invalid entry. Amount exceeds limit." << endl;
return false;
}
else
{
accounttBalance -= withdrawal;

cout << setw(16) << setw(20) << "debit to account" << right<< setw(15) << withdrawal;

return true;
}
}



double BankAccount::getBalance()
{
cout << " Current Account Balance is " << accounttBalance << endl;

return accounttBalance;
}


class SavingsAccount : public BankAccount{
			public:
				SavingsAccount(double = 0.0); 
				~SavingsAccount(); 
				void modifyInterestRate(double);
				void calcInterest();
				double getSavingsBalance(); 
				void Print();

			private:
				double interestEarned;
				double savingsBalance;
				double annualInterestRate;
};



SavingsAccount::SavingsAccount(double saveDeposit):BankAccount(saveDeposit) { 
if (saveDeposit >= 0)
{
savingsBalance = saveDeposit;
}
else
{
savingsBalance = 0;
cout << "Error: " << endl;
cout << "Initial savingsBalance is invalid. Must be greater "
<< "than or equal to $0.0." << endl;
}
}

SavingsAccount::~SavingsAccount() // destructor
{
}

void SavingsAccount::modifyInterestRate(double newRate)
{
annualInterestRate = newRate;
}

void SavingsAccount::calcInterest() 
{
interestEarned = (BankAccount::accounttBalance * annualInterestRate * 0.01) / 12;
credit(interestEarned);
}

double SavingsAccount::getSavingsBalance() 
{
return (savingsBalance = BankAccount::getBalance());
}

void SavingsAccount::Print()
{
cout << fixed << showpoint;
cout << setprecision(2);
getSavingsBalance();
}


class CheckingAccount : public BankAccount{
		public:
			CheckingAccount(double = 0.0);
			~CheckingAccount();
			void deposits(double);
			void drafts(double);
			void transactionFee(double);
			void set_transFee(double);
			double getCheckingBalance();
			void Print();

		private:
			double transFee;
			double BalanceChecking;
};


CheckingAccount::CheckingAccount(double ChkDeposit):BankAccount(ChkDeposit) { 
if (ChkDeposit >= 0) 
{
BalanceChecking = ChkDeposit;
}
else
{
BalanceChecking = 0;
cout << "Error: " << endl;
cout << "Initial Checking Balance is invalid. Must be greater "
<< "than or equal to $0.0." << endl;
}
}

CheckingAccount::~CheckingAccount() 
{
}

void CheckingAccount::deposits(double moneyIn) 
{
BankAccount::credit(moneyIn);
}


void CheckingAccount::drafts(double moneyOut)
{
if (BankAccount::debit(moneyOut))
{
cout << endl << setw(14) << " ";
transactionFee(transFee); 
}
}

void CheckingAccount::transactionFee(double transFee)
{
BankAccount::debit(transFee);
}

void CheckingAccount::set_transFee(double cost)
{
transFee = cost;

}

double CheckingAccount::getCheckingBalance()
{
return (BalanceChecking = BankAccount::getBalance());
}

void CheckingAccount::Print()
{
cout << fixed << showpoint;
cout << setprecision(2);
getCheckingBalance();
}


int main()
{
int beginBalance = 1000;
int chkingBal = 7500;
double intRate1 = 2.00;
double intRate2 = 4.0;
double intRate3 = 4.5;

BankAccount NewPerson0(beginBalance);

cout << fixed << showpoint;
cout << setprecision(2);
cout << endl;
cout << " Account Summary \n";
cout << endl;
cout << " JANUARY Interest Rate = " << intRate1 << "%" << endl;
cout << " NewPerson0 \n";
cout << " 01Jan06 ";
NewPerson0.getBalance();
cout << " 02Jan06 ";
NewPerson0.credit(150);

cout << "\n 04Jan06 ";
NewPerson0.debit(350);

cout << "\n 31Jan06 ";
NewPerson0.getBalance();

beginBalance = 3000;

SavingsAccount NewSaver1(beginBalance); 
NewSaver1.modifyInterestRate(3.0);

cout << endl;
cout << " NewSaver1 \n";
cout << " 01Jan06 ";
NewSaver1.Print();

cout << " 14Jan06 ";
NewSaver1.debit(420);
cout << endl;

cout << " 31Jan06 ";
NewSaver1.calcInterest(); 
cout << endl;

cout << " 31Jan06 ";
NewSaver1.Print();
cout << endl;
cout << endl;

NewSaver1.modifyInterestRate(intRate2); 


cout << " FEBRUARY Interest Rate = " << intRate2 << "%" << endl;
cout << " NewSaver1 \n";
cout << " 01Feb06 ";

NewSaver1.Print();

cout << " 28Feb06 ";
NewSaver1.calcInterest();
cout << endl;
cout << " 28Feb06 ";
NewSaver1.Print();
cout << endl;

SavingsAccount NewSaver2(beginBalance);

NewSaver2.modifyInterestRate(intRate2);


cout << " NewSaver2 \n";
cout << " 01Feb06 ";
NewSaver2.Print();
cout << " 20Feb06 ";
NewSaver2.credit(1650);
cout << endl;
cout << " 28Feb06 ";
NewSaver2.calcInterest();
cout << endl;
cout << " 28Feb06 ";
NewSaver2.Print();
cout << endl;

CheckingAccount ChkingGuy1(chkingBal);
ChkingGuy1.set_transFee(1.50);

cout << endl;
cout << " MARCH Interest Rate = " << intRate3 << "%" << endl;
cout << " ChkingGuy1 \n";
cout << " 01Mar06 ";

ChkingGuy1.Print();
cout << " 05Mar06 ";
ChkingGuy1.drafts(125);
cout << endl;
cout << " 10Mar06 ";
ChkingGuy1.drafts(453.23);
cout << endl;
cout << " 12Mar06 ";
ChkingGuy1.drafts(1578.50);
cout << endl;
cout << " 22Mar06 ";
ChkingGuy1.drafts(100.00);
cout << endl;
cout << " 26Mar06 ";
ChkingGuy1.deposits(2500.00);
cout << endl;
cout << " 31Mar06 ";
ChkingGuy1.Print();
cout << endl;
cout << " 31Mar06 ";

cout << endl;

cout << endl;

system("pause");
return 0;
}
