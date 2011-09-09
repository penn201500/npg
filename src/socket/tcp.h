/*
 * tcp.h
 *
 *  Created on: 2011-8-23
 *      Author: wuyangchun
 */

#ifndef TCP_H_
#define TCP_H_

#include "socket_error.h"

class Tcp: public SocketError
{
public:
	Tcp();
	virtual ~Tcp();
public:
	bool connect(const char* ip, uint16_t port, time_t timeout);
	int send(const char* buffer, int buffer_len);
private:
	int m_sockfd;
};

#endif /* TCP_H_ */
