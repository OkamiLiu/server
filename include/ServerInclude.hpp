#ifndef __SERVERINCLUDE_H__
#define __SERVERINCLUDE_H__
#include "../session/ClientSession.h"
#include "../Factory/BaseFactory.h"
#include "../include/packHeader.hpp"

//Define the global server utilities
CBaseFactory<ClientSession> g_ClientNetWorkObjectFactory;
//CAccHandlerMgr g_AccHandlerMgr;
//CDBHandlerMgr g_DBHandlerMgr;
CPackageMgr<accFuncStruct> *g_HandlerMgr;

int32 MAXPKGLEN = 1024*4;
int32 SESSIONBUFLEN = 1024*512;


#endif
