#ifndef __ACCOUNT_HPP__
#define __ACCOUNT_HPP__

#include <string>

// enum for predefined set of tags

struct Account
{
          enum Tag
          {
                    GAME,
                    PERSONAL,
                    PUBLIC,
                    SCHOOL,
                    SUS,
                    WORK
          };

          // -Wreorder of list initializer matches member cluster
          Account(){}
          Account(std::string d, std::string u, std::string p, std::string e, std::string desc, Tag t) :
                    domain(d), username(u), password(p), email(e), description(desc), tag(t){}

          // member cluster / account properties
          std::string domain; // what if remove Account domain property and go off of user input domain instead?
          std::string username;
          std::string password;
          std::string email;
          std::string description;
          Tag tag;

          static std::string GetTagString(const Tag& tag);
};

#endif