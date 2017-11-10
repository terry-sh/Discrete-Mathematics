#ifndef _SALEMEN_H
#define _SALEMEN_H

#include <string>
#include <vector>

using namespace std;

struct Salesman {
  string name;
  int start_id;
};

struct Customer {
  string name;
  int salesman_id;
  int next_customer;
};

class Database {
private:
  vector<Salesman> salesmen;
  vector<Customer> customers;
  bool existsCustomer(string name);
  bool existsSalesman(string name);

public:
  Database();
  ~Database();
  add (string salesman, string customer);
  vector<string> findCustomers(string salesmen);
  vector<string> findSalesman(string customer);
};

#endif
