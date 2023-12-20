#pragma once
#include <iostream>
#include <string>

class User{
private:
  int noAccount;
  std::string name;
  std::string last_name;
  int age;
  double balance;
public:
  User(int, std::string, std::string, int, double);
  double deposit(double);
  double withdraw(double);
};
