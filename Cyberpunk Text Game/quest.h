#pragma once
#include "game.h"

using namespace std;

class Quest
{
private:
    string name;
    string description;
    string status;
    bool running;
    bool completed;

public:
    Quest();
    Quest(string name, string description);
    Quest(string name, string description, string status, bool running, bool completed);
    virtual ~Quest();

    inline const string& getName() const { return this->name; };
    inline const string& getDescription() const { return this->description; };
    inline const string& getStatus() const { return this->status; };
    inline const bool& isRunning() const { return this->running; };
    inline const bool& isCompleted() const { return this->completed; };

    void addQuest();
    void endQuest();
};
