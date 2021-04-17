// App.cpp
#include "App.h"

App::App(AppCtrl *f_appCtrl) {
    this->appCtrl = f_appCtrl;
}
  

App::App(AppCtrl *f_appCtrl, bool f_enabled) : App(f_appCtrl) {
    this->enabled = f_enabled;
}


void App::disable() {
    this->enabled = false;
}

void App::enable() {
    this->enabled = true;
}

bool App::isEnabled() {
    return this->enabled;
}