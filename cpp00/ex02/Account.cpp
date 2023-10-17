#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;

int	Account::_totalNbWithdrawals = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalAmount = 0;

int Account::getNbAccounts(void){
    return  _nbAccounts;
}

int Account::getTotalAmount(void){
    return _totalAmount;
}

int Account::getNbDeposits(void){
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void){
    return _totalNbWithdrawals;
}

Account::Account(int initial_deposit){
    this->_accountIndex = getNbAccounts();
    this->_amount = initial_deposit;
    Account::_totalAmount += this->_amount;

    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    Account::_nbAccounts++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account(void){}

Account::~Account(void){
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->checkAmount() <<";closed" << std::endl;
}

void Account::displayAccountsInfos(void){
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:" << Account::getNbDeposits();
    std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit){
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->checkAmount();
    std::cout << ";deposit:" << deposit;

    this->_amount += deposit;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    this->_nbDeposits++;

    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdraval){
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->checkAmount() << ";withdrawal:";

    if (this->checkAmount() >= withdraval)
    {
        std::cout << withdraval << ";amount:";
        this->_amount -= withdraval;
        std::cout << this->checkAmount();
        this->_nbWithdrawals++;
        Account::_totalNbWithdrawals++;
        Account::_totalAmount -= withdraval;
        std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return (1);
    }
    else
    {
        std::cout << "refused" << std::endl;
        return (0);
    }
}

int Account::checkAmount(void) const {
    return this->_amount;
}

void Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->checkAmount();
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void){
    time_t t;

    t = time(NULL);
    std::cout << std::put_time(localtime(&t), "[%Y%m%d_%H%M%S] ");
}
