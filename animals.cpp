#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Animal {

public:
    virtual void say() { cout << "generic animals are mute" << endl; }
};

class Cow :  public  Animal {
public:
    void say() { cout << "the cow says moooo!" << endl; }

};

class Dog :  public  Animal {
public:
    void say() { cout << "the dog says woof!" << endl; }

};


int main (int argc, char const *argv[])
{
    /* code */
    vector<Animal> barn;
    barn.push_back(Animal());
    barn.push_back(Cow());
    barn.push_back(Dog());
    
    for(auto a : barn) {
        a.say();
    }
    return 0;
}