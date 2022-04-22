#include <iostream>
#include "Wallet.h"

Wallet::Wallet() {
    balance = 0.0;
}

void Wallet::deposit(double amount) {
    std::cout << "Depositing " << amount << std::endl;
    balance = balance + amount;
    std::cout << "New Balance " << balance << std::endl;
}

void Wallet::withdraw(double amount) {
    balance = balance - amount;
}

double Wallet::getBalance() {
    return balance;
}
