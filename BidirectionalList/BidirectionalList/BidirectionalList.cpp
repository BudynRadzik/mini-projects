

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>
#include <ctype.h>
#include <conio.h>

class Song {
    friend std::ostream& operator<<(std::ostream& os, const Song& s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
        : name{ name }, artist{ artist }, rating{ rating } {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }

    bool operator<(const Song& rhs) const {
        return this->name < rhs.name;
    }

    bool operator==(const Song& rhs) const {
        return this->name == rhs.name;
    }
};

std::ostream& operator<<(std::ostream& os, const Song& s) {
    os << std::setw(20) << std::left << s.name
        << std::setw(30) << std::left << s.artist
        << std::setw(2) << std::left << s.rating;
    return os;
}

void display_menu() {
    std::cout << "\n\n\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song& song) {
    
       std::cout << "Playing:" << std::endl;
       std::cout << song << std::endl;
   
}

void display_playlist(std::list<Song>& playlist, Song& current_song)
{
    for (auto& i : playlist)
    {
        std::cout << i << std::endl;
    }
    std::cout << "Current song:" << std::endl;
    std::cout << current_song << std::endl;

    /*for (auto it = playlist.begin(); it != playlist.end(); it++)
    {
        std::cout << *it << std::endl;
    }*/


    // do implementowania
       /*for (std::list<Song>::iterator i = playlist.begin(); i != playlist.end(); i++)
       {
           std::cout << *i << std::endl;
       }*/

}






int main() {

    char selection;



    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}
    };

    std::list<Song>::iterator current_song = playlist.begin();
    
    display_playlist(playlist,*current_song);

    
    selection = '0';
    while (selection != 'Q') {

        display_menu();
        //std::cin >> selection;
        selection = _getch();               // don t need to press enter
        selection = toupper(selection);
        system("cls");
        switch (selection) {
        case 'A':
            std::cout << "Add and play a new Song at current location" << std::endl;
            std::string name;
            std::string artist;
            int rating;
            std::cout << "Enter the name :";
            std::cin >> name;


            break;
        case'F':
            std::cout << "First song playing" << std::endl;
            current_song = playlist.begin();
            play_current_song(*current_song);
            display_playlist(playlist, *current_song);
            break;
        case 'N':
            std::cout << "Playing next song" << std::endl;
            current_song++;
            if (current_song == playlist.end())
            {
                current_song = playlist.begin();
            }
            else
            {
                //current_song++;              
            }
            play_current_song(*current_song);
            break;
        case 'P':
            std::cout << "Playing previous song" << std::endl;
            if (current_song == playlist.begin())
            {
                current_song = playlist.end();   
            }
            current_song--;
            play_current_song(*current_song);
            break;
        case 'L':
            std::cout << "List current playlist" << std::endl;
            display_playlist(playlist, *current_song);

            break;
       

        }
    }


   
    
   

    
    return 0;
}