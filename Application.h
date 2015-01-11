#pragma once

#include "OutputMethods.h"

namespace Application {
	// Tracker status
	enum trackerStatus {
		STATUS_IDLE			= 1,	// App is not doing anything
		STATUS_CALIBRATED	= 2,	// App is not doing anything, but is calibrated
		STATUS_CALIBRATING	= 11,	// App is calibrating
		STATUS_TESTING		= 12,	// App is testing
		STATUS_PAUSED		= 13	// App is paused
	};

	extern trackerStatus status;
	extern bool isTrackerCalibrated;
	extern CvRect *faceRectangle;

	std::vector<boost::shared_ptr<AbstractStore> > getStores();
}

