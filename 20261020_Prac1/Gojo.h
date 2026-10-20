#pragma once
#include "Sorcerer.h"
#include<string>
class Gojo :
    public Sorcerer
{
public:
    void ShowStatus()override;
    void UseTechnique() override;
};

