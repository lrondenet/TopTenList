//Manages a list of top ten hyperlinks
#ifndef TOPTENLIST_H
#define TOPTENLIST_H
#include <string>
#include <vector>
#include "Hyperlink.h"
#include "IDirectionable.h"
#include <iostream>
using namespace std;

using std::string;
using std::vector;

class TopTenList : public IDirectionable
{
  private:
    vector <Hyperlink> _list;

  public:
    TopTenList();
    void display_forward() 
    {
      for (int i = 1; i <_list.size(); i++) {
        cout << i << ". " << _list[i].text << endl;
      }
    }
    void display_backward()
    {
      for (int i = _list.size() - 1; i > 0; i--) {
        cout << i << ". " << _list[i].text << endl;
      }
    }
    void set_at(int index, Hyperlink link);
    Hyperlink get(int index);
};

#endif
