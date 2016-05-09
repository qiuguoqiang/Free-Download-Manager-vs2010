

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Mon Feb 29 17:42:20 2016
 */
/* Compiler settings for Fdm.idl:
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

MIDL_DEFINE_GUID(IID, IID_IWGUrlReceiver,0x454A4044,0x16EC,0x4D64,0x90,0x69,0xC5,0xB8,0x83,0x2B,0x7B,0x55);


MIDL_DEFINE_GUID(IID, IID_IWGUrlListReceiver,0x42E8D680,0xA18B,0x4CAA,0xAC,0xE0,0x18,0xEA,0x05,0xE4,0xA0,0x56);


MIDL_DEFINE_GUID(IID, IID_IFdmFlvDownload,0xE66B63B0,0x49F8,0x47E3,0xA9,0xBA,0x79,0x92,0x87,0xB5,0x9E,0x87);


MIDL_DEFINE_GUID(IID, IID_IFDM,0xF8FA5B48,0xB7A2,0x4BC6,0x83,0x89,0x95,0x87,0x64,0x3A,0x46,0x60);


MIDL_DEFINE_GUID(IID, IID_IFDMDownload,0x8F2B3016,0x17D4,0x447A,0xB2,0x07,0xFF,0xA8,0x95,0x7A,0x83,0x4A);


MIDL_DEFINE_GUID(IID, IID_IFDMDownloadsStat,0x1B26E4A2,0x7F09,0x4365,0x9A,0xB8,0x13,0xE6,0x89,0x1E,0x42,0xCB);


MIDL_DEFINE_GUID(IID, IID_IFdmTorrentFilesRcvr,0x21402197,0xBB5B,0x476C,0xAA,0x1D,0x3F,0xFE,0xD8,0xED,0x81,0x3A);


MIDL_DEFINE_GUID(IID, IID_IFDMFlashVideoDownloads,0x0DC81A74,0x1FBD,0x4EF6,0x82,0xB2,0xDE,0x3F,0xA0,0x5E,0x82,0x33);


MIDL_DEFINE_GUID(IID, IID_IFdmUiWindow,0x4FEB1BAD,0x35AD,0x4a08,0xB6,0xEC,0xE6,0xD8,0x32,0xF1,0xED,0x4D);


MIDL_DEFINE_GUID(IID, LIBID_FdmLib,0xDA122254,0x5927,0x44C6,0x8E,0x37,0x45,0x94,0x73,0x38,0x40,0x04);


MIDL_DEFINE_GUID(CLSID, CLSID_WGUrlReceiver,0x959BA0A4,0x0893,0x48B4,0x8B,0x02,0xBA,0x0D,0xA0,0xA4,0x01,0xFE);


MIDL_DEFINE_GUID(CLSID, CLSID_WGUrlListReceiver,0x83E6F60E,0x7147,0x4475,0x9D,0xF6,0x5F,0x1E,0x23,0x7F,0xE2,0xCE);


MIDL_DEFINE_GUID(CLSID, CLSID_FdmFlvDownload,0x42130E6A,0x0045,0x4208,0xA2,0x52,0x71,0xCA,0x12,0xC8,0xFE,0x99);


MIDL_DEFINE_GUID(CLSID, CLSID_FDM,0x01483019,0xD8C9,0x47D8,0x8E,0x93,0xAF,0x03,0x2E,0xBF,0xAD,0xA6);


MIDL_DEFINE_GUID(CLSID, CLSID_FDMDownloadsStat,0xF01F76EC,0x3376,0x4E62,0xB2,0x01,0x80,0x74,0xC8,0x23,0x93,0x76);


MIDL_DEFINE_GUID(CLSID, CLSID_FDMDownload,0xDEBBD32E,0x1D08,0x4F6A,0x8A,0x26,0xE1,0xB3,0xD7,0x68,0xA1,0xE5);


MIDL_DEFINE_GUID(CLSID, CLSID_FDMUploader,0x4D6295C9,0x2765,0x49B0,0xA4,0x5B,0x41,0x36,0xB6,0x10,0x95,0x4C);


MIDL_DEFINE_GUID(CLSID, CLSID_FDMUploadPackage,0x56101D38,0x6A8B,0x49D6,0x8C,0x9D,0x93,0x95,0x95,0xAB,0x2D,0x19);


MIDL_DEFINE_GUID(CLSID, CLSID_FdmTorrentFilesRcvr,0x19CAD08F,0x0413,0x47F8,0xB1,0xD9,0x5D,0x66,0x82,0x6E,0x1E,0x39);


MIDL_DEFINE_GUID(CLSID, CLSID_FDMFlashVideoDownloads,0xD8E9E2ED,0x846D,0x4711,0xA9,0xB8,0xA2,0x93,0x12,0x15,0x7D,0xB4);


MIDL_DEFINE_GUID(CLSID, CLSID_FdmUiWindow,0x5A810830,0xB199,0x4a4c,0x89,0xCB,0x92,0x8D,0x96,0x0A,0x5C,0x04);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



