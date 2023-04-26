#include <iostream>
#include <vector>
#include "./Row.cpp"

class Table {
   std::vector<Row> vect; 

public:
   std::string name;
   Table(std::string name) {
      this->name = name;
   }

   Row addRow() {

   }

   // lets say data is { name: "Ahmed" }


   Row removeRow() {
   }

   Row updateRow()
   {
   }
};