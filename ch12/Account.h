#include <string>

class Account {
	public:
		// interface functions here
		void applyint() { amount += amount * interestRate;}
		static double rate() { return interestRate;}
		static void rate(double); // sets a new rate
	private:
		std::string owner;
		double amount;
		static double interestRate;
		static double initRate();
};

double Account::interestRate = initRate();
