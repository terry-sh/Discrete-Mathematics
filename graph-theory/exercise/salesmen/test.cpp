#include <cstdio>
#include "salesmen.h"

int main(void) {
    vector<vector<string>> tables;

    Database db = Database();
    for (auto &g: tables) {
      for (auto &p: g) {
        db.add(p[0], p[1]);
      }
    }

    auto res = db.findCustomers("Smith");

    auto string = db.findSalesman("Clark");
  }
