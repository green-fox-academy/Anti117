#include <iostream>
#include <vector>

#include "Pokemon.h"

std::vector<Pokemon> initializePokemons()
{
    std::vector<Pokemon> pokemons;

    pokemons.push_back(Pokemon("Balbasaur", "leaf", "water"));
    pokemons.push_back(Pokemon("Pikatchu", "electric", "water"));
    pokemons.push_back(Pokemon("Charizard", "fire", "leaf"));
    pokemons.push_back(Pokemon("Balbasaur", "water", "fire"));
    pokemons.push_back(Pokemon("Kingler", "water", "fire"));

    return pokemons;
}
std::string name ="";
int main(int argc, char* args[])
{
    std::vector<Pokemon> pokemonOfAsh = initializePokemons();

    Pokemon wildPokemon("Oddish", "leaf", "water");
    for (int i = 0; i < initializePokemons().size(); ++i) {
        if (initializePokemons()[i].isEffectiveAgainst(wildPokemon)) {
            name = initializePokemons()[i]._name;
        }
    }

    std::cout << "I choose You, " << name << "!" << std::endl;
    return 0;
}