#ifndef BWA2BOWTIEPLUGIN_H
#define BWA2BOWTIEPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class BWA2BowtiePlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BWA2Bowtie";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
