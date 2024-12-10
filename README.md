<<<<<<< HEAD
# holbertonschool-binary_trees

projet d'implémentation d'un arbres binaires.

---

# Arbres Binaires en C
=======
 Arbres Binaires en C
>>>>>>> 080a72e (0-binary_tree_node.c)

## Description

Ce projet implémente un arbre binaire en langage C. Un arbre binaire est une structure de données où chaque nœud a au plus deux enfants, appelés "enfant gauche" et "enfant droit". Cette structure est utilisée pour organiser les données de manière hiérarchique et est souvent utilisée dans des algorithmes comme la recherche, le tri, ou encore pour la gestion des bases de données.

Ce projet inclut diverses opérations permettant de manipuler un arbre binaire, telles que l'insertion, la suppression, la recherche, ainsi que des parcours (pré-ordre, ordre, post-ordre).

## Table des matières

- [Fonctionnalités](#fonctionnalités)
- [Prérequis](#prérequis)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Fonctions principales](#fonctions-principales)
- [Exemples](#exemples)
- [Contributions](#contributions)
- [Licence](#licence)

## Fonctionnalités

- **Insertion d'un nœud** : Ajoute un nouveau nœud dans l'arbre.
- **Suppression d'un nœud** : Supprime un nœud de l'arbre en tenant compte des différents cas (nœud sans enfants, avec un enfant, avec deux enfants).
- **Recherche d'un élément** : Recherche si une valeur est présente dans l'arbre.
- **Parcours en pré-ordre** : Visite d'abord la racine, puis les sous-arbres gauche et droit.
- **Parcours en ordre** : Visite du sous-arbre gauche, de la racine, puis du sous-arbre droit.
- **Parcours en post-ordre** : Visite d'abord les sous-arbres gauche et droit, puis la racine.
- **Affichage de l'arbre** : Permet d'afficher l'arbre de manière lisible (sous forme de texte).

## Prérequis

Pour compiler et exécuter ce projet, vous devez avoir un compilateur C installé sur votre machine. Les outils suivants sont recommandés :

- **GCC** (GNU Compiler Collection)
- **Make** (optionnel, mais recommandé pour la gestion du projet)

### Librairies nécessaires

Aucune librairie externe n'est requise pour ce projet. Tout le code est écrit en C standard.

## Installation

1. Clonez ce dépôt :
   ```bash
   git clone https://github.com/votre-utilisateur/arbre-binaire-c.git
   ```
   
2. Accédez au répertoire du projet :
   ```bash
   cd arbre-binaire-c
   ```

3. Compilez le projet :
   ```bash
   make
   ```

4. Exécutez le programme (optionnel, si vous avez un fichier d'exemple ou un test dans `main.c`) :
   ```bash
   ./arbre_binaire
   ```

## Utilisation

Voici un exemple d'utilisation du projet après la compilation :

### Exemple de programme

```c
#include "arbre_binaire.h"

int main() {
    struct Noeud* racine = NULL;

    // Insertion de quelques éléments
    racine = inserer(racine, 10);
    racine = inserer(racine, 5);
    racine = inserer(racine, 15);
    racine = inserer(racine, 3);
    racine = inserer(racine, 7);

    // Recherche d'un élément
    if (chercher(racine, 7)) {
        printf("L'élément 7 est dans l'arbre.\n");
    }

    // Parcours en ordre
    printf("Parcours en ordre: ");
    parcours_en_ordre(racine);
    printf("\n");

    // Suppression d'un élément
    racine = supprimer(racine, 7);

    // Parcours après suppression
    printf("Parcours en ordre après suppression: ");
    parcours_en_ordre(racine);
    printf("\n");

    return 0;
}
```

## Fonctions principales

### `struct Noeud* inserer(struct Noeud* racine, int valeur);`

Cette fonction insère une valeur dans l'arbre binaire à la position appropriée en suivant les règles classiques des arbres binaires de recherche.

### `int chercher(struct Noeud* racine, int valeur);`

Recherche une valeur dans l'arbre. Retourne 1 si l'élément est trouvé, sinon retourne 0.

### `struct Noeud* supprimer(struct Noeud* racine, int valeur);`

Supprime un nœud dans l'arbre. Gère les différents cas de suppression (nœud sans enfant, avec un enfant, avec deux enfants).

### `void parcours_en_ordre(struct Noeud* racine);`

Effectue un parcours en ordre (gauche, racine, droite) de l'arbre.

### `void parcours_pre_ordre(struct Noeud* racine);`

Effectue un parcours en pré-ordre (racine, gauche, droite) de l'arbre.

### `void parcours_post_ordre(struct Noeud* racine);`

Effectue un parcours en post-ordre (gauche, droite, racine) de l'arbre.

## Exemples

Voici un exemple de code montrant comment utiliser les différentes fonctions du projet :

```c
#include "arbre_binaire.h"

int main() {
    struct Noeud* racine = NULL;

    // Insertion
    racine = inserer(racine, 20);
    racine = inserer(racine, 10);
    racine = inserer(racine, 30);
    racine = inserer(racine, 5);
    racine = inserer(racine, 15);

    // Affichage en ordre
    printf("Affichage en ordre: ");
    parcours_en_ordre(racine);
    printf("\n");

    // Recherche
    if (chercher(racine, 15)) {
        printf("L'élément 15 est trouvé.\n");
    }

    // Suppression
    racine = supprimer(racine, 10);
    printf("Affichage en ordre après suppression: ");
    parcours_en_ordre(racine);
    printf("\n");

    return 0;
}
```

## Contributions

Les contributions sont les bienvenues ! Si vous souhaitez contribuer à ce projet, veuillez suivre ces étapes :

1. Fork ce projet.
2. Créez une branche de développement (`git checkout -b feature/nouvelle-fonctionnalite`).
3. Faites vos changements et ajoutez des tests si nécessaire.
4. Committez vos changements (`git commit -am 'Ajout d\'une nouvelle fonctionnalité'`).
5. Poussez votre branche (`git push origin feature/nouvelle-fonctionnalite`).
6. Créez une Pull Request pour proposer vos changements.

<<<<<<< HEAD
## Licence

Ce projet est sous licence MIT. Voir le fichier [LICENSE](LICENSE) pour plus de détails.

---
=======

>>>>>>> 080a72e (0-binary_tree_node.c)
