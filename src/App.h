// App.h
#ifndef APP_H
#define APP_H

#include "AppCtrl.h"

/*! Forward declaration for AppCtrl */
class AppCtrl;

/*! Abstract app */
class App
{
private:
  AppCtrl *appCtrl;
  bool enabled = true;

public:
  App(AppCtrl *f_appCtrl);
  App(AppCtrl *f_appCtrl, bool f_enabled);

  virtual void init() = 0;
  virtual void exec() = 0;

  void disable();
  void enable();
  bool isEnabled();
};

#endif
