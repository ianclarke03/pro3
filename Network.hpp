//#ifndef NETWORK_H
//#define NETWORK_H
#pragma once
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include "Account.hpp"
#include "Post.hpp"

template <class T>


class Network {


  protected:


   static const int DEFAULT_CAPACITY = 200;


   T items_[DEFAULT_CAPACITY]; //An array (with a capacity of 200) that stores POINTERS to the template items. 


   int item_count_; //A count of the current number of accounts in the network.


   std::vector<T> Posts; //A vector of Posts: the Network's feed where all posts posted by accounts in the network will be stored.


   int getIndexOf(const std::string& username) const;
   /*A function that returns the index of a given account within the Network.
   @param   :string - the username of item we want the index of
   @return  :int - the index of the item, -1 if the account is not found
   */








  public:


    Network(); //Default constructor: Initializes private variables to default initial values.





//Accessor functions


   /*
      @return           : int -  the current size of the network (number of items in the array)
   */
   int getSizeOfNetwork() const;






   /**
      @return           : bool -  true if the bag is empty, false otherwise
   */
   bool isEmpty() const;

};

//#include "Network.cpp"

//#endif

   
