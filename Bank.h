#pragma once
#include <iostream>
#include <string>

class User{
private:
  int number;
  std::string name;
  std::string last_name;
  int age;
  double balance;
  int nip;
public:
  User(int, std::string, std::string, int, double, int);
  double deposit(double);
  double withdraw(double);
};
void menu(User* usuarios);
enum class Options{
  ENTRAR = 1, DEPOSITAR, RETIRAR
};
