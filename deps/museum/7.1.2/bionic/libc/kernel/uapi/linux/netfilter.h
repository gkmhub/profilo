/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI__LINUX_NETFILTER_H
#define _UAPI__LINUX_NETFILTER_H
#define UAPI__LINUX_NETFILTER_H
#define UAPI__LINUX_NETFILTER_H_
#define __LINUX_NETFILTER_H
#define __LINUX_NETFILTER_H_
#define _UAPI__LINUX_NETFILTER_H_
#include <museum/7.1.2/bionic/libc/linux/types.h>
#include <museum/7.1.2/bionic/libc/linux/compiler.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <museum/7.1.2/bionic/libc/linux/sysctl.h>
#include <museum/7.1.2/bionic/libc/linux/in.h>
#include <museum/7.1.2/bionic/libc/linux/in6.h>
#define NF_DROP 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NF_ACCEPT 1
#define NF_STOLEN 2
#define NF_QUEUE 3
#define NF_REPEAT 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NF_STOP 5
#define NF_MAX_VERDICT NF_STOP
#define NF_VERDICT_MASK 0x000000ff
#define NF_VERDICT_FLAG_QUEUE_BYPASS 0x00008000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NF_VERDICT_QMASK 0xffff0000
#define NF_VERDICT_QBITS 16
#define NF_QUEUE_NR(x) ((((x) << 16) & NF_VERDICT_QMASK) | NF_QUEUE)
#define NF_DROP_ERR(x) (((- x) << 16) | NF_DROP)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NFC_UNKNOWN 0x4000
#define NFC_ALTERED 0x8000
#define NF_VERDICT_BITS 16
enum nf_inet_hooks {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NF_INET_PRE_ROUTING,
  NF_INET_LOCAL_IN,
  NF_INET_FORWARD,
  NF_INET_LOCAL_OUT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NF_INET_POST_ROUTING,
  NF_INET_NUMHOOKS
};
enum nf_dev_hooks {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NF_NETDEV_INGRESS,
  NF_NETDEV_NUMHOOKS
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFPROTO_UNSPEC = 0,
  NFPROTO_INET = 1,
  NFPROTO_IPV4 = 2,
  NFPROTO_ARP = 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFPROTO_NETDEV = 5,
  NFPROTO_BRIDGE = 7,
  NFPROTO_IPV6 = 10,
  NFPROTO_DECNET = 12,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NFPROTO_NUMPROTO,
};
union nf_inet_addr {
  __u32 all[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __be32 ip;
  __be32 ip6[4];
  struct in_addr in;
  struct in6_addr in6;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
