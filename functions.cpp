#include "Bank.h"

User::User(int noAccount, std::string name, std::string last_name, int age, double balance){
  this->noAccount = noAccount;
  this->name = name;
  this->last_name = last_name;
  this->age = age;
  this->balance = balance;
}
