#pragma once
#include <iostream>
#include <string>

class User{
private:
<<<<<<< HEAD
  int number;
=======
  int noAccount;
>>>>>>> 263f1544dbeebebaecd768afe9a9031a3e1a62ce
  std::string name;
  std::string last_name;
  int age;
  double balance;
  int nip;
public:
  User(int, std::string, std::string, int, double);
  double deposit(double);
  double withdraw(double);
};
void menu(User* usuarios);
enum class Options{
  ENTRAR = 1, DEPOSITAR, RETIRAR
};
