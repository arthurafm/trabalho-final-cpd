#ifndef REGISTRO_H
    #define REGISTR0_H

#include <string>
#include <vector>
#include <ostream>

class Anime{
    public:

        Anime(std::string linha);
        ~Anime();

        int getID();
        std::string getName();
        float getScore();
        std::string getGenres();
        std::string getEnglishName();
        std::string getType();
        int getEpisodes();
        std::string getAired();
        std::string getPremiered();
        std::string getProducers();
        std::string getLicensors();
        std::string getStudios();
        std::string getSource();
        std::string getDuration();
        std::string getRating();
        int getRanked();
        int getPopularity();
        int getMembers();
        int getFavorites();
        int getWatching();
        int getCompleted();
        int getOnHold();
        int getDropped();
        int getPlanToWatch();
        int getScore10();
        int getScore9();
        int getScore8();
        int getScore7();
        int getScore6();
        int getScore5();
        int getScore4();
        int getScore3();
        int getScore2();
        int getScore1();

        void printaRegistro();

    private:

        int id;
        std::string name;
        float score;
        std::string genres;
        std::string english_name;
        std::string type;
        int episodes;
        std::string aired;
        std::string premiered;
        std::string producers;
        std::string licensors;
        std::string studios;
        std::string source;
        std::string duration;
        std::string rating;
        int ranked;
        int popularity;
        int members;
        int favorites;
        int watching;
        int completed;
        int on_hold;
        int dropped;
        int plan_to_watch;
        int score10;
        int score9;
        int score8;
        int score7;
        int score6;
        int score5;
        int score4;
        int score3;
        int score2;
        int score1;

};

#endif // REGISTRO_H
