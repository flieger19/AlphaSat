// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef ROOTELEMENT_SATELLITE_H
#define ROOTELEMENT_SATELLITE_H

/************************************************************
 Satellite class header
 ************************************************************/

#include "RootElement/Pkg_RootElement.h"

#include "EcorePrimitiveTypes/Pkg_EcorePrimitiveTypes.h"
#include "PrimitiveTypes/Pkg_PrimitiveTypes.h"

/************************************************************/
/**
 * 
 */
class Satellite {
public:

	/**
	 * 
	 * @return success 
	 */
	::PrimitiveTypes::Boolean pushSatellite();

	/**
	 * 
	 */
	void setNumber();

	/**
	 * 
	 */
	void setName();

	/**
	 * 
	 */
	void setESN();

	/**
	 * 
	 */
	void setClassify();

	/**
	 * 
	 */
	void setEpoch_y();

	/**
	 * 
	 */
	void setEpoch();

	/**
	 * 
	 */
	void set_d_dt_MM();

	/**
	 * 
	 */
	void set_d_dt2_MM();

	/**
	 * 
	 */
	void setDrag();

	/**
	 * 
	 */
	void setIncli();

	/**
	 * 
	 */
	void setRAN();

	/**
	 * 
	 */
	void setEcctr();

	/**
	 * 
	 */
	void setMA();

	/**
	 * 
	 */
	void setMM();

	/**
	 * 
	 */
	void setRNE();

	/**
	 * 
	 */
	void Operation1();

private:
	/**
	 * 
	 */
	::PrimitiveTypes::Integer number;
	/**
	 * 
	 */
	::PrimitiveTypes::String name;
	/**
	 * 
	 */
	::PrimitiveTypes::Integer ESN;
	/**
	 * 
	 */
	EChar classify;
	/**
	 * 
	 */
	::PrimitiveTypes::Integer epoch_y;
	/**
	 * 
	 */
	::PrimitiveTypes::Integer epoch;
	/**
	 * 
	 */
	EDouble d_dt_MM;
	/**
	 * 
	 */
	EDouble d_dt2_MM;
	/**
	 * 
	 */
	EDouble drag;
	/**
	 * 
	 */
	EDouble incli;
	/**
	 * 
	 */
	EDouble RAN;
	/**
	 * 
	 */
	EDouble ecctr;
	/**
	 * 
	 */
	EDouble MA;
	/**
	 * 
	 */
	EDouble MM;
	/**
	 * 
	 */
	EDouble RNE;
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

/************************************************************
 End of Satellite class header
 ************************************************************/

#endif
