#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BWA2BowtiePlugin.h"

void BWA2BowtiePlugin::input(std::string file) {
 inputfile = file;
}

void BWA2BowtiePlugin::run() {}

void BWA2BowtiePlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "bwa-to-bowtie";
myCommand += " ";
myCommand += inputfile + " ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<BWA2BowtiePlugin> BWA2BowtiePluginProxy = PluginProxy<BWA2BowtiePlugin>("BWA2Bowtie", PluginManager::getInstance());
