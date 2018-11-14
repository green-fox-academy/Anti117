//
// Created by Anti on 2018. 11. 14..
//

#include "Sharpie.h"

void Sharpie::Use(){
    _InkAmount--;
}

float Sharpie::getInkAmount(){
    return _InkAmount;
}

Sharpie::Sharpie(std::string Color, float Width){
    _Color = Color;
    _Width = Width;
    _InkAmount = 100;
}