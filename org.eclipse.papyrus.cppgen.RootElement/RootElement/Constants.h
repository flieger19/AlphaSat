// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef ROOTELEMENT_CONSTANTS_H
#define ROOTELEMENT_CONSTANTS_H

/************************************************************
 Constants class header
 ************************************************************/

#include "RootElement/Pkg_RootElement.h"

#include "EcorePrimitiveTypes/Pkg_EcorePrimitiveTypes.h"

/************************************************************/
/**
 * 
 */
class Constants {
public:
	Constants() :
			screenDerivativ(0.1078125) {
	}

private:
	/**
	 * 
	 */
	static EDouble widthFullHD;
	/**
	 * 
	 */
	static EDouble zoomFullHD;
	/**
	 * 
	 */
	static EDouble zoomDerivativ;
	/**
	 * 
	 */
	static EDouble gainFullHD;
	/**
	 * 
	 */
	EDouble screenDerivativ;
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

/************************************************************
 End of Constants class header
 ************************************************************/

#endif
