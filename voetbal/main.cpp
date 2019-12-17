#include <iostream>
#include "team.h"
#include <typeinfo>

// ZEKER dynamic casten
// vector<Actie> *acties!!!
// type id(p).name()

int main() {
//vector aanmaken
    vector<Speler *> spelers;
    vector <Speler*>::iterator itr;
//keepers aanmaken en toevoegen
    Keeper * keeper1= new Keeper("Buffon");
    Keeper * keeper2= new Keeper("Courtois");
    spelers.push_back(keeper1);
    spelers.push_back(keeper2);

    //verdedigers aanmaken en toevoegen
    verdediger * verdediger1 = new verdediger("Kompany");
    verdediger * verdediger2 = new verdediger("Vermaelen");
    verdediger * verdediger3 = new verdediger("Ciman");
    verdediger * verdediger4 = new verdediger("Cuadrado");
    verdediger * verdediger5 = new verdediger("Marcello");
    verdediger * verdediger6 = new verdediger("Pepe");
    verdediger * verdediger7 = new verdediger("Vertongen");
    verdediger * verdediger8 = new verdediger("Alderweireld");
    spelers.push_back(verdediger1);
    spelers.push_back(verdediger2);
    spelers.push_back(verdediger3);
    spelers.push_back(verdediger4);
    spelers.push_back(verdediger5);
    spelers.push_back(verdediger6);
    spelers.push_back(verdediger7);
    spelers.push_back(verdediger8);

    //middenvelders aanmaken en toevoegen
    middenvelder * middenvelder1 = new middenvelder("Naingollan");
    middenvelder * middenvelder2 = new middenvelder("Witsel");
    middenvelder * middenvelder3 = new middenvelder("Kroos");
    middenvelder * middenvelder4 = new middenvelder("De Bruyne");
    middenvelder * middenvelder5 = new middenvelder("Modric");
    middenvelder * middenvelder6 = new middenvelder("Sanchez");
    middenvelder * middenvelder7 = new middenvelder("Dybala");
    middenvelder * middenvelder8 = new middenvelder("Thiago");
    spelers.push_back(middenvelder1);
    spelers.push_back(middenvelder2);
    spelers.push_back(middenvelder3);
    spelers.push_back(middenvelder4);
    spelers.push_back(middenvelder5);
    spelers.push_back(middenvelder6);
    spelers.push_back(middenvelder7);
    spelers.push_back(middenvelder8);

    //aanvallers aanmaken en toevoegen
    aanvaller * aanvaller1 = new aanvaller("Lukaku");
    aanvaller * aanvaller2 = new aanvaller("Hazard");
    aanvaller * aanvaller3 = new aanvaller("Mertens");
    aanvaller * aanvaller4 = new aanvaller("Origi");
    aanvaller * aanvaller5 = new aanvaller("Batshuayi");
    aanvaller * aanvaller6 = new aanvaller("Aguero");
    spelers.push_back(aanvaller1);
    spelers.push_back(aanvaller2);
    spelers.push_back(aanvaller3);
    spelers.push_back(aanvaller4);
    spelers.push_back(aanvaller5);
    spelers.push_back(aanvaller6);

    //data wedstrijd 1 toevoegen
    aanvaller1->addActie(new PasActie(true));
    aanvaller2->addActie(new PasActie(true));
    aanvaller2->addActie(new loop(1));
    aanvaller1->addActie(new loop(1));
    aanvaller3->addActie(new loop(1));
    aanvaller3->addActie(new PasActie(true));
    middenvelder1->addActie(new loop(1));
    middenvelder2->addActie(new loop(1));
    middenvelder3->addActie(new loop(1));
    middenvelder2->addActie(new loop(1));
    middenvelder1->addActie(new PasActie(true));
    middenvelder2->addActie(new PasActie(true));
    aanvaller1->addActie(new doelpoging(false));
    middenvelder1->addActie(new PasActie(true));
    middenvelder2->addActie(new PasActie(true));
    middenvelder3->addActie(new PasActie(true));
    middenvelder2->addActie(new PasActie(true));
    middenvelder1->addActie(new PasActie(true));
    middenvelder3->addActie(new PasActie(true));
    middenvelder1->addActie(new loop(2));
    middenvelder2->addActie(new loop(2));
    middenvelder3->addActie(new loop(2));
    aanvaller2->addActie(new doelpoging(true));
    verdediger1->addActie(new loop(4));
    verdediger2->addActie(new loop(3));
    verdediger3->addActie(new loop(5));
    verdediger4->addActie(new loop(4));
    keeper1->addActie(new SaveActie(true));
    keeper1->addActie(new SaveActie(true));

    //data wedstrijd 2 toevoegen
    aanvaller4->addActie(new PasActie(true));
    aanvaller5->addActie(new PasActie(false));
    aanvaller4->addActie(new loop(1));
    aanvaller6->addActie(new loop(1));
    aanvaller4->addActie(new loop(1));
    aanvaller5->addActie(new PasActie(true));
    middenvelder4->addActie(new loop(1));
    middenvelder5->addActie(new loop(1));
    middenvelder6->addActie(new loop(1));
    middenvelder4->addActie(new loop(1));
    middenvelder6->addActie(new PasActie(true));
    middenvelder5->addActie(new PasActie(true));
    aanvaller5->addActie(new doelpoging(true));
    middenvelder5->addActie(new PasActie(true));
    middenvelder6->addActie(new PasActie(true));
    middenvelder4->addActie(new PasActie(true));
    middenvelder4->addActie(new PasActie(true));
    middenvelder4->addActie(new PasActie(true));
    middenvelder5->addActie(new PasActie(true));
    middenvelder6->addActie(new loop(2));
    middenvelder4->addActie(new loop(2));
    middenvelder6->addActie(new loop(2));
    aanvaller6->addActie(new doelpoging(false));
    aanvaller4->addActie(new doelpoging(true));
    verdediger5->addActie(new loop(4));
    verdediger6->addActie(new loop(3));
    verdediger7->addActie(new loop(5));
    verdediger8->addActie(new loop(4));;
    keeper2->addActie(new SaveActie(true));
    keeper2->addActie(new SaveActie(true));

team ploeg = team(spelers);
ploeg.gameDone();


}