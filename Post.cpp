/*
#include <time.h>
#include <string>
#include <ctime>
*/
#include <iostream>
#include "Post.hpp"


Post::Post(std::string title, std::string body, std::string username){
    
    this->title = title;
    this->body = body;
    this->username = username;

    // current date/time based on current system
    rawtime = time(0);
}



void Post::setTitle(const std::string &title){
    this->title = title;
}



std::string Post::getTitle() const{
    return title;
}


void Post::setBody(const std::string &body){
    this->body = body;
}


std::string Post::getBody() const{
    return body;
}



void Post::getTimeStamp() const{

    std::string tm = asctime( localtime (&rawtime) );
    tm.pop_back();

    std::cout << tm; //changed from std::cout << asctime( localtime (&rawtime) ) << std::endl;


} //prints the time the Post was created to the standard output as asctime(localtime(&time_stamp_))





void Post::displayPost() const{

    std::string tm = asctime( localtime (&rawtime) );
    tm.pop_back();
    
    std::cout << title << " posted at " << tm << ":\n" << body << "\n";

}

//cout << title << " posted at " << timestamp << ":\n" << body << endl;




//@return       : username associated with this Post
std::string Post::getUsername() const{
    return username;
}
   


       
//@param        : a reference to the username associated with this Post
void Post::setUsername(const std::string &username){
    this-> username = username;
}