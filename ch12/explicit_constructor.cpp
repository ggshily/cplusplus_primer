#ifndef EXPLICIT_CONSTRUCTOR_CPP
#define EXPLICIT_CONSTRUCTOR_CPP

#include <iostream>
#include "explicit_constructor.h"

using namespace std;

Sales_item::Sales_item(std::istream& is) {

}

bool Sales_item::same_isbn(Sales_item other) {
    return isbn == other.isbn;
}

int main()
{
    string null_book = "9-999-99999-9";

    Sales_item item;

    item.same_isbn(null_book);
    item.same_isbn(cin);

    return 0;
}


#endif
