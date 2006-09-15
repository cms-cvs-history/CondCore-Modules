#ifndef CondCore_Modules_EmptyIOVSource_h
#define CondCore_Modules_EmptyIOVSource_h

#include "FWCore/Framework/interface/ConfigurableInputSource.h"
#include <set>

namespace cond {
  class EmptyIOVSource : public edm::ConfigurableInputSource {
  public:
    EmptyIOVSource(edm::ParameterSet const&, edm::InputSourceDescription const&);
    ~EmptyIOVSource();
  private:
    virtual bool produce(edm::Event & e);
    virtual void setRunAndEventInfo();
  private:
    std::string m_timeType;
    unsigned int m_firstValid;
    unsigned long long m_lastValid;
    unsigned long long m_currentValid;
    unsigned long long m_interval;
    std::set<unsigned long long> m_iovs;
    std::set<unsigned long long>::iterator m_iovit;
    std::set<unsigned long long>::iterator m_iovstop;
  };
}
#endif
