//
// Created by Anti on 2018. 11. 14..
//

#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <string>

class Sharpie {
public:
    Sharpie();

    Sharpie(std::string Color, float Width);
    void Use();
    float getInkAmount();
private:
    std::string _Color;
    float _Width;
    float _InkAmount;
};
#endif //SHARPIE_SHARPIE_H
