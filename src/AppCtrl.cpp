// AppCtrl.cpp
#include "AppCtrl.h"

AppCtrl::AppCtrl()
{
}

void AppCtrl::addApp(App *app)
{
    if(addedApps<(int)MAX_APPS) {
        apps[addedApps] = app;
        addedApps++;
    }
}

void AppCtrl::start()
{
    this->currentApp = 0;
    this->started = true;
    this->apps[currentApp]->init();
}

void AppCtrl::end()
{
    this->currentApp = 0;
    this->started = false;
}

void AppCtrl::firstApp()
{
    this->currentApp = 0;
    this->apps[currentApp]->init();
}

void AppCtrl::nextApp()
{
    currentApp = (currentApp + 1) % addedApps;
    this->apps[currentApp]->init();
}

bool AppCtrl::exec()
{
    if(started == true && addedApps>0 && this->apps[currentApp]->isEnabled()) {
        this->apps[currentApp]->exec();
        return true;
    } else {
        return false;
    }
}