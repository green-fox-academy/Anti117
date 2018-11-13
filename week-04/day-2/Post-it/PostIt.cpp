//
// Created by Anti on 2018. 11. 13..
//

#include "PostIt.h"

    std::string PostIt::getBackgroundColor() {
        return _BackgroundColor;
    }
    std::string PostIt::getText(){
            return _Text;
}
std::string PostIt::getTextColor(){
    return _TextColor;
}

PostIt::PostIt(std::string BackgroundColor, std::string Text, std::string TextColor){
    _BackgroundColor = BackgroundColor;
    _Text = Text;
    _TextColor = TextColor;
}