
[!CODE!]
#define SYSTEM_Port_ENABLE_[!IF "var:defined('postBuildVariant')"!][!"text:toupper($postBuildVariant)"!][!ENDIF!]                 ([!IF "CanGeneral/CanDevErrorDetect"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])
[!ENDCODE!]
 



