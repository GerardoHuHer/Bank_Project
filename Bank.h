#pragma once
#include <iostream>
#include <string>

class User{
private:
  std::string name;
  std::string last_name;
  int age;
  double balance;
public:
  User(std::string, std::string, int, double);
  double deposit(double);
  double withdraw(double);
};
