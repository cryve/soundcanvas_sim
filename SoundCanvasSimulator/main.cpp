#include <QCoreApplication>
#include "protonectsim.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ProtonectSim protonectSim(15);
    protonectSim.run();

    return a.exec();
}
