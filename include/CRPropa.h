/// CRPRopa public definitions
#ifndef CRPROPA_H
#define CRPROPA_H

#include "crpropa/Candidate.h"
#include "crpropa/Common.h"
#include "crpropa/Cosmology.h"
#include "crpropa/EmissionMap.h"
#include "crpropa/Grid.h"
#include "crpropa/GridTools.h"
#include "crpropa/Module.h"
#include "crpropa/ModuleList.h"
#include "crpropa/ParticleID.h"
#include "crpropa/ParticleMass.h"
#include "crpropa/ParticleState.h"
#include "crpropa/PhotonBackground.h"
#include "crpropa/PhotonPropagation.h"
#include "crpropa/Random.h"
#include "crpropa/Referenced.h"
#include "crpropa/Source.h"
#include "crpropa/Units.h"
#include "crpropa/Variant.h"
#include "crpropa/Vector3.h"
#include "crpropa/Version.h"

#include "crpropa/module/Boundary.h"
#include "crpropa/module/BreakCondition.h"
#include "crpropa/module/DiffusionSDE.h"
#include "crpropa/module/EMCascade.h"
#include "crpropa/module/EMDoublePairProduction.h"
#include "crpropa/module/EMInverseComptonScattering.h"
#include "crpropa/module/EMPairProduction.h"
#include "crpropa/module/EMTripletPairProduction.h"
#include "crpropa/module/ElasticScattering.h"
#include "crpropa/module/ElectronPairProduction.h"
#include "crpropa/module/HDF5Output.h"
#include "crpropa/module/NuclearDecay.h"
#include "crpropa/module/Observer.h"
#include "crpropa/module/OutputCRPropa2.h"
#include "crpropa/module/OutputROOT.h"
#include "crpropa/module/OutputShell.h"
#include "crpropa/module/ParticleCollector.h"
#include "crpropa/module/PhotoDisintegration.h"
#include "crpropa/module/PhotoPionProduction.h"
#include "crpropa/module/PhotonEleCa.h"
#include "crpropa/module/PhotonOutput1D.h"
#include "crpropa/module/PropagationCK.h"
#include "crpropa/module/Redshift.h"
#include "crpropa/module/SimplePropagation.h"
#include "crpropa/module/DiffusePropagation.h"
#include "crpropa/module/SynchrotronRadiation.h"
#include "crpropa/module/TextOutput.h"
#include "crpropa/module/Tools.h"

#include "crpropa/magneticField/AMRMagneticField.h"
#include "crpropa/magneticField/JF12Field.h"
#include "crpropa/magneticField/MagneticField.h"
#include "crpropa/magneticField/MagneticFieldGrid.h"
#include "crpropa/magneticField/PshirkovField.h"
#include "crpropa/magneticField/QuimbyMagneticField.h"


#endif // CRPROPA_H
