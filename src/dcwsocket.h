/*
* Copyright (c) 2018 Cable Television Laboratories, Inc. ("CableLabs")
*                    and others.  All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at:
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
* Created by Jon Dennis (j.dennis@cablelabs.com)
*/


#ifndef DCW_SOCKET_H_INCLUDED
#define DCW_SOCKET_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

typedef struct dcw_socket * dcw_socket_t;

dcw_socket_t dcwsock_open(const char * const /* ifname */);
void dcwsock_close(dcw_socket_t /* s */);
int dcwsock_send(dcw_socket_t /* s */, const void * const /* buf */, const unsigned /* buf_size */, const unsigned char * const /* dest_macaddr */);
int dcwsock_recv(dcw_socket_t /* s */, void * const /* buf */, const unsigned /* buf_size */, unsigned char * const /* src_macaddr */);
void dcwsock_get_macaddr(dcw_socket_t /* s */, unsigned char * const output);
int dcwsock_get_fd(dcw_socket_t /* s */);

#ifdef __cplusplus
}; //extern "C" {
#endif

#endif
