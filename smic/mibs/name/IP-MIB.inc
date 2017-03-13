-- file: IP-MIB.inc (RFC 2011)

-- Modules referenced by module IP-MIB
#condInclude "SNMPv2-SMI.inc"
#condInclude "SNMPv2-TC.inc"
#condInclude "SNMPv2-CONF.inc"

-- MIB module
#pushOpt
-- Remove strict checking
-- Options:
--   C - check size/range present
--   W - don't allow size/range for items in a sequence
--   7 - restrict INTEGER values below 2G-1
--   R - check (in V1) that INDEX objs are read-only
--   S - require (in V2) that IMPORTS be specified for items in compliances
--   B - strong checking for size/range of items in index clause
#removeOpt "C W 7 R S B"

-- Loosen checking
-- Options:
--   4 - allow non-standard access for objects
--   K - allow (in v1) zero valued enums
--   O - allow (in v2) hyphens in labels for enumerated values
--   P - allow (in v2) hyphens in descriptors(identifiers)
--   T - no check (in v2) of proper access for items in groups
--   M - no check (in v2) that all NTs and accessible OTs are in a group
--   F - allow integer/integer32 index items without a range
--   G - allow unused IMPORTS and textual conventions
--   N - no check (in v2) of access of objects in notifications
--   I - use (in v1) the v2 rules for checking ACCESS of index items
--#addOpt "4 K O P T M F G N I"

#condInclude "RFC1213-MIB.inc"

-- the following, defined in RFC1213-MIB, are redefined in IP-MIB
#unregister RFC1213-MIB ipForwarding
#unregister RFC1213-MIB ipDefaultTTL
#unregister RFC1213-MIB ipInReceives
#unregister RFC1213-MIB ipInHdrErrors
#unregister RFC1213-MIB ipInAddrErrors
#unregister RFC1213-MIB ipForwDatagrams
#unregister RFC1213-MIB ipInUnknownProtos
#unregister RFC1213-MIB ipInDiscards
#unregister RFC1213-MIB ipInDelivers
#unregister RFC1213-MIB ipOutRequests
#unregister RFC1213-MIB ipOutDiscards
#unregister RFC1213-MIB ipOutNoRoutes
#unregister RFC1213-MIB ipReasmTimeout
#unregister RFC1213-MIB ipReasmReqds
#unregister RFC1213-MIB ipReasmOKs
#unregister RFC1213-MIB ipReasmFails
#unregister RFC1213-MIB ipFragOKs
#unregister RFC1213-MIB ipFragFails
#unregister RFC1213-MIB ipFragCreates
#unregister RFC1213-MIB ipAddrTable
#unregister RFC1213-MIB ipAddrEntry
#unregister RFC1213-MIB ipAdEntAddr
#unregister RFC1213-MIB ipAdEntIfIndex
#unregister RFC1213-MIB ipAdEntNetMask
#unregister RFC1213-MIB ipAdEntBcastAddr
#unregister RFC1213-MIB ipAdEntReasmMaxSize
#unregister RFC1213-MIB ipNetToMediaTable
#unregister RFC1213-MIB ipNetToMediaEntry
#unregister RFC1213-MIB ipNetToMediaIfIndex
#unregister RFC1213-MIB ipNetToMediaPhysAddress
#unregister RFC1213-MIB ipNetToMediaNetAddress
#unregister RFC1213-MIB ipNetToMediaType
#unregister RFC1213-MIB ipRoutingDiscards

#unregister RFC1213-MIB icmpInMsgs
#unregister RFC1213-MIB icmpInErrors
#unregister RFC1213-MIB icmpInDestUnreachs
#unregister RFC1213-MIB icmpInTimeExcds
#unregister RFC1213-MIB icmpInParmProbs
#unregister RFC1213-MIB icmpInSrcQuenchs
#unregister RFC1213-MIB icmpInRedirects
#unregister RFC1213-MIB icmpInEchos
#unregister RFC1213-MIB icmpInEchoReps
#unregister RFC1213-MIB icmpInTimestamps
#unregister RFC1213-MIB icmpInTimestampReps
#unregister RFC1213-MIB icmpInAddrMasks
#unregister RFC1213-MIB icmpInAddrMaskReps
#unregister RFC1213-MIB icmpOutMsgs
#unregister RFC1213-MIB icmpOutErrors
#unregister RFC1213-MIB icmpOutDestUnreachs
#unregister RFC1213-MIB icmpOutTimeExcds
#unregister RFC1213-MIB icmpOutParmProbs
#unregister RFC1213-MIB icmpOutSrcQuenchs
#unregister RFC1213-MIB icmpOutRedirects
#unregister RFC1213-MIB icmpOutEchos
#unregister RFC1213-MIB icmpOutEchoReps
#unregister RFC1213-MIB icmpOutTimestamps
#unregister RFC1213-MIB icmpOutTimestampReps
#unregister RFC1213-MIB icmpOutAddrMasks
#unregister RFC1213-MIB icmpOutAddrMaskReps


#condInclude "IP-MIB.my"
#condExcludeModule IP-MIB 0
#popOpt

