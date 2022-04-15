#include "Wallet.h"

Wallet::Wallet() {
    balance = 0;
}

void Wallet::deposit(double amount) {
    balance += amount;
}

void Wallet::withdraw(double amount) {
    balance -= amount;
}

double Wallet::getBalance() {
    return balance;
}
