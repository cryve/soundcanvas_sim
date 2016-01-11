#include "soundcanvas.h"
#include <QDebug>
#include <QThread>
#include <QString>


SoundCanvas::SoundCanvas(std::string name)
{
    this->name = name;
    //midiOutput.open("QuickTime Music");
    midiOutput.open("Microsoft GS Wavetable Synth");
    midichannel = 0;
    midiOutput.sendProgram(midichannel, 41);
    midiOutput.sendNoteOn(midichannel, 67, 127);
}

SoundCanvas::~SoundCanvas(){
    midiOutput.close();
}

void SoundCanvas::Update(float mid, int mindepth, float distance)
{
    this->mid = mid;
    this->mindepth = mindepth;
    this->distance = distance;

    //std::cout << "Mid: " << mid << " Min: " << mindepth << " Dist: " << distance  << std::endl;


    int pitchbendValue = calcPitchbend(mindepth);
    //std::cout << pitchbendValue << std::endl;
    midiOutput.sendPitchBend(midichannel, pitchbendValue);

}

int SoundCanvas::calcPitchbend(int mindepth) {
    //std::cout << mindepth << std::endl;
    float depthMax = 255.0;
    float pitchbendMax = 16383.0;
    float percentage = ((float)mindepth / depthMax);
    //std::cout << percentage << std::endl;
    float pitchbend = percentage * pitchbendMax;
    std::cout << pitchbend << std::endl;

    return pitchbend;
}
