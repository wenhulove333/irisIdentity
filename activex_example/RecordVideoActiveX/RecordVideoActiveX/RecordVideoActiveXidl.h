

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu May 21 16:40:34 2015
 */
/* Compiler settings for RecordVideoActiveX.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __RecordVideoActiveXidl_h__
#define __RecordVideoActiveXidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DRecordVideoActiveX_FWD_DEFINED__
#define ___DRecordVideoActiveX_FWD_DEFINED__
typedef interface _DRecordVideoActiveX _DRecordVideoActiveX;
#endif 	/* ___DRecordVideoActiveX_FWD_DEFINED__ */


#ifndef ___DRecordVideoActiveXEvents_FWD_DEFINED__
#define ___DRecordVideoActiveXEvents_FWD_DEFINED__
typedef interface _DRecordVideoActiveXEvents _DRecordVideoActiveXEvents;
#endif 	/* ___DRecordVideoActiveXEvents_FWD_DEFINED__ */


#ifndef __RecordVideoActiveX_FWD_DEFINED__
#define __RecordVideoActiveX_FWD_DEFINED__

#ifdef __cplusplus
typedef class RecordVideoActiveX RecordVideoActiveX;
#else
typedef struct RecordVideoActiveX RecordVideoActiveX;
#endif /* __cplusplus */

#endif 	/* __RecordVideoActiveX_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __RecordVideoActiveXLib_LIBRARY_DEFINED__
#define __RecordVideoActiveXLib_LIBRARY_DEFINED__

/* library RecordVideoActiveXLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_RecordVideoActiveXLib;

#ifndef ___DRecordVideoActiveX_DISPINTERFACE_DEFINED__
#define ___DRecordVideoActiveX_DISPINTERFACE_DEFINED__

/* dispinterface _DRecordVideoActiveX */
/* [uuid] */ 


EXTERN_C const IID DIID__DRecordVideoActiveX;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("CC4D8743-98AF-459D-A963-7ED1997ABF3D")
    _DRecordVideoActiveX : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DRecordVideoActiveXVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DRecordVideoActiveX * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DRecordVideoActiveX * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DRecordVideoActiveX * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DRecordVideoActiveX * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DRecordVideoActiveX * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DRecordVideoActiveX * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DRecordVideoActiveX * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DRecordVideoActiveXVtbl;

    interface _DRecordVideoActiveX
    {
        CONST_VTBL struct _DRecordVideoActiveXVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DRecordVideoActiveX_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DRecordVideoActiveX_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DRecordVideoActiveX_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DRecordVideoActiveX_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DRecordVideoActiveX_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DRecordVideoActiveX_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DRecordVideoActiveX_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DRecordVideoActiveX_DISPINTERFACE_DEFINED__ */


#ifndef ___DRecordVideoActiveXEvents_DISPINTERFACE_DEFINED__
#define ___DRecordVideoActiveXEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DRecordVideoActiveXEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DRecordVideoActiveXEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("981F13F5-F0D8-4890-929F-075E2F6458A4")
    _DRecordVideoActiveXEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DRecordVideoActiveXEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DRecordVideoActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DRecordVideoActiveXEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DRecordVideoActiveXEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DRecordVideoActiveXEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DRecordVideoActiveXEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DRecordVideoActiveXEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DRecordVideoActiveXEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DRecordVideoActiveXEventsVtbl;

    interface _DRecordVideoActiveXEvents
    {
        CONST_VTBL struct _DRecordVideoActiveXEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DRecordVideoActiveXEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DRecordVideoActiveXEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DRecordVideoActiveXEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DRecordVideoActiveXEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DRecordVideoActiveXEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DRecordVideoActiveXEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DRecordVideoActiveXEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DRecordVideoActiveXEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_RecordVideoActiveX;

#ifdef __cplusplus

class DECLSPEC_UUID("11E94B42-68FD-4960-A306-74C6A357EF65")
RecordVideoActiveX;
#endif
#endif /* __RecordVideoActiveXLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


