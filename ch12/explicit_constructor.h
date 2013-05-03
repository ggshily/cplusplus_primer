#ifndef EXPLICIT_CONSTRUCTOR_H
#define EXPLICIT_CONSTRUCTOR_H

#include <iostream>

class Sales_item {
    public:
        explicit Sales_item(const std::string &book = ""):
            isbn(book), units_sold(0), revenue(0.0) {}
       // explicit Sales_item(std::istream &is);

        Sales_item(std::istream &is);

        bool same_isbn(Sales_item other);
    private:
        std::string isbn;
        int units_sold;
        float revenue;
};

#endif
