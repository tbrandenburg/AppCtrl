// MyApp.h
#ifndef MYAPP_HPP
#define MYAPP_HPP

#include <iostream>

using namespace std;

class MyApp : public App {
    public:
        /* Inherit constructors */
        using App::App;

        void init() { 
            
        }
        void exec() { 
            cout << "1st Hello World!\r\n";
        }
};

#endif