// AppCtrl.h
#ifndef APPCTRL_H
#define APPCTRL_H

#include "App.h"

#define MAX_APPS 23u

/*! Forward declaration for App */
class App;

/*! AppCtrl manages Apps to be executed */
class AppCtrl
{
  App *apps[MAX_APPS];

private:
  int currentApp = 0u;
  int addedApps = 0u;
  bool started = false;

public:
  AppCtrl();

  /*! Adds an app, currentApp is not changed */
  void addApp(App *app);

  /*! Sets currentApp to first added App and initializes the same, enables execution of all apps */
  void start();

  /*! Disables execution of all apps */
  void end();

  /*! Switches to first app and initializes the same */
  void firstApp();

  /*! Switches to next app and initializes the same */
  void nextApp();

  /*! Executes the current app */
  bool exec();

};

#endif
