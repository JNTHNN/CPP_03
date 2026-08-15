# Module CPP 03

Ce module de la piscine C++ de l'école 42 introduit les concepts fondamentaux de **l'héritage** en C++. Il nous apprend comment créer de nouvelles classes basées sur des classes existantes, permettant ainsi de réutiliser du code et d'étendre des fonctionnalités.

## Concepts abordés

### 1. L'Héritage (Inheritance)
Dans l'exercice 00, nous commençons par créer une classe de base `ClapTrap` qui possède des attributs (Points de vie, Énergie, Dégâts) et des méthodes (Attaquer, Prendre des dégâts, Se réparer).
Dans les exercices 01 et 02, nous créons des classes dérivées (`ScavTrap` et `FragTrap`) qui **héritent** de `ClapTrap` :
```cpp
class ScavTrap : public ClapTrap { ... };
```
Grâce à l'héritage, `ScavTrap` et `FragTrap` possèdent *automatiquement* toutes les méthodes et propriétés de `ClapTrap`, tout en pouvant définir les leurs (ex: `guardGate()` ou `highFivesGuys()`).

### 2. Visibilité : Private vs Protected
- Dans `ex00`, les attributs de `ClapTrap` sont **private**. Ils sont donc inaccessibles de l'extérieur.
- Dans `ex01` et `ex02`, pour que les classes filles (`ScavTrap`, `FragTrap`) puissent modifier leur propre nom, leurs points de vie, etc. au moment de leur construction, les attributs de `ClapTrap` doivent passer en **protected**. Ainsi, ils restent invisibles de l'extérieur, mais accessibles par les classes enfants.

### 3. Chaînage des Constructeurs et Destructeurs
Lors de l'instanciation d'une classe fille, l'ordre d'appel est strict :
- **Construction** : Le constructeur de la classe mère (`ClapTrap`) est toujours appelé en *premier*, avant celui de la classe fille (`ScavTrap`). Cela garantit que la base est bien initialisée.
- **Destruction** : C'est l'inverse ! Le destructeur de la classe fille est appelé en *premier*, puis celui de la classe mère (LIFO - Last In, First Out).

### 4. La logique de gestion de l'énergie (ET vs OU)
Nous avons corrigé un bug classique d'underflow dans la méthode `attack()`. Pour attaquer, un robot doit avoir **et** des points de vie (Hit points) **et** des points d'énergie (Energy points). Une vérification avec le ET logique (`&&`) est primordiale pour éviter qu'un robot sans énergie (mais avec de la vie) puisse attaquer et faire un *underflow* sur sa variable non-signée (`unsigned int`).

## Compilation et Exécution

Chaque exercice dispose de son propre sous-dossier et Makefile. 
Exemple pour exécuter l'exercice 01 :

```bash
cd ex01
make
./scavtrap
```
