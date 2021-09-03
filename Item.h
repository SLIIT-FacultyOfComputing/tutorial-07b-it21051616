// Item.h

class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
      Item(); // 1. Write the Default Constructor
      Item(int itmcd, float uprice);// 2. Write the OverloadedConstructor
      ~Item();// 3. Write the Destructor
      void setDiscount(float punitPrice);
      float getDiscount();
      float discountedPrice();
      void display();
      
};