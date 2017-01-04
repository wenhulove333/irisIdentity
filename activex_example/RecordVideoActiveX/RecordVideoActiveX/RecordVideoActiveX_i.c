

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_RecordVideoActiveXLib,0x2114D76E,0x1272,0x4289,0xB2,0x00,0xDA,0xE0,0x71,0x2C,0x4E,0xE9);


MIDL_DEFINE_GUID(IID, DIID__DRecordVideoActiveX,0xCC4D8743,0x98AF,0x459D,0xA9,0x63,0x7E,0xD1,0x99,0x7A,0xBF,0x3D);


MIDL_DEFINE_GUID(IID, DIID__DRecordVideoActiveXEvents,0x981F13F5,0xF0D8,0x4890,0x92,0x9F,0x07,0x5E,0x2F,0x64,0x58,0xA4);


MIDL_DEFINE_GUID(CLSID, CLSID_RecordVideoActiveX,0x11E94B42,0x68FD,0x4960,0xA3,0x06,0x74,0xC6,0xA3,0x57,0xEF,0x65);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



