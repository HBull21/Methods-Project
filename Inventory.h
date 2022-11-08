#include <string>

using std::string;

#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory 
{
   private:
   
   public:  
   Inventory();
   void sortByGenre(string genre);
   void addInventory(int inventory);
   void removeInventory(int inventory);

   //getters
   string getBook() { return Book; };
   int getQuantity() { return Quantity; };

   //setters

}
