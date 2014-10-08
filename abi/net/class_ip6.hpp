#ifndef CLASS_IP6_HPP
#define CLASS_IP6_HPP

#include <delegate>
#include <net/class_ethernet.hpp>

/** IP6 layer skeleton */
class IP6 {
  
public:

  /** Handle IPv6 packet. */
  void handler(uint8_t* data, int len);
  
  /** Constructor. Requires ethernet to latch on to. */
  IP6(Ethernet& eth);
  
};

#endif