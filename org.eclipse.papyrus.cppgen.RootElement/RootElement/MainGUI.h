// --------------------------------------------------------
// Code generated by Papyrus C++
// --------------------------------------------------------

#ifndef ROOTELEMENT_MAINGUI_H
#define ROOTELEMENT_MAINGUI_H

/************************************************************
 MainGUI class header
 ************************************************************/

#include "RootElement/Pkg_RootElement.h"

#include "EcorePrimitiveTypes/Pkg_EcorePrimitiveTypes.h"
#include "RootElement/ConsoleView.h"
#include "RootElement/Constants.h"
#include "RootElement/DataView.h"
#include "RootElement/Database.h"
#include "RootElement/OrbitalMechanics.h"
#include "RootElement/Pkg_RootElement.h"
#include "RootElement/PolarView.h"
#include "RootElement/Satellite.h"
#include "RootElement/Settings.h"
#include "RootElement/TrajectoryElementApogy.h"
#include "RootElement/TrajectoryElementEditor.h"
#include "RootElement/TrajectoryElementOrbitInfo.h"
#include "RootElement/TrajectoryElementPerigy.h"
#include "RootElement/Ui_MainGui.h"

/************************************************************/
/**
 * 
 */
class MainGUI {

	/**
	 * 
	 */
	Ui_MainGui UI;
	/**
	 * 
	 */
	DataView m_dataView;
	/**
	 * 
	 */
	PolarView m_polarView;
	/**
	 * 
	 */
	ConsoleView m_consoleView;
	/**
	 * 
	 */
	TrajectoryElementEditor m_raanEditor;
	/**
	 * 
	 */
	TrajectoryElementEditor m_inclinationEditor;
	/**
	 * 
	 */
	TrajectoryElementPerigy m_perigyEditor;
	/**
	 * 
	 */
	TrajectoryElementApogy m_apogyEditor;
	/**
	 * 
	 */
	TrajectoryElementOrbitInfo m_orbitInfoEditor;
	/**
	 * 
	 */
	Satellite m_satellite;
	/**
	 * 
	 */
	OrbitalMechanics m_orbitalMechanik;
	/**
	 * 
	 */
	Database m_database;
	/**
	 * 
	 */
	Settings m_settings;
	/**
	 * 
	 */
	static EDouble widthFullHD;
	/**
	 * 
	 */
	static Constants constants;

	/**
	 * 
	 */
	void startCalculationOfTrack();

	/**
	 * 
	 */
	void appendCoordinates();

	/**
	 * 
	 */
	void showRecievedTrack();

	/**
	 * 
	 */
	void editSatellite();

	/**
	 * 
	 */
	void mouseMoveGeoPosition();

	/**
	 * 
	 */
	void zoomChanged();

	/**
	 * 
	 */
	void mouseMoveEvent();

	/**
	 * 
	 */
	void mouseReleaseEvent();

	/**
	 * 
	 */
	void mousePressEvent();

	/**
	 * 
	 */
	void on_actionAddNewSatelite_triggered();

	/**
	 * 
	 */
	void on_actionOpenSatelite_triggered();

	/**
	 * 
	 */
	void on_actionSaveSatelite_triggered();

	/**
	 * 
	 */
	void on_actionUsedDocuments_triggered();

	/**
	 * 
	 */
	void on_actionImportSatelite_triggered();

	/**
	 * 
	 */
	void on_actionExportSatelite_triggered();

	/**
	 * 
	 */
	void on_actionUndo_triggered();

	/**
	 * 
	 */
	void on_actionRedo_triggered();

	/**
	 * 
	 */
	void on_actionCut_triggered();

	/**
	 * 
	 */
	void on_actionCopy_triggered();

	/**
	 * 
	 */
	void on_actionPast_triggered();

	/**
	 * 
	 */
	void on_actionSelectAll_triggered();

	/**
	 * 
	 */
	void on_actionElse_triggered();

	/**
	 * 
	 */
	void on_actionCenterMap_triggered();

	/**
	 * 
	 */
	void on_actionZoomMap_triggered();

	/**
	 * 
	 */
	void on_actionCompleteMap_triggered();

	/**
	 * 
	 */
	void on_actionZoomSteps_triggered();

	/**
	 * 
	 */
	void on_actionProvideSatelite_triggered();

	/**
	 * 
	 */
	void on_actionDataViewer_triggered();

	/**
	 * 
	 */
	void on_actionPolarView_triggered();

	/**
	 * 
	 */
	void on_actionConsole_triggered();

	/**
	 * 
	 */
	void on_actionTrajectory_triggered();

	/**
	 * 
	 */
	void on_actionMinimize_triggered();

	/**
	 * 
	 */
	void on_actionZoomMainView_triggered();

	/**
	 * 
	 */
	void on_actionForwardAll_triggered();

	/**
	 * 
	 */
	void on_actionSearchHelp_triggered();

	/**
	 * 
	 */
	void on_actionAlphaSatHelp_triggered();

	/**
	 * 
	 * @param style 
	 */
	void setLineStyle(Marble::GeoDataStyle /*in*/style = null);

	/**
	 * 
	 * @param m 
	 * @param x 
	 * @param x0 
	 * @param y0 
	 */
	void linearPoint(EDouble /*in*/m = 0.0, EDouble /*in*/x = 0.0,
			EDouble /*in*/x0 = 0.0, EDouble /*in*/y0 = 0.0);
};
/************************************************************/
/* External declarations (package visibility)               */
/************************************************************/

/* Inline functions                                         */

/************************************************************
 End of MainGUI class header
 ************************************************************/

#endif