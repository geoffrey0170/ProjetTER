#include "truc.h"
using namespace std;

Truc::Truc(){}
Truc::Truc(int val){this.valeur= val;}
Truc::Truc(int val, char ori){this.valeur= val; this.orientation= ori;}

int Truc::getValeur()const
{return this.valeur;}

char Truc::getOrientation()const
{return this.orientation;}

void Truc::setValeur(int val)
{this.valeur= val;}

void Truc::setOrientation(char ori)
{this.orientation= ori;}
