// dllmain.h : Declaration of module class.

class CCOMDllModule : public ATL::CAtlDllModuleT< CCOMDllModule >
{
public :
	DECLARE_LIBID(LIBID_COMDllLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMDLL, "{6aa458f0-f12a-42f4-a3ba-6cfad965e882}")
};

extern class CCOMDllModule _AtlModule;
