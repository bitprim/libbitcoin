#ifndef LIBBITCOIN_NET_TYPES_H
#define LIBBITCOIN_NET_TYPES_H

#include <boost/ptr_container/ptr_vector.hpp>
#include <memory>

namespace libbitcoin {
namespace net {

class network;
class network_impl;
class channel_pimpl;
class dialect;

using std::shared_ptr;

typedef shared_ptr<network> network_ptr;
typedef shared_ptr<dialect> dialect_ptr;
typedef unsigned int channel_handle;
typedef boost::ptr_vector<channel_pimpl> channel_list;


} // net
} // libbitcoin

#endif

