/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Windows Preferences
 #	author : miyako
 #	11/26/13
 #
 # --------------------------------------------------------------------------------*/

#include "4DPluginAPI.h"

// --- Power
void SYSTEM_Get_power_status(sLONG_PTR *pResult, PackagePtr pParams);
void SYSTEM_Set_execution_state(sLONG_PTR *pResult, PackagePtr pParams);

// --- Beep
void SYSTEM_Set_beep_enabled(sLONG_PTR *pResult, PackagePtr pParams);
void SYSTEM_Get_beep_enabled(sLONG_PTR *pResult, PackagePtr pParams);

// --- Screensaver
void SYSTEM_Set_screensaver_timeout(sLONG_PTR *pResult, PackagePtr pParams);
void SYSTEM_Get_screensaver_timeout(sLONG_PTR *pResult, PackagePtr pParams);
void SYSTEM_Set_screensaver_active(sLONG_PTR *pResult, PackagePtr pParams);
void SYSTEM_Get_screensaver_active(sLONG_PTR *pResult, PackagePtr pParams);
