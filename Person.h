//
// Created by galje on 4/25/2022.
//

#ifndef NALOGA0801_PERSON_H
#define NALOGA0801_PERSON_H


#include <string>

class Person {
private:
    std::string name;
    unsigned int age;
    unsigned int height;
    unsigned int weight;
public:
    Person(std::string name, unsigned int age, unsigned int height, unsigned int weight):name(std::move(name)),age(age),height(height),weight(weight){};
    std::string toString() const{
        std::string str = name+ " "+std::to_string(age)+" "+std::to_string(height)+" cm "+std::to_string(weight)+" kg";
        return str;
    };
};


#endif //NALOGA0801_PERSON_H
