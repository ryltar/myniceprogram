# My nice program

## Pré-requis

* g++6.3
* make
* debian 9
* c++11
* linux 4.9
* libstdc++6.3
* valgrind (via apt)

## Ennoncé

Vous récupérez un projet legacy, mal codé, qui est passé d'équipe en équipe et fini par un stagiaire. Il est grand temps de le remettre à jour !

### Contenu du projet

Un répertoire legacy qui contient les classes récupérés par les anciens prestataires, dans le répertoire new deux intefaces fonctionnelles qui ne doivent pas être modifiés ainsi qu'un fichier main qui ne doit pas non plus être touché et doit être fonctionel.

## Cahier des charges

Un fichier Main vous est fourni, ainsi que deux fichiers headers .h, ils doivent fonctionner sans être modifié. 
Le projet actuel **NE COMPILE PAS**. Il faut déduire le fonctonnement en lisant le code, ce qu'il est censé faire.<br/>
C'est une approche TDD, oû le test est établi (assert) et les classes derrières doivent se conformer à la classe main.
Votre programme ne doit pas contenir de fuite mémoire !
Celui ci sera vérifié avec Valgrind. (A noter qu'une feature actuelle fait qu'une fuite mémoire est présente selon la version de g++, ce problème est défini ici : https://bugzilla.redhat.com/show_bug.cgi?id=1312647 , cette fuite ci est donc tolérée.)

Vous devez donc :
* Déduire le fonctionnement attendu
* Modifier les fichiers pour que le code compile
* Vérifier que le fonctionnement est celui attendu (les asserts ne font pas d'erreur)
* Tester avec Valgrind qu'il n'y a pas de fuite mémoire

### Compilation

Fini les commandes g++ qu'il faut retenir, il faudra fourni un fichier make qui sera utilisé ainsi :
* make compile
  * Sera chargé d'éxécuter un `g++ -Wall -Werror -o myniceprogram main.cpp new/Helper.cpp new/Identitee.cpp`
* make run 
  * Dépend de 'compile', il compile puis lance le programme. Ne doit contenir qu'une ligne.
* make valgrind
  * Dépend de 'compile', il compile puis lance `valgrind --leak-check=full -v ./myniceprogram`
  
## Livraison

* Helper.cpp 
* Identitee.cpp
* Makefile

Mercredi 21 novembre 21h UTC +1
vasilvestre@laposte.net

## Notation
* Build et makefile ok - 5
* 5 tests - 2 points par tests
* 5 points s'il n'y a plus de fuite mémoire

## Correction

* cp /home/user/$ELEVE/Helper.cpp  /home/user/projets/myniceprogram/$ELEVE/new/Helper.cpp
* cp /home/user/$ELEVE/Identitee.cpp  /home/user/projets/myniceprogram/$ELEVE/new/Identitee.cpp
* cp /home/user/$ELEVE/Makefile  /home/user/projets/myniceprogram/$ELEVE/Makefile
* make run
* make valgrind
