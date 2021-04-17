#include "AppCtrl.h"
#include "MyApp.hpp"
#include "MyOtherApp.hpp"

/*! Test main */
int main() {
    AppCtrl *appCtrl = new AppCtrl();
    MyApp *myApp = new MyApp(appCtrl);
    MyOtherApp *myOtherApp = new MyOtherApp(appCtrl);

    appCtrl->addApp(myApp);
    appCtrl->addApp(myOtherApp);
    appCtrl->start();
    appCtrl->exec();
    appCtrl->nextApp();
    appCtrl->exec();

    return 0;
}
