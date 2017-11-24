#include "crpropa/module/DiffusePropagation.h"

#include <sstream>
#include <stdexcept>

namespace crpropa {

DiffusePropagation::DiffusePropagation(double minStep, double maxStep) :
		minStep(minStep), maxStep(maxStep) {
	if (minStep > maxStep)
		throw std::runtime_error("DiffusePropagation: minStep > maxStep");
}

void DiffusePropagation::process(Candidate *c) const {
	c->previous = c->current;

	double step = std::max(minStep, c->getNextStep());
	c->setCurrentStep(step);

	Vector3d pos = c->current.getPosition();
	Vector3d dir = c->current.getDirection();
	c->current.setPosition(pos + dir * step);
	
	c->current.setDirection(random.randVector());

	c->setNextStep(maxStep);
}

void DiffusePropagation::setMinimumStep(double step) {
	if (step > maxStep)
		throw std::runtime_error("DiffusePropagation: minStep > maxStep");
	minStep = step;
}

void DiffusePropagation::setMaximumStep(double step) {
	if (minStep > step)
		throw std::runtime_error("DiffusePropagation: minStep > maxStep");
	maxStep = step;
}

double DiffusePropagation::getMinimumStep() const {
	return minStep;
}

double DiffusePropagation::getMaximumStep() const {
	return maxStep;
}

std::string DiffusePropagation::getDescription() const {
	std::stringstream s;
	s << "DiffusePropagation: Step size = " << minStep / kpc
			<< " - " << maxStep / kpc << " kpc";
	return s.str();
}

} // namespace crpropa
