#include <iostream>
#include "TestClient.h"
#include "../Test/include/TestAccess.h"
#include "../Factory/BaseFactory.h"
#include "../include/baseHeader.h"
#include "../network/include/Acceptor.h"
#include "../network/include/Connector.h"
#include "../include/ServerInclude.hpp"
#include "./include/TCSessionHandler.hpp"

#define ULIMITSVR 1

using namespace std;
extern void printItem(TestAccess *accessObj);

//extern CPackageMgr<accFuncStruct> *g_HandlerMgr;

int main(int argc, char **argv)
{
    signal(SIGPIPE, SIG_IGN);
    TestClient* testClient = TestClient::GetInstance();
    cout << "Hello world! ServerID is:" << testClient->getServerID() << endl;
    
    g_ClientNetWorkObjectFactory.init(1, 1);
    //g_HandlerMgr = new CTcHandlerMgr;
    //g_HandlerMgr->addAllHandle();

    int32 count = 1;
    if (argc == 2)
    {
        count = atoi(argv[1]);
    }
    testClient->setConnectCount(count);
    testClient->start();
    //Connector conn;
    //conn.start();

    testClient->update();

    return 0;
}
