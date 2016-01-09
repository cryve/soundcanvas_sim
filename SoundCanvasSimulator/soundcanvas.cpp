#include "soundcanvas.h"
#include <QDebug>
#include <QThread>
#include <QString>


SoundCanvas::SoundCanvas(std::string name)
{
    this->name = name;
    midiOutput.open("Microsoft GS Wavetable Synth");
    midichannel = 41;
    //midiOutput.sendNoteOn(midichannel, 67, 127);
}

SoundCanvas::~SoundCanvas(){
    //midiOutput.close();
}

void SoundCanvas::Update(float mid, int mindepth, float distance)
{
    this->mid = mid;
    this->mindepth = mindepth;
    this->distance = distance;

    std::cout << "Mid: " << mid << " Min: " << mindepth << " Dist: " << distance  << std::endl;

    //midiOutput.sendPitchBend(midichannel, distance);

}
