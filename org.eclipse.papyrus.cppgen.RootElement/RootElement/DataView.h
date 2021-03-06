// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef ROOTELEMENT_DATAVIEW_H
#define ROOTELEMENT_DATAVIEW_H

/************************************************************
 DataView class header
 ************************************************************/

#include "RootElement/Pkg_RootElement.h"

#include "RootElement/Constants.h"
#include "RootElement/Pkg_RootElement.h"
#include "RootElement/Satellite.h"
#include "RootElement/SlideWidget.h"
#include "RootElement/Ui_DataView.h"

/************************************************************/
/**
 * 
 */
class DataView: public SlideWidget {
public:

	/**
	 * 
	 * @param *current 
	 * @param *previous 
	 */
	void on_dataList_currentItemChanged(QTreeWidgetItem /*in*/*current,
			QTreeWidgetItem /*in*/*previous);

	/**
	 * 
	 * @param &arg1 
	 */
	void on_searchBar_textChanged(QTableWidget /*in*/&arg1);

private:
	/**
	 * 
	 */
	Ui_DataView UI;
	/**
	 * 
	 */
	Satellite m_satellite;
	/**
	 * 
	 */
	Constants constants;
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

/************************************************************
 End of DataView class header
 ************************************************************/

#endif
