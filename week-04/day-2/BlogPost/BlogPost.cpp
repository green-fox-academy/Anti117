//
// Created by Anti on 2018. 11. 13..
//

#include "BlogPost.h"

std::string BlogPost::getAuthorName(){
return _AuthorName;
}
std::string BlogPost::getTitle(){
    return _Title;
}
std::string BlogPost::getText(){
    return _Text;
}
std::string BlogPost::getPublicationDate(){
    return _PublicationDate;
}

BlogPost::BlogPost(std::string AuthorName, std::string Title, std::string Text, std::string PublicationDate){
    _AuthorName = AuthorName;
    _Title = Title;
    _Text = Text;
    _PublicationDate = PublicationDate;
}