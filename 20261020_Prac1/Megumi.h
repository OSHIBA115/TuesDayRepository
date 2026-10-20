#pragma once
#include "Sorcerer.h"
#include<string>
class Megumi :
    public Sorcerer
{
public:
    void ShowStatus()override;
    void UseTechnique() override;
};

