/*
#include <iostream>
#include <vector>
#include <string>
#include "Post.hpp"
#include "Network.hpp"
*/
#include "Account.hpp"



Account::Account(){
    username = "";
    password = "";

    //Sets the vector of posts to an empty vector 
    posts.clear();
}


Account::Account(std::string username, std::string password){
    this->username = username; //this refers to the private variable
    this->password = password;

    //Sets the vector of posts to an empty vector
    posts.clear();
}


//@param a reference to the username of the Account
void Account::setUsername(const std::string &username) {
    this->username = username;
}

//@return the username of the Account
std::string Account::getUsername() const{
    return username;
}

//@param a reference to the password of the Account
void Account::setPassword(const std::string &password) {
    this->password = password;
}

//@return the password of the Account
std::string Account::getPassword() const{
    return password;
}

/*
      @param title   : A reference to the title used to generate the Post object
      @param body    : A reference to the body used to generate the Post object
      @post         : generates a Post with the given title and body and adds it to it's vector of posts
      @return       : Will return true if the Post does not have an empty title or body and the Post is successfully added to the vector
*/      

bool Account::addPost(const std::string &title, const std::string &body, const std::string &username){
    Post newpost = Post(title, body, username); //generates a post

    if(title == "" || body == "" || username == ""){
        return false;
    }
    else{
        posts.push_back(newpost);

        return true;
    }
}

//@post: Prints the vector of Posts using their display function
void Account::viewPosts(){
    for(long unsigned int i = 0; i < posts.size(); i++){
        posts.at(i).displayPost();
    }
}



/*
Accessor function
@return           :   the pointer to the Network the account is in
*/
//Network<Account>* Account::getNetwork() const{
//    return network;
//}





/*
Mutator function
@param            :   a pointer to a Network
@post             :   the Network pointer private member points to the input Network
*/
//void Account::setNetwork(Network<Account>* network){
//    this->network = network;
//}
