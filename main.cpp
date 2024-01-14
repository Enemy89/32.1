#include <iostream>
#include "nlohmann/json.hpp"
#include <fstream>

struct Film {
    std::string country="Japan";
    std::string dateOfCreation = "14.07.2023";
    std::string studio="Ghibli";
    std::string director="Hayao Miyazaki";
    std::string author="Hayao Miyazaki";
    std::string producer="Toshio Suzuki, Goro Miyazaki, Koji Hoshino";
    std::string characters= "Mahito Maki - Soma Santoki, Himi - Aimyon, Izumi - Keiko Takeshita";
};

int main() {
    Film HoeAreYou;
    std::ofstream  file("../HowAreYou.json");
    nlohmann::json dict;
    dict["country"] = HoeAreYou.country;
    dict["dateOfCreation"] = HoeAreYou.dateOfCreation;
    dict["studio"] = HoeAreYou.studio;
    dict["director"] = HoeAreYou.director;
    dict["author"] = HoeAreYou.author;
    dict["producer"] = HoeAreYou.producer;
    dict["characters"] = HoeAreYou.characters;
    file<<dict;
    file.close();
}