#ifndef DIFFUSEPROPAGATION_H
#define DIFFUSEPROPAGATION_H

#include "crpropa/Module.h"
#include "crpropa/Units.h"
#include "crpropa/Random.h"

namespace crpropa {

/**
 @class DiffusePropagation
 @brief Simple diffusion propagation

 This module implements diffusion.
 The step size is guaranteed to be larger than minStep and smaller than maxStep.
 It always proposes a next step size of maxStep.
 */
class DiffusePropagation: public Module {
private:
	double minStep, maxStep;
	Random &random = Random::instance();

public:
	DiffusePropagation(double minStep = (0.1 * kpc), double maxStep = (1 * Gpc));
	void process(Candidate *candidate) const;
	void setMinimumStep(double minStep);
	void setMaximumStep(double maxStep);
	double getMinimumStep() const;
	double getMaximumStep() const;
	std::string getDescription() const;
};

} // namespace crpropa

#endif // DIFFUSEPROPAGATION_H
