#pragma once
#include "stdafx.h"
#undef  INTERFACE
#define INTERFACE   IWzFileSystem

DECLARE_INTERFACE_IID_(IWzFileSystem, IWzWritableNameSpace, "352d8655-51e4-4668-8ce4-0866e2b6a5b5") {
    BEGIN_INTERFACE;

    /*** IUnknown methods ***/
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, void** ppv) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;

    /*** IWzNameSpace methods ***/
    STDMETHOD(get_item)(THIS_ wchar_t*, tagVARIANT*) PURE;
    STDMETHOD(get_property)(THIS_ wchar_t*, tagVARIANT, IWzNameSpaceProperty**) PURE;
    STDMETHOD(get__NewEnum)(THIS_ IUnknown**) PURE;
    STDMETHOD(raw_Mount)(THIS_ wchar_t*, IWzNameSpace*, int) PURE;
    STDMETHOD(raw_Unmount)(THIS_ wchar_t*, tagVARIANT) PURE;
    STDMETHOD(raw__OnMountEvent)(THIS_ IWzNameSpace*, IWzNameSpace*, wchar_t*, int) PURE;
    STDMETHOD(raw__OnGetLocalObject)(THIS_ int, wchar_t*, int*, tagVARIANT*) PURE;

    /*** IWzWritableNameSpace methods ***/
    STDMETHOD(raw_CreateChildNameSpace)(THIS_ wchar_t*, IWzNameSpace**) PURE;
    STDMETHOD(raw_AddObject)(THIS_ wchar_t*, tagVARIANT, tagVARIANT*) PURE;
    STDMETHOD(raw_Unlink)(THIS_ wchar_t*) PURE;

    /*** IWzFileSystem methods ***/
    STDMETHOD(raw_Init)(THIS_ wchar_t*) PURE;

    END_INTERFACE;
};
_COM_SMARTPTR_TYPEDEF(IWzFileSystem, __uuidof(IWzFileSystem));