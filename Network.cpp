#include "Network.hpp"
#include <iostream>
/*
#include <vector>
#include <string>
#include <fstream>
#include "Account.hpp"
//#include "Post.hpp"
*/




/** default constructor**/
template<class T>
Network<T>::Network(): item_count_(0) //Posts.clear()
{
}  // end default constructor




/**
 @return item_count_ : the current size of the network (number of items in the array)
 **/
template<class T>
int Network<T>::getSizeOfNetwork() const
{
	return item_count_;
}  // end getSizeOfNetwork






/**
 @return bool -  true if the bag is empty, false otherwise
 **/
template<class T>
bool Network<T>::isEmpty() const
{
	return item_count_ == 0;
}  // end isEmpty



