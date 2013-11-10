﻿/************************************************************************************
 *	File   Name: 																	*
 * 	Description:																	*
 *																					*
 *	Create Time:																	*
 *		 Author: xzben																*
 *	Author Blog:  www.xzben.com														*
 ************************************************************************************
 * Modify Log: 																		*
 *																					*
 ************************************************************************************/

#ifndef __2013_10_27_NETPROTOCOL_H__
#define __2013_10_27_NETPROTOCOL_H__

#include "Observer.h"
#include "NetSocket.h"

namespace XZBEN
{
class NetSocket;
class NetTcp;
class NetUdp;

class NetProtocol : public Observer
{
public:
	NetProtocol();
	virtual ~NetProtocol();
	virtual	bool OnConnect(NetSocket *pNetSocket) =0;
	virtual bool OnDisconnect(NetSocket *pNetSocket)=0;
	virtual bool OnMsg(NetSocket *pNetSocket) =0;
protected:
	//virtual
	bool Update(STATUS status, NetSocket *pNetSocket)override;
};

};//namespace XZBEN
#endif//__YYYY_MM_DD_XXXXX_H__