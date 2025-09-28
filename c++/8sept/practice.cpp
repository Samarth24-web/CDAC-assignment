# include <iostream>
# include <string>
using namespace std;

class Item{
   public:
   int itemID;
   string itemName;
   double price;
    int stockQuantity;

};
class Bill{

    public:
   int billID;
    string customerName;
    string list_of_purchased_items;
};