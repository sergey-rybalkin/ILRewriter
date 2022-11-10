// dllmain.h : Declaration of module class.

class CILRewriterModule : public ATL::CAtlDllModuleT< CILRewriterModule >
{
public :
	DECLARE_LIBID(LIBID_ILRewriterLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ILREWRITER, "{7d34c41b-f3ed-473e-a6c2-cbd06942a50b}")
};

extern class CILRewriterModule _AtlModule;
