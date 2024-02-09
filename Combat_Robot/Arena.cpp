#include "Arena.h"

Robot& Arena::fight(Robot& r1, Robot& r2)
{
    
        while (!r1.isDead() && !r2.isDead()) {
            r1.fire(r2);       //appelle de la fonction fire() sur l'objet r2
            if (!r2.isDead()) {     //vrification du retour de la fonction isDead
                r2.fire(r1);    //appelle de la fonction fire() sur l'objet r1
            }
        }
        return r1.isDead() ? r2 : r1; //retour avec condition imbrique pour verifier 
                                     //qui des deux objet a la valeur 0.
    
}
