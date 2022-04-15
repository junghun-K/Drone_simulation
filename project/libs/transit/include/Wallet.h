#ifndef WALLET_H_
#define WALLET_H_

class Wallet {
    public:
        Wallet();
        void deposit(double amount);
        void withdraw(double amount);
        double getBalance();
    private:
        double balance;
};

#endif // WALLET_H_
