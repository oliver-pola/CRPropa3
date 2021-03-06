#ifndef CRPROPA_PARTICLE_MASS_H
#define CRPROPA_PARTICLE_MASS_H

namespace crpropa {

/** Return the nucleus mass by lookup from a table.
 *  The masses are the atomic masses from the NIST database (http://www.nist.gov/pml/data/comp.cfm) minus electron masses, neglecting electron binding energies.
 *  Unmeasured atomic masses are taken to be A * amu minus electron masses.
 *  The data table is generated by data-tools/NuclearMass/createNuclearMassTable.
 */
double nuclearMass(int id);
double nuclearMass(int A, int Z);

} // namespace crpropa

#endif // CRPROPA_PARTICLE_MASS_H
