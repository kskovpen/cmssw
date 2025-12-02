#!/bin/bash

cmsDriver.py step3 \
--mc \
--conditions 133X_mcRun3_2024_realistic_v8 \
--datatier NANOAODSIM \
--era run3_nanoAOD_pre142X \
--eventcontent NANOAODSIM \
--customise_commands "process.packedpuppi.useExistingWeights=False \n process.packedpuppiNoLep.useExistingWeights=False \n from PhysicsTools.PatUtils.tools.runMETCorrectionsAndUncertainties import runMetCorAndUncFromMiniAOD; runMetCorAndUncFromMiniAOD(process,isData=False,jetCollUnskimmed='updatedJetsPuppi',metType='Puppi',postfix='Puppi',jetFlavor='AK4PFPuppi',puppiProducerLabel='packedpuppi',puppiProducerForMETLabel='packedpuppiNoLep',recoMetFromPFCs=True) " \
--filein "file:step2.root" \
--fileout "file:step3.root" \
--geometry DB:Extended \
--nStreams 1 --nThreads 8 \
--no_exec --number 10 \
--python_filename step_3_cfg.py \
--step NANO:@JME
