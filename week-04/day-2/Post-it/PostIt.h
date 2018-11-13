//
// Created by Anti on 2018. 11. 13..
//

#ifndef POST_IT_POSTIT_H
#define POST_IT_POSTIT_H
#include <string>


class PostIt {
    public:
    PostIt();
    PostIt (std::string BackgroundColor, std::string Text, std::string TextColor);
        void setBackgroundColor(std::string BackgroundColor);
        std::string getBackgroundColor();
        void setText(std::string Text);
        std::string getText();
        void setTextColor(std::string TextColor);
        std::string getTextColor();
    private:
        std::string _BackgroundColor;
        std::string _Text;
        std::string _TextColor;
    };

#endif //POST_IT_POSTIT_H
