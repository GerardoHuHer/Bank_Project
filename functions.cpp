#include "Bank.h"
  
User::User(int number, std::string name, std::string lastName, int age, double balance, int nip){
  this-> number = number;
  this->name = name;
  this->last_name = lastName;
  this->age = age;
  this->balance = balance;
  this->nip = nip;
}
