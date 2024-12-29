#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <windows.h>

// reference additional headers your program requires here
#include "include/wil/com.h"
#include <tuple>
#include <robin_set.h>
#include <robin_map.h>

#include <iostream>
#include "Memory.h"

#include <atlstr.h>
#include "unknwn.h"

#include "comip.h"
#include "comdef.h"
#include "asserts.h"
#include "logger.h"
#include <intrin.h>
#include <mutex>
#include <thread>
#include <heapapi.h>

#include "CanvasType.h"
#include "IWzNameSpaceProperty.h"
#include "IWzNameSpace.h"
#include "IWzWritableNameSpace.h"
#include "IWzArchive.h"
#include "IWzSeekableArchive.h"
#include "IWzPackage.h"
#include "IWzFileSystem.h"
#include "IWzSerialize.h"
#include "IWzShape2D.h"
#include "IWzUOL.h"
#include "IWzProperty.h"
#include "IWzVector2D.h"
#include "IWzRawCanvas.h"
#include "IWzFont.h"
#include "IWzRawCanvasAllocator.h"
#include "IWzCanvas.h"
#include "IWzResMan.h"
#include "IWzGr2DLayer.h"
#include "IWzGr2D.h"

#include "ZXString.h"
#include "ZAllocBase.h"
#include "ZAllocAnonSelector.h"
#include "ZAllocStrSelector.h"
#include "ZFatalSection.h"
#include "ZAllocEx.h"
#include "ZArray.h"
#include "ZRefCounted.h"
#include "ZRefCountedAccessor.h"
#include "ZRecyclableAvBuffer.h"
#include "ZRecyclable.h"
#include "ZRefCountedDummy.h"
#include "ZRef.h"
#include "ZMap.h"
#include "ZList.h"
#include "ZInetAddr.h"
#include "ZSocketBuffer.h"
#include "ZSocketBase.h"
#include "ZtlVariantT.h"
#include "ZtlBstT.h"


#include "CUser.h"
#include "CAvatar.h"
#include "COutPacket.h"
#include "CClientSocket.h"

#include "TSecType.h"
#include "TSingleton.h"

#include "codecaves.h"
#include "AddyLocations.h"
#include "Client.h"
#include "Resolution.h"