from CRABClient.UserUtilities import config
config = config()

config.General.requestName = 'TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Winter24_NanoAODv15_PNet_LeptonID_20250201'
config.General.workArea = 'crab'
config.General.transferOutputs = True

config.JobType.pluginName = 'Analysis'
config.JobType.psetName = 'step_3_cfg.py'
config.JobType.pyCfgParams = []
NCORES = 4
config.JobType.maxMemoryMB = 2000 * NCORES
config.JobType.numCores = NCORES

#config.Data.inputDBS = 'phys03'
config.Data.inputDataset = '/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8/Run3Winter24MiniAOD-133X_mcRun3_2024_realistic_v10-v2/MINIAODSIM'
config.Data.outLFNDirBase = '/store/user/kskovpen/PNet_LeptonID/'
config.Data.splitting = 'FileBased'
config.Data.unitsPerJob = 1
config.Data.outputDatasetTag = 'TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Winter24_NanoAODv15_PNet_LeptonID_20250201'
config.Data.publication = True

config.User.voGroup = 'becms'
config.Site.storageSite = 'T2_BE_IIHE'
