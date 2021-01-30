/*
Practical  Assignment # 3;
Name:Lyubimov Ruslan;
ID:U1910163;
Group # 005;
*/
#include <iostream>
#include<string>
using namespace std;
class Player;

class FullName {
public:
    FullName() {
    };
    ~FullName() {};
    void set_first_name(string first_name) {
        this->first_name = first_name;
    }
    string get_first_name() {
        return first_name;
    }
    void set_middle_name(string middle_name) {
        this->middle_name = middle_name;
    }
    string get_middle_name() {
        return middle_name;
    }
    void set_last_name(string last_name) {
        this->last_name = last_name;
    }
    string get_last_name() {
        return last_name;
    }


private:
    string first_name;
    string middle_name;
    string last_name;

};
class Player {
public:
    Player() {

    };
    ~Player() {

    };
    void set_player_id(string player_id) {
        cout << "ID: ";
        cin >> player_id;
        this->player_id = player_id;
    }
    string get_player_id() {
        return player_id;
    }
    void set_matches_played(int matches_played) {
        cout << "Matches played: ";
        cin >> matches_played;
        this->matches_played = matches_played;
    }
    int get_matches_played() {
        return matches_played;
    }
    void set_goals_scored(int goals_scored) {
        cout << "Goals scored: ";
        cin >> goals_scored;
        this->goals_scored = goals_scored;
    }
    int get_goals_scored() {
        return goals_scored;
    }
    void set_player_name(string first, string middle, string last) {
        cout << "First name: ";
        cin >> first;
        cout << "Middle name: ";
        cin >> middle;
        cout << "Last name: ";
        cin >> last;

        player_name.set_first_name(first);
        player_name.set_middle_name(middle);
        player_name.set_last_name(last);

    }
    void  get_player_name() {
        cout << "First name: ";
        cout << player_name.get_first_name() << endl;
        cout << "Middle name: ";
        cout << player_name.get_middle_name() << endl;
        cout << "Last name: ";
        cout << player_name.get_last_name() << endl;


    }
    friend void increase_goals_scored(Player& p, int y);

private:
    string player_id;
    FullName player_name;
    int matches_played;
    int goals_scored;
};

void increase_goals_scored(Player& p, int y) {
    cout << "Goals to add: ";
    cin >> y;
    p.goals_scored += y;
}



int main() {
    Player player;
    Player* p = new Player;
    while (true) {
        cout << "1.Add player details" << endl
            << "2.Display player details" << endl
            << "3.Increase player goal scored" << endl
            << "4.Delete player from memory" << endl
            << "0.Exit" << endl;
        int option;
        cin >> option;
        switch (option) {
        case 0:
            return 0;
        case 1:
            p = &player;
            p->set_player_id("");
            p->set_player_name("", "", "");
            p->set_matches_played(0);
            p->set_goals_scored(0);
            break;
        case 2:
            cout << "ID: ";
            cout << p->get_player_id() << endl;
            p->get_player_name();
            cout << "Matches played: ";
            cout << p->get_matches_played() << endl;
            cout << "Goals scored: ";
            cout << p->get_goals_scored() << endl;
            break;

        case 3:
            increase_goals_scored(*p, 4);
            break;
        case 4:
            delete p;

            break;
        default:
            cout << "No such an option..." << endl;
            break;
        }
    }
    return 0;
}