import FWCore.ParameterSet.Config as cms

process = cms.Process("TEST")
process.source = cms.Source("EmptyIOVSource",
    lastRun = cms.untracked.uint32(8),
    timetype = cms.string('runnumber'),
    firstRun = cms.untracked.uint32(2),
    interval = cms.uint32(2)
)



