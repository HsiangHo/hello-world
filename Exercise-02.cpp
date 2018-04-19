//
//  Exercise-02.cpp
//  Exercise
//
//  Created by Jovi on 4/19/18.
//  Copyright © 2018 Jovi. All rights reserved.
//

#include <iostream>

typedef enum _SKILL{
    eSkill_C = 1,
    eSkill_Cpp = 1 << 1,
    eSkill_Csharp = 1 << 2,
    eSkill_HTML = 1 << 3,
    eSkill_Python = 1 << 4,
    eSkill_ObjectiveC = 1 << 5,
    eSkill_Swift = 1 << 6,
    eSkill_Go = 1 << 7,
    eSkill_PHP = 1 << 8,
}SKILL;

void study(){
    std::cout << "Sleep!~~~Sleep!~~~\n";
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int nSkill = 0;
    int nYear = 1993;
    do{
        if (2012 == nYear) {
            nSkill += eSkill_C;
        }
        
        if (2013 == nYear) {
            nSkill += eSkill_Csharp;
            nSkill += eSkill_HTML;
        }
        
        if (2014 == nYear) {
            nSkill += eSkill_Cpp;
        }
        
        if (2015 == nYear) {
            nSkill += eSkill_ObjectiveC;
        }
        
        if (2016 == nYear) {
            nSkill += eSkill_Python;
        }
        
        if (2017 == nYear) {
            nSkill += eSkill_Go;
        }
        
        if (2018 == nYear) {
            nSkill += eSkill_Swift;
            nSkill += eSkill_PHP;
        }
        study();
        ++nYear;
    }while (true);
    return 0;
}
