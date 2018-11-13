//
// Created by Anti on 2018. 11. 13..
//

#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H
#include <string>


class BlogPost {
public:
    BlogPost();
    BlogPost (std::string AuthorName, std::string Title, std::string Text, std::string PublicationDate);
    void setauthorName(std::string AuthorName);
    std::string getAuthorName();
    void setTitle(std::string Title);
    std::string getTitle();
    void setText(std::string Text);
    std::string getText();
    void setPublicstionDate(std::string PublicationDate);
    std::string getPublicationDate();
private:
    std::string _AuthorName;
    std::string _Title;
    std::string _Text;
    std::string _PublicationDate;
};

#endif //BLOGPOST_BLOGPOST_H
