#include "protonectsim.h"
#include "soundcanvas.h"
#include <QThread>

ProtonectSim::ProtonectSim(int fps)
{
    this->fps = fps;
}

void ProtonectSim::run()
{
    SoundCanvas q1 = SoundCanvas("q1");

    while(true) {
       q1.Update(static_cast <float> (rand()) / static_cast <float> (RAND_MAX/255), (int) (rand() / (RAND_MAX/255)), static_cast <float> (rand()) / static_cast <float> (RAND_MAX/200));
       int waitMs = 1000 / fps;
       QThread::msleep(waitMs);
   }
}


