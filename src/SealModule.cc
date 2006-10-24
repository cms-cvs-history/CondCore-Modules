#include "PluginManager/ModuleDef.h"
#include "FWCore/Framework/interface/InputSourceMacros.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/Framework/interface/SourceFactory.h"
#include "CondCore/Modules/src/IOVSource.h"
#include "CondCore/Modules/src/EmptyIOVSource.h"
using cond::IOVSource;
using cond::EmptyIOVSource;
DEFINE_SEAL_MODULE();
DEFINE_ANOTHER_FWK_INPUT_SOURCE(IOVSource);
DEFINE_ANOTHER_FWK_INPUT_SOURCE(EmptyIOVSource);
