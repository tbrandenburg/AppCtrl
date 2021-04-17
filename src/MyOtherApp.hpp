// MyOtherApp.h
#ifndef MYOTHERAPP_HPP
#define MYOTHERAPP_HPP

#include <iostream>

using namespace std;

class MyOtherApp : public App {
    public:
        /* Inherit constructors */
        using App::App;

        void init() { 
            
        }
        void exec() { 
            cout << "2nd Hello World!\r\n";
        }
};

#endif