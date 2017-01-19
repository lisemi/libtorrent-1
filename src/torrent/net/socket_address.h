#ifndef LIBTORRENT_NET_SOCKET_ADDRESS_H
#define LIBTORRENT_NET_SOCKET_ADDRESS_H

#include <memory>
#include <string>
#include <torrent/common.h>

namespace torrent {

bool sa_is_bindable(const sockaddr* sockaddr) LIBTORRENT_EXPORT;
bool sa_is_default(const sockaddr* sockaddr) LIBTORRENT_EXPORT;

size_t sa_length(const sockaddr* sa) LIBTORRENT_EXPORT;

std::unique_ptr<sockaddr> sa_make_unspec() LIBTORRENT_EXPORT;

std::unique_ptr<sockaddr> sa_copy(const sockaddr* sa) LIBTORRENT_EXPORT;
std::unique_ptr<sockaddr> sa_copy_inet(const sockaddr_in* sa) LIBTORRENT_EXPORT;
std::unique_ptr<sockaddr> sa_copy_inet6(const sockaddr_in6* sa) LIBTORRENT_EXPORT;

std::unique_ptr<sockaddr_in>  sa_inet_copy(const sockaddr_in* sa) LIBTORRENT_EXPORT;
std::unique_ptr<sockaddr_in6> sa_inet6_copy(const sockaddr_in6* sa) LIBTORRENT_EXPORT;

std::string sa_pretty_address_str(const sockaddr* sockaddr) LIBTORRENT_EXPORT;

void sa_inet6_clear(sockaddr_in6* sa) LIBTORRENT_EXPORT;

void sa_inet_mapped_inet6(const sockaddr_in* sa, sockaddr_in6* mapped) LIBTORRENT_EXPORT;

}

#endif