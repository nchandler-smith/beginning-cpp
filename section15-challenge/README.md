# Section 15 Challenge
Much of the content from this section was provided without tests. The account, savings account, and utils behavior specifications below have been surmised from the provided code.

# Account
### Default values
- _static constant expression const char pointer_ **def_name**: "Unnamed Account"
- _static contant expression double_ **def_balance**: 0.0;

### 
Uses default account name and balance if none specified

### Deposit
Returns false if amount is invalid, i.e. < 0. Else returns true and adds amount to balance.

### Withdraw
Returns false if remaining balance is invalid. _balance - amount < 0_. Else returns true and subtracts amount from balance.

### Get Balance
Returns balance in account.

### Overload insertion operator as non-member function
Uses signature below:
`friend std::ostream &operator<<(std::ostream &os, const Account &account);`
Prints account name and balance.

# Savings Account
- _static constant expression const char pointer_ **def_name**: "Unnamed Savings Account"
- _static constant expression double_ **def_balance**: 0.0
- _static constant expression double_ **def_int_rate**: 0.0;

Sets default savings account name, balance, and interest rate if none specified.

### Deposit
Deposit amount plus amount times interest rate.

### Overload insertion operator as non-member function
Prints account name and balance.