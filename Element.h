//
// Created by galje on 4/25/2022.
//

#ifndef NALOGA0801_ELEMENT_H
#define NALOGA0801_ELEMENT_H

template <typename T>
class Element {
private:
    unsigned int x,y;
    T value;
public:
    Element(unsigned int x,unsigned int y,T value):x(x),y(y),value(value){};
    unsigned int getX() const{
        return x;
    };
    unsigned int getY() const{
        return y;
    };
    void setX(unsigned int x){
        this->x =x;
    };
    void setY(unsigned int y){
        this->y =y;
    }
    T getValue() const{
        return value;
    };
    void setValue(T value){
        this->value = value;
    }
};



#endif //NALOGA0801_ELEMENT_H
