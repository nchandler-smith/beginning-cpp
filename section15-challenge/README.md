# Section 15 Challenge
Much of the content from this section was provided without tests. The account, savings account, and utils behavior specifications below have been surmised from the provided code.

# Account
### Default values
- _static constant expression const char pointer_ **def_name**: "Unnamed Account"
- _static contant expression double_ **def_balance**: 0.0;

### 
Uses default account name and balance if none specified

### Deposit
Returns false if amount is valid, i.e. > 0. Else returns true and adds amount to balance.

### Withdraw
Returns false if _balance - amount < 0_. Else returns true and subtracts amount from balance.

### Get Balance
Returns balance in account.

### Overload insertion operator as non-member function
Uses signature below:
`friend std::ostream &operator<<(std::ostream &os, const Account &account);`