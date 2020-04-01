//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
//I've started you off with, try to implement the rest of this class using 
//delegation while protecting what you can and cannot do
TopTenList::TopTenList()
{
    _list.resize(11);
}

void TopTenList::set_at(int index, Hyperlink link)
{
    _list[index] = link;
}

Hyperlink TopTenList::get(int index)
{
    return _list[index];
}
