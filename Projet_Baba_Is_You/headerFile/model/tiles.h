//
// Created by Mamoun benmassaoud on 14/03/2023.
//

#ifndef PROJET_BABA_IS_YOU_TILES_H
#define PROJET_BABA_IS_YOU_TILES_H

#include <vector>
#include "element.h"
/*
* Classe représentant une collection de tuiles, chacune étant constituée d'un ensemble d'éléments.
*/
class Tiles {
public:
    /*
    * Constructeur par défaut de la classe Tiles.
    * Initialise l'attribut listElement avec une liste vide.
    */
    Tiles();

    /*
    * Constructeur de la classe Tiles prenant en paramètre une liste d'éléments.
    * Initialise l'attribut listElement avec la liste passée en paramètre.
    * @param listElement Liste d'éléments.
    */
    Tiles(const std::vector<Element>& listElement);

    /*
    * Destructeur de la classe Tiles.
    * Libère les ressources allouées pour l'attribut listElement.
    */
    ~Tiles();

    /*
    * Getter pour l'attribut listElement de la classe Tiles.
    * @return Liste d'éléments.
    */
    const std::vector<Element>& getListElement() const;

private:
    std::vector<Element> listElement;
};
#endif //PROJET_BABA_IS_YOU_TILES_H
