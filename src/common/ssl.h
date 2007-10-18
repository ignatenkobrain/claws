/*
 * Sylpheed -- a GTK+ based, lightweight, and fast e-mail client
 * Copyright (C) 1999-2007 Hiroyuki Yamamoto and the Claws Mail team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef __SSL_H__
#define __SSL_H__

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif

typedef enum {
	SSL_NONE,
	SSL_TUNNEL,
	SSL_STARTTLS
} SSLType;

#if (defined(USE_OPENSSL) || defined (USE_GNUTLS))
#include <glib.h>

#if USE_OPENSSL
#include <openssl/crypto.h>
#include <openssl/x509.h>
#include <openssl/pem.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/evp.h>
#else
#include <gnutls/gnutls.h>
#include <gnutls/x509.h>
#endif
#include "socket.h"

typedef enum {
	SSL_METHOD_SSLv23,
	SSL_METHOD_TLSv1
} SSLMethod;

void ssl_init				(void);
void ssl_done				(void);
gboolean ssl_init_socket		(SockInfo	*sockinfo);
gboolean ssl_init_socket_with_method	(SockInfo	*sockinfo,
					 SSLMethod	 method);
void ssl_done_socket			(SockInfo	*sockinfo);

#endif /* USE_OPENSSL */

#endif /* __SSL_H__ */
