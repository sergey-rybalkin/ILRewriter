

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for ILRewriter.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ILRewriter_i_h__
#define __ILRewriter_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IILRewriter_FWD_DEFINED__
#define __IILRewriter_FWD_DEFINED__
typedef interface IILRewriter IILRewriter;

#endif 	/* __IILRewriter_FWD_DEFINED__ */


#ifndef __ILRewriter_FWD_DEFINED__
#define __ILRewriter_FWD_DEFINED__

#ifdef __cplusplus
typedef class ILRewriter ILRewriter;
#else
typedef struct ILRewriter ILRewriter;
#endif /* __cplusplus */

#endif 	/* __ILRewriter_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IILRewriter_INTERFACE_DEFINED__
#define __IILRewriter_INTERFACE_DEFINED__

/* interface IILRewriter */
/* [unique][version][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IILRewriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7d34c41b-f3ed-473e-a6c2-cbd06942a50b")
    IILRewriter : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IILRewriterVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IILRewriter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IILRewriter * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IILRewriter * This);
        
        END_INTERFACE
    } IILRewriterVtbl;

    interface IILRewriter
    {
        CONST_VTBL struct IILRewriterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IILRewriter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IILRewriter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IILRewriter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IILRewriter_INTERFACE_DEFINED__ */



#ifndef __ILRewriterLib_LIBRARY_DEFINED__
#define __ILRewriterLib_LIBRARY_DEFINED__

/* library ILRewriterLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ILRewriterLib;

EXTERN_C const CLSID CLSID_ILRewriter;

#ifdef __cplusplus

class DECLSPEC_UUID("b45048d5-6f44-4fbe-ae88-b468a5e4927a")
ILRewriter;
#endif
#endif /* __ILRewriterLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


