#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Post.hpp"
#include "Network.hpp"

/* 
  - A vector of usernames the Account is following  
   - A pointer to the Network this account is part of. Before the Account is added to a Network,
     the pointer is `nullptr`.
     */


  class Account{

    private:
        std::string username;
        std::string password;
        std::vector<Post> posts;
        //std::vector<std::string> usernames;
        //Network<Account>* network = nullptr;

    public:
        Account();

        Account(std::string username, std::string password);

        //@param a reference to the username of the Account 
        void setUsername(const std::string &username);

        //@return the username of the Account
        std::string getUsername() const;

        //@param a reference to the password of the Account
        void setPassword(const std::string &password);

        //@return the password of the Account
        std::string getPassword() const;


      /*
      @param title   : A reference to the title used to generate the Post object 
      @param body    : A reference to the body used to generate the Post object
      @post         : generates a Post with the given title and body and adds it to it's vector of posts
      @return       : Will return true if the Post does not have an empty title or body and the Post is successfully added to the vector
      */
        bool addPost(const std::string &title, const std::string &body, const std::string &username);
        
        //@post : Prints the vector of Posts using their display function
         void viewPosts();







        //Accessor function @return           :   the pointer to the Network the account is in
        //Network<Account>* getNetwork() const;

        /*Mutator function 
        @param            :   a pointer to a Network 
        @post             :   the Network pointer private member points to the input Network
        */
        //void setNetwork(Network<Account>* network);


  };


   
