/**
 *  AMQP.h
 *
 *  Starting point for all includes of the Copernica AMQP library
 *
 *  @documentation public
 */

#pragma once

// base C++ include files
#include <vector>
#include <string>
#include <memory>
#include <map>
#include <unordered_map>
#include <queue>
#include <limits>
#include <cstddef>
#include <cstring>
#include <stdexcept>
#include <utility>
#include <iostream>
#include <algorithm>
#include <functional>

// base C include files
#include <stdint.h>
#include <math.h>

// forward declarations
#include <include/classes.h>

// utility classes
#include <include/endian.h>
#include <include/buffer.h>
#include <include/bytebuffer.h>
#include <include/receivedframe.h>
#include <include/outbuffer.h>
#include <include/watchable.h>
#include <include/monitor.h>

// amqp types
#include <include/field.h>
#include <include/numericfield.h>
#include <include/decimalfield.h>
#include <include/stringfield.h>
#include <include/booleanset.h>
#include <include/fieldproxy.h>
#include <include/table.h>
#include <include/array.h>

// envelope for publishing and consuming
#include <include/metadata.h>
#include <include/envelope.h>
#include <include/message.h>

// mid level includes
#include <include/exchangetype.h>
#include <include/flags.h>
#include <include/callbacks.h>
#include <include/deferred.h>
#include <include/deferredconsumer.h>
#include <include/deferredqueue.h>
#include <include/deferreddelete.h>
#include <include/deferredcancel.h>
#include <include/deferredget.h>
#include <include/channelimpl.h>
#include <include/channel.h>
#include <include/login.h>
#include <include/address.h>
#include <include/connectionhandler.h>
#include <include/connectionimpl.h>
#include <include/connection.h>
#include <include/tcphandler.h>
#include <include/tcpconnection.h>
#include <include/tcpchannel.h>
