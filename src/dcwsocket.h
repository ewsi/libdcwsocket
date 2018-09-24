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
