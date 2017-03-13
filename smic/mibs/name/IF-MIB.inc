-- file: IF-MIB.inc

-- Modules referenced by module IF-MIB
#condInclude "SNMPv2-SMI.inc"
#condInclude "SNMPv2-TC.inc"
#condInclude "SNMPv2-CONF.inc"
#condInclude "SNMPv2-MIB.inc"
#condInclude "IANAifType-MIB.inc"
#condInclude "RFC1213-MIB.inc"

-- MIB module
#pushOpt
-- Remove strict checking
-- Common Options:
--   C - check size/range present
--   W - don't allow size/range for items in a sequence
--   7 - restrict INTEGER values below 2G-1
--   R - check (in V1) that INDEX objs are read-only
--   S - require (in V2) that IMPORTS be specified for items in compliances
--   B - strong checking for size/range of items in index clause
#removeOpt "C W 7 R S B"

-- Loosen checking
-- Common Options:
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
--   Z - allow bad table modelling practices
--#addOpt "4 K O P T M F G N I Z"
#addOpt "M" -- no check (in v2) that all NTs and accessible OTs are in a group
#addOpt "F" -- allow integer/integer32 index items without a range
#addOpt "G" -- allow unused IMPORTS and textual conventions

-- the following, defined in RFC1213-MIB, are redefined in IF-MIB
#unregister RFC1213-MIB interfaces
#unregister RFC1213-MIB ifNumber
#unregister RFC1213-MIB ifTable
#unregister RFC1213-MIB ifEntry
#unregister RFC1213-MIB ifIndex
#unregister RFC1213-MIB ifDescr
#unregister RFC1213-MIB ifType
#unregister RFC1213-MIB ifMtu
#unregister RFC1213-MIB ifSpeed
#unregister RFC1213-MIB ifPhysAddress
#unregister RFC1213-MIB ifAdminStatus
#unregister RFC1213-MIB ifOperStatus
#unregister RFC1213-MIB ifLastChange
#unregister RFC1213-MIB ifInOctets
#unregister RFC1213-MIB ifInUcastPkts
#unregister RFC1213-MIB ifInNUcastPkts
#unregister RFC1213-MIB ifInDiscards
#unregister RFC1213-MIB ifInErrors
#unregister RFC1213-MIB ifInUnknownProtos
#unregister RFC1213-MIB ifOutOctets
#unregister RFC1213-MIB ifOutUcastPkts
#unregister RFC1213-MIB ifOutNUcastPkts
#unregister RFC1213-MIB ifOutDiscards
#unregister RFC1213-MIB ifOutErrors
#unregister RFC1213-MIB ifOutQLen
#unregister RFC1213-MIB ifSpecific

#condInclude "IF-MIB.my"
#condExcludeModule IF-MIB 0
#popOpt
