#include "app.h" // <1>
#include <stdio.h>
#include <fstream>
#include <string>
#include "Tracer.h" // <2>
#include "ForceSensor.h" // <3>
#include "Clock.h"  

Tracer tracer;  // <4> 
Clock clock;    // <5> 


using namespace spikeapi;

void test()
{
    std::ifstream ifs("./sorot_spike/ScenarioList.txt");
    std::string str = "10";
	  int x = std::stoi(str); // シミュレータではエラーが発生する。
    std::size_t i = 0;

    std::string str2 = std::to_string(i); // シミュレータではエラーが発生する。
}

void tracer_task(intptr_t exinf) { // <1>
  tracer.run(); // <2>
  ext_tsk();
}

void main_task(intptr_t unused) { // <1>
  const uint32_t duration = 100*1000; // <2>
  ForceSensor forceSensor(EPort::PORT_D);

  tracer.init(); // <3>
  sta_cyc(TRACER_CYC); // <4>
  
  while (!forceSensor.isTouched()) { // <1>
      clock.sleep(duration);   // <2>
  }

  stp_cyc(TRACER_CYC); // <3>
  tracer.terminate(); // <4>
  ext_tsk(); // <5>
}

