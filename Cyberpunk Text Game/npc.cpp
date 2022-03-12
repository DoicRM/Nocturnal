#include "npc.h"

Npc::Npc()
{
    this->name = "None";
    this->fraction = Fraction();
    this->attitude = "neutral";
    this->status = "alive";
    this->knowingHero = false;
}

Npc::Npc(string name, Fraction fraction)
{
    this->name = name;
    this->fraction = fraction;
    this->attitude = "neutral";
    this->status = "alive";
    this->knowingHero = false;
}


Npc::Npc(string name, Fraction fraction, string attitude, string status, bool knowingHero)
{
    this->name = name;
    this->fraction = fraction;
    this->attitude = attitude;
    this->status = status;
    this->knowingHero = knowingHero;
}

Npc::~Npc()
{

}

void Npc::setAttitude(int attitude)
{
    if (attitude == angry)
    {
        this->attitude = "angry";
        Function::changeConsoleColor(yellow);
    }
    else if (attitude == hostile)
    {
        this->attitude = "hostile";
        Function::changeConsoleColor(red);
    }
    else if (attitude == friendly)
    {
        this->attitude = "friendly";
        Function::changeConsoleColor(green);
    }
    else
    {
        this->attitude = "neutral";
        Function::changeConsoleColor();
    }

    string str = "\t" + this->name + " is " + this->attitude + " now.";
    Function::write(str);
    cout << endl;
    Function::changeConsoleColor();
}

void Npc::kill()
{
    this->status = "dead";
}

bool Npc::isDead()
{
    if (status == "alive") return false;
    return true;
}

void Npc::setToKnowHero()
{
    knowingHero = true;
}

bool Npc::knowsHero()
{
    return knowingHero;
}